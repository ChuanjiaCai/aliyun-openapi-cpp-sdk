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

#ifndef ALIBABACLOUD_STS_STSASSUMEROLECREDENTIALSPROVIDER_H_
#define ALIBABACLOUD_STS_STSASSUMEROLECREDENTIALSPROVIDER_H_

#include <chrono>
#include <mutex>
#include <alibabacloud/core/CredentialsProvider.h>
#include <alibabacloud/core/sts/StsClient.h>

namespace AlibabaCloud
{
	class ALIBABACLOUD_CORE_EXPORT StsAssumeRoleCredentialsProvider : public CredentialsProvider, public Sts::StsClient
	{
	public:
		StsAssumeRoleCredentialsProvider(
			const Credentials &credentials,
			const ClientConfiguration &configuration,
			const std::string &roleArn,
			const std::string &roleSessionName,
			const std::string &policy = "",
			int durationSeconds = 3600);
		~StsAssumeRoleCredentialsProvider();

		virtual Credentials getCredentials() override;
		using StsClient::assumeRole;
	private:
		void loadCredentials();
		bool checkExpiry()const;

		std::mutex cachedMutex_;
		Credentials cachedCredentials_;
		int durationSeconds_;
		std::chrono::system_clock::time_point expiry_;
		std::string policy_;
		std::string roleArn_;
		std::string roleSessionName_;
	};
}
#endif // !ALIBABACLOUD_CORE_STSASSUMEROLECREDENTIALSPROVIDER_H_