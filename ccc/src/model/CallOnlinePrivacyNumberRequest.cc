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

#include <alibabacloud/ccc/model/CallOnlinePrivacyNumberRequest.h>

using AlibabaCloud::CCC::Model::CallOnlinePrivacyNumberRequest;

CallOnlinePrivacyNumberRequest::CallOnlinePrivacyNumberRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "CallOnlinePrivacyNumber")
{
	setMethod(HttpRequest::Method::Post);
}

CallOnlinePrivacyNumberRequest::~CallOnlinePrivacyNumberRequest()
{}

std::string CallOnlinePrivacyNumberRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CallOnlinePrivacyNumberRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CallOnlinePrivacyNumberRequest::getTelA()const
{
	return telA_;
}

void CallOnlinePrivacyNumberRequest::setTelA(const std::string& telA)
{
	telA_ = telA;
	setParameter("TelA", telA);
}

std::string CallOnlinePrivacyNumberRequest::getTelB()const
{
	return telB_;
}

void CallOnlinePrivacyNumberRequest::setTelB(const std::string& telB)
{
	telB_ = telB;
	setParameter("TelB", telB);
}

std::string CallOnlinePrivacyNumberRequest::getInstanceId()const
{
	return instanceId_;
}

void CallOnlinePrivacyNumberRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

