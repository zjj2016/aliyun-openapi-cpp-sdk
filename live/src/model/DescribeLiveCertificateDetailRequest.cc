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

#include <alibabacloud/live/model/DescribeLiveCertificateDetailRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveCertificateDetailRequest;

DescribeLiveCertificateDetailRequest::DescribeLiveCertificateDetailRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveCertificateDetail")
{}

DescribeLiveCertificateDetailRequest::~DescribeLiveCertificateDetailRequest()
{}

std::string DescribeLiveCertificateDetailRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveCertificateDetailRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLiveCertificateDetailRequest::getCertName()const
{
	return certName_;
}

void DescribeLiveCertificateDetailRequest::setCertName(const std::string& certName)
{
	certName_ = certName;
	setParameter("CertName", certName);
}

long DescribeLiveCertificateDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveCertificateDetailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveCertificateDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveCertificateDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}
