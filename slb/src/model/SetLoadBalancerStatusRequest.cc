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

#include <alibabacloud/slb/model/SetLoadBalancerStatusRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

SetLoadBalancerStatusRequest::SetLoadBalancerStatusRequest() :
	SlbRequest("SetLoadBalancerStatus")
{}

SetLoadBalancerStatusRequest::~SetLoadBalancerStatusRequest()
{}

std::string SetLoadBalancerStatusRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void SetLoadBalancerStatusRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long SetLoadBalancerStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetLoadBalancerStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SetLoadBalancerStatusRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void SetLoadBalancerStatusRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string SetLoadBalancerStatusRequest::getRegionId()const
{
	return regionId_;
}

void SetLoadBalancerStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SetLoadBalancerStatusRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetLoadBalancerStatusRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SetLoadBalancerStatusRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetLoadBalancerStatusRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long SetLoadBalancerStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void SetLoadBalancerStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetLoadBalancerStatusRequest::getLoadBalancerStatus()const
{
	return loadBalancerStatus_;
}

void SetLoadBalancerStatusRequest::setLoadBalancerStatus(const std::string& loadBalancerStatus)
{
	loadBalancerStatus_ = loadBalancerStatus;
	setParameter("LoadBalancerStatus", loadBalancerStatus);
}

std::string SetLoadBalancerStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetLoadBalancerStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetLoadBalancerStatusRequest::getTags()const
{
	return tags_;
}

void SetLoadBalancerStatusRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}
