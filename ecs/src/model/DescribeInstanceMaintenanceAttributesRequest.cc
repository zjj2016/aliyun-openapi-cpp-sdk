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

#include <alibabacloud/ecs/model/DescribeInstanceMaintenanceAttributesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstanceMaintenanceAttributesRequest;

DescribeInstanceMaintenanceAttributesRequest::DescribeInstanceMaintenanceAttributesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeInstanceMaintenanceAttributes")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeInstanceMaintenanceAttributesRequest::~DescribeInstanceMaintenanceAttributesRequest()
{}

long DescribeInstanceMaintenanceAttributesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstanceMaintenanceAttributesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeInstanceMaintenanceAttributesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstanceMaintenanceAttributesRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeInstanceMaintenanceAttributesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstanceMaintenanceAttributesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

long DescribeInstanceMaintenanceAttributesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInstanceMaintenanceAttributesRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeInstanceMaintenanceAttributesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstanceMaintenanceAttributesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstanceMaintenanceAttributesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstanceMaintenanceAttributesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeInstanceMaintenanceAttributesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceMaintenanceAttributesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> DescribeInstanceMaintenanceAttributesRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInstanceMaintenanceAttributesRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int dep1 = 0; dep1!= instanceId.size(); dep1++) {
		setParameter("InstanceId."+ std::to_string(dep1), instanceId.at(dep1));
	}
}

