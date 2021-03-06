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

#include <alibabacloud/ccc/model/ListOutboundPhoneNumberOfUserRequest.h>

using AlibabaCloud::CCC::Model::ListOutboundPhoneNumberOfUserRequest;

ListOutboundPhoneNumberOfUserRequest::ListOutboundPhoneNumberOfUserRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListOutboundPhoneNumberOfUser")
{
	setMethod(HttpRequest::Method::Post);
}

ListOutboundPhoneNumberOfUserRequest::~ListOutboundPhoneNumberOfUserRequest()
{}

std::string ListOutboundPhoneNumberOfUserRequest::getUserId()const
{
	return userId_;
}

void ListOutboundPhoneNumberOfUserRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

int ListOutboundPhoneNumberOfUserRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListOutboundPhoneNumberOfUserRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListOutboundPhoneNumberOfUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListOutboundPhoneNumberOfUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListOutboundPhoneNumberOfUserRequest::getInstanceId()const
{
	return instanceId_;
}

void ListOutboundPhoneNumberOfUserRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListOutboundPhoneNumberOfUserRequest::getPageSize()const
{
	return pageSize_;
}

void ListOutboundPhoneNumberOfUserRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

