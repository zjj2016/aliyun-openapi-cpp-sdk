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

#include <alibabacloud/r-kvstore/model/DeleteDedicatedUserClusterRequest.h>

using AlibabaCloud::R_kvstore::Model::DeleteDedicatedUserClusterRequest;

DeleteDedicatedUserClusterRequest::DeleteDedicatedUserClusterRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DeleteDedicatedUserCluster")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDedicatedUserClusterRequest::~DeleteDedicatedUserClusterRequest()
{}

long DeleteDedicatedUserClusterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteDedicatedUserClusterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteDedicatedUserClusterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteDedicatedUserClusterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteDedicatedUserClusterRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteDedicatedUserClusterRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteDedicatedUserClusterRequest::getRegionId()const
{
	return regionId_;
}

void DeleteDedicatedUserClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteDedicatedUserClusterRequest::getEngine()const
{
	return engine_;
}

void DeleteDedicatedUserClusterRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string DeleteDedicatedUserClusterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteDedicatedUserClusterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteDedicatedUserClusterRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteDedicatedUserClusterRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DeleteDedicatedUserClusterRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteDedicatedUserClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

long DeleteDedicatedUserClusterRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteDedicatedUserClusterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteDedicatedUserClusterRequest::getZoneId()const
{
	return zoneId_;
}

void DeleteDedicatedUserClusterRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

