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

#ifndef ALIBABACLOUD_ESS_MODEL_CREATEALARMREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_CREATEALARMREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT CreateAlarmRequest : public RpcServiceRequest
			{
				struct Dimension
				{
					std::string dimensionValue;
					std::string dimensionKey;
				};

			public:
				CreateAlarmRequest();
				~CreateAlarmRequest();

				std::string getMetricType()const;
				void setMetricType(const std::string& metricType);
				int getPeriod()const;
				void setPeriod(int period);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getScalingGroupId()const;
				void setScalingGroupId(const std::string& scalingGroupId);
				int getGroupId()const;
				void setGroupId(int groupId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::vector<std::string> getAlarmAction()const;
				void setAlarmAction(const std::vector<std::string>& alarmAction);
				float getThreshold()const;
				void setThreshold(float threshold);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getName()const;
				void setName(const std::string& name);
				int getEvaluationCount()const;
				void setEvaluationCount(int evaluationCount);
				std::string getMetricName()const;
				void setMetricName(const std::string& metricName);
				std::string getComparisonOperator()const;
				void setComparisonOperator(const std::string& comparisonOperator);
				std::vector<Dimension> getDimension()const;
				void setDimension(const std::vector<Dimension>& dimension);
				std::string getStatistics()const;
				void setStatistics(const std::string& statistics);

            private:
				std::string metricType_;
				int period_;
				std::string resourceOwnerAccount_;
				std::string scalingGroupId_;
				int groupId_;
				std::string description_;
				std::vector<std::string> alarmAction_;
				float threshold_;
				long ownerId_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string name_;
				int evaluationCount_;
				std::string metricName_;
				std::string comparisonOperator_;
				std::vector<Dimension> dimension_;
				std::string statistics_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_CREATEALARMREQUEST_H_