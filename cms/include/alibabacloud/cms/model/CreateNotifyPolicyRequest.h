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

#ifndef ALIBABACLOUD_CMS_MODEL_CREATENOTIFYPOLICYREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_CREATENOTIFYPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT CreateNotifyPolicyRequest : public RpcServiceRequest
			{

			public:
				CreateNotifyPolicyRequest();
				~CreateNotifyPolicyRequest();

				std::string getPolicyType()const;
				void setPolicyType(const std::string& policyType);
				std::string getAlertName()const;
				void setAlertName(const std::string& alertName);
				long getEndTime()const;
				void setEndTime(long endTime);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getDimensions()const;
				void setDimensions(const std::string& dimensions);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string policyType_;
				std::string alertName_;
				long endTime_;
				long startTime_;
				std::string dimensions_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_CREATENOTIFYPOLICYREQUEST_H_