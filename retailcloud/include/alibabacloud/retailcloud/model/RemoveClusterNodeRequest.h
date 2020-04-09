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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_REMOVECLUSTERNODEREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_REMOVECLUSTERNODEREQUEST_H_

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
			class ALIBABACLOUD_RETAILCLOUD_EXPORT RemoveClusterNodeRequest : public RpcServiceRequest
			{

			public:
				RemoveClusterNodeRequest();
				~RemoveClusterNodeRequest();

				std::vector<std::string> getEcsInstanceIdList()const;
				void setEcsInstanceIdList(const std::vector<std::string>& ecsInstanceIdList);
				std::string getClusterInstanceId()const;
				void setClusterInstanceId(const std::string& clusterInstanceId);

            private:
				std::vector<std::string> ecsInstanceIdList_;
				std::string clusterInstanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_REMOVECLUSTERNODEREQUEST_H_