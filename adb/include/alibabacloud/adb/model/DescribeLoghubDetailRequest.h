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

#ifndef ALIBABACLOUD_ADB_MODEL_DESCRIBELOGHUBDETAILREQUEST_H_
#define ALIBABACLOUD_ADB_MODEL_DESCRIBELOGHUBDETAILREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/adb/AdbExport.h>

namespace AlibabaCloud
{
	namespace Adb
	{
		namespace Model
		{
			class ALIBABACLOUD_ADB_EXPORT DescribeLoghubDetailRequest : public RpcServiceRequest
			{

			public:
				DescribeLoghubDetailRequest();
				~DescribeLoghubDetailRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getProjectName()const;
				void setProjectName(const std::string& projectName);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getExportName()const;
				void setExportName(const std::string& exportName);

            private:
				long resourceOwnerId_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string projectName_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string exportName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ADB_MODEL_DESCRIBELOGHUBDETAILREQUEST_H_