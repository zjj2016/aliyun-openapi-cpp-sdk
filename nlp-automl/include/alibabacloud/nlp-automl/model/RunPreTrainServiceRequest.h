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

#ifndef ALIBABACLOUD_NLP_AUTOML_MODEL_RUNPRETRAINSERVICEREQUEST_H_
#define ALIBABACLOUD_NLP_AUTOML_MODEL_RUNPRETRAINSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/nlp-automl/Nlp_automlExport.h>

namespace AlibabaCloud
{
	namespace Nlp_automl
	{
		namespace Model
		{
			class ALIBABACLOUD_NLP_AUTOML_EXPORT RunPreTrainServiceRequest : public RpcServiceRequest
			{

			public:
				RunPreTrainServiceRequest();
				~RunPreTrainServiceRequest();

				std::string getPredictContent()const;
				void setPredictContent(const std::string& predictContent);
				std::string getServiceVersion()const;
				void setServiceVersion(const std::string& serviceVersion);
				std::string getServiceName()const;
				void setServiceName(const std::string& serviceName);

            private:
				std::string predictContent_;
				std::string serviceVersion_;
				std::string serviceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NLP_AUTOML_MODEL_RUNPRETRAINSERVICEREQUEST_H_