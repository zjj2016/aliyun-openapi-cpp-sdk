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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_QUERYCOMMUNICATIONLOGSRESULT_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_QUERYCOMMUNICATIONLOGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/trademark/TrademarkExport.h>

namespace AlibabaCloud
{
	namespace Trademark
	{
		namespace Model
		{
			class ALIBABACLOUD_TRADEMARK_EXPORT QueryCommunicationLogsResult : public ServiceResult
			{
			public:
				struct TaskList
				{
					std::string note;
					long createTime;
					long updateTime;
					std::string bizId;
					std::string partnerCode;
				};


				QueryCommunicationLogsResult();
				explicit QueryCommunicationLogsResult(const std::string &payload);
				~QueryCommunicationLogsResult();
				std::vector<TaskList> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<TaskList> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_QUERYCOMMUNICATIONLOGSRESULT_H_