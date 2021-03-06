/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_MOPEN_MODEL_MOPENQUERYCANVASRESULT_H_
#define ALIBABACLOUD_MOPEN_MODEL_MOPENQUERYCANVASRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mopen/MoPenExport.h>

namespace AlibabaCloud
{
	namespace MoPen
	{
		namespace Model
		{
			class ALIBABACLOUD_MOPEN_EXPORT MoPenQueryCanvasResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Canvas
					{
						int pageId;
						std::string lastModified;
						int status;
						std::string attribute;
						std::string createTime;
						long id;
						std::string sessionId;
						std::string url;
						std::string deviceName;
					};
					std::vector<Canvas> canvasList;
				};


				MoPenQueryCanvasResult();
				explicit MoPenQueryCanvasResult(const std::string &payload);
				~MoPenQueryCanvasResult();
				std::string getDescription()const;
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string description_;
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MOPEN_MODEL_MOPENQUERYCANVASRESULT_H_