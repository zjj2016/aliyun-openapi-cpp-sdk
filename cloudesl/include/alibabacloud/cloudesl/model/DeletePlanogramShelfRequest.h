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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_DELETEPLANOGRAMSHELFREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_DELETEPLANOGRAMSHELFREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT DeletePlanogramShelfRequest : public RpcServiceRequest
			{

			public:
				DeletePlanogramShelfRequest();
				~DeletePlanogramShelfRequest();

				bool getBeAutoRefresh()const;
				void setBeAutoRefresh(bool beAutoRefresh);
				std::string getStoreId()const;
				void setStoreId(const std::string& storeId);
				std::string getShelf()const;
				void setShelf(const std::string& shelf);

            private:
				bool beAutoRefresh_;
				std::string storeId_;
				std::string shelf_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_DELETEPLANOGRAMSHELFREQUEST_H_