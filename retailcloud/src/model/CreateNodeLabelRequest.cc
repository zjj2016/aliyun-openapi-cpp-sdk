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

#include <alibabacloud/retailcloud/model/CreateNodeLabelRequest.h>

using AlibabaCloud::Retailcloud::Model::CreateNodeLabelRequest;

CreateNodeLabelRequest::CreateNodeLabelRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "CreateNodeLabel")
{
	setMethod(HttpRequest::Method::Post);
}

CreateNodeLabelRequest::~CreateNodeLabelRequest()
{}

std::string CreateNodeLabelRequest::getLabelKey()const
{
	return labelKey_;
}

void CreateNodeLabelRequest::setLabelKey(const std::string& labelKey)
{
	labelKey_ = labelKey;
	setParameter("LabelKey", labelKey);
}

std::string CreateNodeLabelRequest::getLabelValue()const
{
	return labelValue_;
}

void CreateNodeLabelRequest::setLabelValue(const std::string& labelValue)
{
	labelValue_ = labelValue;
	setParameter("LabelValue", labelValue);
}

std::string CreateNodeLabelRequest::getClusterId()const
{
	return clusterId_;
}

void CreateNodeLabelRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

