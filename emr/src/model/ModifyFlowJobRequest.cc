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

#include <alibabacloud/emr/model/ModifyFlowJobRequest.h>

using AlibabaCloud::Emr::Model::ModifyFlowJobRequest;

ModifyFlowJobRequest::ModifyFlowJobRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyFlowJob")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyFlowJobRequest::~ModifyFlowJobRequest()
{}

std::string ModifyFlowJobRequest::getRunConf()const
{
	return runConf_;
}

void ModifyFlowJobRequest::setRunConf(const std::string& runConf)
{
	runConf_ = runConf;
	setParameter("RunConf", runConf);
}

std::string ModifyFlowJobRequest::getDescription()const
{
	return description_;
}

void ModifyFlowJobRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyFlowJobRequest::getParamConf()const
{
	return paramConf_;
}

void ModifyFlowJobRequest::setParamConf(const std::string& paramConf)
{
	paramConf_ = paramConf;
	setParameter("ParamConf", paramConf);
}

std::vector<ModifyFlowJobRequest::ResourceList> ModifyFlowJobRequest::getResourceList()const
{
	return resourceList_;
}

void ModifyFlowJobRequest::setResourceList(const std::vector<ResourceList>& resourceList)
{
	resourceList_ = resourceList;
	for(int dep1 = 0; dep1!= resourceList.size(); dep1++) {
		auto resourceListObj = resourceList.at(dep1);
		std::string resourceListObjStr = "ResourceList." + std::to_string(dep1 + 1);
		setParameter(resourceListObjStr + ".Path", resourceListObj.path);
		setParameter(resourceListObjStr + ".Alias", resourceListObj.alias);
	}
}

std::string ModifyFlowJobRequest::getFailAct()const
{
	return failAct_;
}

void ModifyFlowJobRequest::setFailAct(const std::string& failAct)
{
	failAct_ = failAct;
	setParameter("FailAct", failAct);
}

std::string ModifyFlowJobRequest::getMode()const
{
	return mode_;
}

void ModifyFlowJobRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setParameter("Mode", mode);
}

std::string ModifyFlowJobRequest::getMonitorConf()const
{
	return monitorConf_;
}

void ModifyFlowJobRequest::setMonitorConf(const std::string& monitorConf)
{
	monitorConf_ = monitorConf;
	setParameter("MonitorConf", monitorConf);
}

std::string ModifyFlowJobRequest::getRegionId()const
{
	return regionId_;
}

void ModifyFlowJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyFlowJobRequest::getId()const
{
	return id_;
}

void ModifyFlowJobRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

int ModifyFlowJobRequest::getMaxRetry()const
{
	return maxRetry_;
}

void ModifyFlowJobRequest::setMaxRetry(int maxRetry)
{
	maxRetry_ = maxRetry;
	setParameter("MaxRetry", std::to_string(maxRetry));
}

std::string ModifyFlowJobRequest::getAlertConf()const
{
	return alertConf_;
}

void ModifyFlowJobRequest::setAlertConf(const std::string& alertConf)
{
	alertConf_ = alertConf;
	setParameter("AlertConf", alertConf);
}

std::string ModifyFlowJobRequest::getProjectId()const
{
	return projectId_;
}

void ModifyFlowJobRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string ModifyFlowJobRequest::getEnvConf()const
{
	return envConf_;
}

void ModifyFlowJobRequest::setEnvConf(const std::string& envConf)
{
	envConf_ = envConf;
	setParameter("EnvConf", envConf);
}

long ModifyFlowJobRequest::getMaxRunningTimeSec()const
{
	return maxRunningTimeSec_;
}

void ModifyFlowJobRequest::setMaxRunningTimeSec(long maxRunningTimeSec)
{
	maxRunningTimeSec_ = maxRunningTimeSec;
	setParameter("MaxRunningTimeSec", std::to_string(maxRunningTimeSec));
}

std::string ModifyFlowJobRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyFlowJobRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyFlowJobRequest::getParams()const
{
	return params_;
}

void ModifyFlowJobRequest::setParams(const std::string& params)
{
	params_ = params;
	setParameter("Params", params);
}

std::string ModifyFlowJobRequest::getCustomVariables()const
{
	return customVariables_;
}

void ModifyFlowJobRequest::setCustomVariables(const std::string& customVariables)
{
	customVariables_ = customVariables;
	setParameter("CustomVariables", customVariables);
}

long ModifyFlowJobRequest::getRetryInterval()const
{
	return retryInterval_;
}

void ModifyFlowJobRequest::setRetryInterval(long retryInterval)
{
	retryInterval_ = retryInterval;
	setParameter("RetryInterval", std::to_string(retryInterval));
}

std::string ModifyFlowJobRequest::getName()const
{
	return name_;
}

void ModifyFlowJobRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

