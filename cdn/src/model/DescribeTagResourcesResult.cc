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

#include <alibabacloud/cdn/model/DescribeTagResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeTagResourcesResult::DescribeTagResourcesResult() :
	ServiceResult()
{}

DescribeTagResourcesResult::DescribeTagResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTagResourcesResult::~DescribeTagResourcesResult()
{}

void DescribeTagResourcesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTagResources = value["TagResources"]["TagResource"];
	for (auto value : allTagResources)
	{
		TagResource tagResourcesObject;
		if(!value["ResourceId"].isNull())
			tagResourcesObject.resourceId = value["ResourceId"].asString();
		auto allTag = value["Tag"]["TagItem"];
		for (auto value : allTag)
		{
			TagResource::TagItem tagObject;
			if(!value["Key"].isNull())
				tagObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				tagObject.value = value["Value"].asString();
			tagResourcesObject.tag.push_back(tagObject);
		}
		tagResources_.push_back(tagResourcesObject);
	}

}

std::vector<DescribeTagResourcesResult::TagResource> DescribeTagResourcesResult::getTagResources()const
{
	return tagResources_;
}
