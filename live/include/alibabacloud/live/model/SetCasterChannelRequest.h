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

#ifndef ALIBABACLOUD_LIVE_MODEL_SETCASTERCHANNELREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_SETCASTERCHANNELREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT SetCasterChannelRequest : public RpcServiceRequest
			{

			public:
				SetCasterChannelRequest();
				~SetCasterChannelRequest();

				std::string getResourceId()const;
				void setResourceId(const std::string& resourceId);
				int getPlayStatus()const;
				void setPlayStatus(int playStatus);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getCasterId()const;
				void setCasterId(const std::string& casterId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getSeekOffset()const;
				void setSeekOffset(int seekOffset);
				std::string getChannelId()const;
				void setChannelId(const std::string& channelId);

            private:
				std::string resourceId_;
				int playStatus_;
				std::string regionId_;
				std::string casterId_;
				long ownerId_;
				int seekOffset_;
				std::string channelId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_SETCASTERCHANNELREQUEST_H_