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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTUSERSREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTUSERSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>

namespace AlibabaCloud
{
	namespace Dms_enterprise
	{
		namespace Model
		{
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT ListUsersRequest : public RpcServiceRequest
			{

			public:
				ListUsersRequest();
				~ListUsersRequest();

				std::string getUserState()const;
				void setUserState(const std::string& userState);
				std::string getRole()const;
				void setRole(const std::string& role);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getSearchKey()const;
				void setSearchKey(const std::string& searchKey);
				long getTid()const;
				void setTid(long tid);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);

            private:
				std::string userState_;
				std::string role_;
				int pageSize_;
				std::string searchKey_;
				long tid_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTUSERSREQUEST_H_