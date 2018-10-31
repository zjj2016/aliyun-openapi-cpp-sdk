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

#include <alibabacloud/cdn/model/DescribeDomainRegionDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainRegionDataRequest;

DescribeDomainRegionDataRequest::DescribeDomainRegionDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainRegionData")
{}

DescribeDomainRegionDataRequest::~DescribeDomainRegionDataRequest()
{}

std::string DescribeDomainRegionDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainRegionDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainRegionDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainRegionDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainRegionDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainRegionDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainRegionDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainRegionDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeDomainRegionDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainRegionDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainRegionDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainRegionDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

