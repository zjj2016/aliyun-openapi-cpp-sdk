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

#include <alibabacloud/hbase/model/DescribeAvailableResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeAvailableResourceResult::DescribeAvailableResourceResult() :
	ServiceResult()
{}

DescribeAvailableResourceResult::DescribeAvailableResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableResourceResult::~DescribeAvailableResourceResult()
{}

void DescribeAvailableResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAvailableZonesNode = value["AvailableZones"]["AvailableZone"];
	for (auto valueAvailableZonesAvailableZone : allAvailableZonesNode)
	{
		AvailableZone availableZonesObject;
		if(!valueAvailableZonesAvailableZone["RegionId"].isNull())
			availableZonesObject.regionId = valueAvailableZonesAvailableZone["RegionId"].asString();
		if(!valueAvailableZonesAvailableZone["ZoneId"].isNull())
			availableZonesObject.zoneId = valueAvailableZonesAvailableZone["ZoneId"].asString();
		auto allSupportedEnginesNode = allAvailableZonesNode["SupportedEngines"]["SupportedEngine"];
		for (auto allAvailableZonesNodeSupportedEnginesSupportedEngine : allSupportedEnginesNode)
		{
			AvailableZone::SupportedEngine supportedEnginesObject;
			if(!allAvailableZonesNodeSupportedEnginesSupportedEngine["Engine"].isNull())
				supportedEnginesObject.engine = allAvailableZonesNodeSupportedEnginesSupportedEngine["Engine"].asString();
			auto allSupportedEngineVersionsNode = allSupportedEnginesNode["SupportedEngineVersions"]["SupportedEngineVersion"];
			for (auto allSupportedEnginesNodeSupportedEngineVersionsSupportedEngineVersion : allSupportedEngineVersionsNode)
			{
				AvailableZone::SupportedEngine::SupportedEngineVersion supportedEngineVersionsObject;
				if(!allSupportedEnginesNodeSupportedEngineVersionsSupportedEngineVersion["Version"].isNull())
					supportedEngineVersionsObject.version = allSupportedEnginesNodeSupportedEngineVersionsSupportedEngineVersion["Version"].asString();
				auto allSupportedCategoriesNode = allSupportedEngineVersionsNode["SupportedCategories"]["SupportedCategoriesItem"];
				for (auto allSupportedEngineVersionsNodeSupportedCategoriesSupportedCategoriesItem : allSupportedCategoriesNode)
				{
					AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedCategoriesItem supportedCategoriesObject;
					if(!allSupportedEngineVersionsNodeSupportedCategoriesSupportedCategoriesItem["Category"].isNull())
						supportedCategoriesObject.category = allSupportedEngineVersionsNodeSupportedCategoriesSupportedCategoriesItem["Category"].asString();
					auto allSupportedStorageTypesNode = allSupportedCategoriesNode["SupportedStorageTypes"]["SupportedStorageType"];
					for (auto allSupportedCategoriesNodeSupportedStorageTypesSupportedStorageType : allSupportedStorageTypesNode)
					{
						AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedCategoriesItem::SupportedStorageType supportedStorageTypesObject;
						if(!allSupportedCategoriesNodeSupportedStorageTypesSupportedStorageType["StorageType"].isNull())
							supportedStorageTypesObject.storageType = allSupportedCategoriesNodeSupportedStorageTypesSupportedStorageType["StorageType"].asString();
						auto allCoreResourcesNode = allSupportedStorageTypesNode["CoreResources"]["CoreResource"];
						for (auto allSupportedStorageTypesNodeCoreResourcesCoreResource : allCoreResourcesNode)
						{
							AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedCategoriesItem::SupportedStorageType::CoreResource coreResourcesObject;
							if(!allSupportedStorageTypesNodeCoreResourcesCoreResource["InstanceType"].isNull())
								coreResourcesObject.instanceType = allSupportedStorageTypesNodeCoreResourcesCoreResource["InstanceType"].asString();
							if(!allSupportedStorageTypesNodeCoreResourcesCoreResource["MaxCoreCount"].isNull())
								coreResourcesObject.maxCoreCount = std::stoi(allSupportedStorageTypesNodeCoreResourcesCoreResource["MaxCoreCount"].asString());
							auto dBInstanceStorageRangeNode = value["DBInstanceStorageRange"];
							if(!dBInstanceStorageRangeNode["MaxSize"].isNull())
								coreResourcesObject.dBInstanceStorageRange.maxSize = std::stoi(dBInstanceStorageRangeNode["MaxSize"].asString());
							if(!dBInstanceStorageRangeNode["MinSize"].isNull())
								coreResourcesObject.dBInstanceStorageRange.minSize = std::stoi(dBInstanceStorageRangeNode["MinSize"].asString());
							if(!dBInstanceStorageRangeNode["StepSize"].isNull())
								coreResourcesObject.dBInstanceStorageRange.stepSize = std::stoi(dBInstanceStorageRangeNode["StepSize"].asString());
							auto instanceTypeDetailNode = value["InstanceTypeDetail"];
							if(!instanceTypeDetailNode["Cpu"].isNull())
								coreResourcesObject.instanceTypeDetail.cpu = std::stoi(instanceTypeDetailNode["Cpu"].asString());
							if(!instanceTypeDetailNode["Mem"].isNull())
								coreResourcesObject.instanceTypeDetail.mem = std::stoi(instanceTypeDetailNode["Mem"].asString());
							supportedStorageTypesObject.coreResources.push_back(coreResourcesObject);
						}
						supportedCategoriesObject.supportedStorageTypes.push_back(supportedStorageTypesObject);
					}
					supportedEngineVersionsObject.supportedCategories.push_back(supportedCategoriesObject);
				}
				supportedEnginesObject.supportedEngineVersions.push_back(supportedEngineVersionsObject);
			}
			availableZonesObject.supportedEngines.push_back(supportedEnginesObject);
		}
		auto allMasterResourcesNode = allAvailableZonesNode["MasterResources"]["MasterResource"];
		for (auto allAvailableZonesNodeMasterResourcesMasterResource : allMasterResourcesNode)
		{
			AvailableZone::MasterResource masterResourcesObject;
			if(!allAvailableZonesNodeMasterResourcesMasterResource["InstanceType"].isNull())
				masterResourcesObject.instanceType = allAvailableZonesNodeMasterResourcesMasterResource["InstanceType"].asString();
			auto instanceTypeDetail1Node = value["InstanceTypeDetail"];
			if(!instanceTypeDetail1Node["Cpu"].isNull())
				masterResourcesObject.instanceTypeDetail1.cpu = std::stoi(instanceTypeDetail1Node["Cpu"].asString());
			if(!instanceTypeDetail1Node["Mem"].isNull())
				masterResourcesObject.instanceTypeDetail1.mem = std::stoi(instanceTypeDetail1Node["Mem"].asString());
			availableZonesObject.masterResources.push_back(masterResourcesObject);
		}
		availableZones_.push_back(availableZonesObject);
	}

}

std::vector<DescribeAvailableResourceResult::AvailableZone> DescribeAvailableResourceResult::getAvailableZones()const
{
	return availableZones_;
}

