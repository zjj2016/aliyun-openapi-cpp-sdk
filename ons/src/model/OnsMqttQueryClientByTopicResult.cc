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

#include <alibabacloud/ons/model/OnsMqttQueryClientByTopicResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsMqttQueryClientByTopicResult::OnsMqttQueryClientByTopicResult() :
	ServiceResult()
{}

OnsMqttQueryClientByTopicResult::OnsMqttQueryClientByTopicResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsMqttQueryClientByTopicResult::~OnsMqttQueryClientByTopicResult()
{}

void OnsMqttQueryClientByTopicResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto mqttClientSetDoNode = value["MqttClientSetDo"];
	if(!mqttClientSetDoNode["OnlineCount"].isNull())
		mqttClientSetDo_.onlineCount = std::stol(mqttClientSetDoNode["OnlineCount"].asString());
	if(!mqttClientSetDoNode["PersistCount"].isNull())
		mqttClientSetDo_.persistCount = std::stol(mqttClientSetDoNode["PersistCount"].asString());
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

OnsMqttQueryClientByTopicResult::MqttClientSetDo OnsMqttQueryClientByTopicResult::getMqttClientSetDo()const
{
	return mqttClientSetDo_;
}

std::string OnsMqttQueryClientByTopicResult::getHelpUrl()const
{
	return helpUrl_;
}

