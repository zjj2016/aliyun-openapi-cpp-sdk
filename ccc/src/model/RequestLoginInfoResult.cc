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

#include <alibabacloud/ccc/model/RequestLoginInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

RequestLoginInfoResult::RequestLoginInfoResult() :
	ServiceResult()
{}

RequestLoginInfoResult::RequestLoginInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RequestLoginInfoResult::~RequestLoginInfoResult()
{}

void RequestLoginInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto loginInfoNode = value["LoginInfo"];
	if(!loginInfoNode["UserName"].isNull())
		loginInfo_.userName = loginInfoNode["UserName"].asString();
	if(!loginInfoNode["DisplayName"].isNull())
		loginInfo_.displayName = loginInfoNode["DisplayName"].asString();
	if(!loginInfoNode["PhoneNumber"].isNull())
		loginInfo_.phoneNumber = loginInfoNode["PhoneNumber"].asString();
	if(!loginInfoNode["Region"].isNull())
		loginInfo_.region = loginInfoNode["Region"].asString();
	if(!loginInfoNode["WebRtcUrl"].isNull())
		loginInfo_.webRtcUrl = loginInfoNode["WebRtcUrl"].asString();
	if(!loginInfoNode["AgentServerUrl"].isNull())
		loginInfo_.agentServerUrl = loginInfoNode["AgentServerUrl"].asString();
	if(!loginInfoNode["Extension"].isNull())
		loginInfo_.extension = loginInfoNode["Extension"].asString();
	if(!loginInfoNode["TenantId"].isNull())
		loginInfo_.tenantId = loginInfoNode["TenantId"].asString();
	if(!loginInfoNode["Signature"].isNull())
		loginInfo_.signature = loginInfoNode["Signature"].asString();
	if(!loginInfoNode["SignData"].isNull())
		loginInfo_.signData = loginInfoNode["SignData"].asString();
	auto allRolesNode = loginInfoNode["Roles"]["Role"];
	for (auto loginInfoNodeRolesRole : allRolesNode)
	{
		LoginInfo::Role roleObject;
		if(!loginInfoNodeRolesRole["RoleId"].isNull())
			roleObject.roleId = loginInfoNodeRolesRole["RoleId"].asString();
		if(!loginInfoNodeRolesRole["InstanceId"].isNull())
			roleObject.instanceId = loginInfoNodeRolesRole["InstanceId"].asString();
		if(!loginInfoNodeRolesRole["RoleName"].isNull())
			roleObject.roleName = loginInfoNodeRolesRole["RoleName"].asString();
		if(!loginInfoNodeRolesRole["RoleDescription"].isNull())
			roleObject.roleDescription = loginInfoNodeRolesRole["RoleDescription"].asString();
		loginInfo_.roles.push_back(roleObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

RequestLoginInfoResult::LoginInfo RequestLoginInfoResult::getLoginInfo()const
{
	return loginInfo_;
}

std::string RequestLoginInfoResult::getMessage()const
{
	return message_;
}

int RequestLoginInfoResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string RequestLoginInfoResult::getCode()const
{
	return code_;
}

bool RequestLoginInfoResult::getSuccess()const
{
	return success_;
}

