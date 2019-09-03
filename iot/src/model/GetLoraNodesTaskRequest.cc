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

#include <alibabacloud/iot/model/GetLoraNodesTaskRequest.h>

using AlibabaCloud::Iot::Model::GetLoraNodesTaskRequest;

GetLoraNodesTaskRequest::GetLoraNodesTaskRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GetLoraNodesTask")
{}

GetLoraNodesTaskRequest::~GetLoraNodesTaskRequest()
{}

std::string GetLoraNodesTaskRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetLoraNodesTaskRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string GetLoraNodesTaskRequest::getTaskId()const
{
	return taskId_;
}

void GetLoraNodesTaskRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

std::string GetLoraNodesTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetLoraNodesTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}
