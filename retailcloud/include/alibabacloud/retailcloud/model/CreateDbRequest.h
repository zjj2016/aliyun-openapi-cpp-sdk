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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_CREATEDBREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_CREATEDBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT CreateDbRequest : public RpcServiceRequest
			{

			public:
				CreateDbRequest();
				~CreateDbRequest();

				std::string getDbName()const;
				void setDbName(const std::string& dbName);
				std::string getDbInstanceId()const;
				void setDbInstanceId(const std::string& dbInstanceId);
				std::string getDbDescription()const;
				void setDbDescription(const std::string& dbDescription);
				std::string getCharacterSetName()const;
				void setCharacterSetName(const std::string& characterSetName);

            private:
				std::string dbName_;
				std::string dbInstanceId_;
				std::string dbDescription_;
				std::string characterSetName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_CREATEDBREQUEST_H_