/**
 * Copyright 2015 Colin Doig.  Distributed under the MIT license.
 */

#ifndef SUBSCRIPTIONHISTORY_H
#define SUBSCRIPTIONHISTORY_H

#include <ctime>
#include <json/json.h>
#include <string>

#include "greentop/JsonMember.h"
#include "greentop/enum/SubscriptionStatus.h"

namespace greentop {

class SubscriptionHistory : public JsonMember {
    public:
        SubscriptionHistory();

        SubscriptionHistory(const std::string& subscriptionToken,
            const std::tm& expiryDateTime = std::tm(),
            const std::tm& expiredDateTime = std::tm(),
            const std::tm& createdDateTime = std::tm(),
            const std::tm& activationDateTime = std::tm(),
            const std::tm& cancellationDateTime = std::tm(),
            const SubscriptionStatus& subscriptionStatus = SubscriptionStatus(),
            const std::string& clientReference = std::string());

        virtual void fromJson(const Json::Value& json);

        virtual Json::Value toJson() const;

        virtual bool isValid() const;

        const std::string& getSubscriptionToken() const;
        void setSubscriptionToken(const std::string& subscriptionToken);

        const std::tm& getExpiryDateTime() const;
        void setExpiryDateTime(const std::tm& expiryDateTime);

        const std::tm& getExpiredDateTime() const;
        void setExpiredDateTime(const std::tm& expiredDateTime);

        const std::tm& getCreatedDateTime() const;
        void setCreatedDateTime(const std::tm& createdDateTime);

        const std::tm& getActivationDateTime() const;
        void setActivationDateTime(const std::tm& activationDateTime);

        const std::tm& getCancellationDateTime() const;
        void setCancellationDateTime(const std::tm& cancellationDateTime);

        const SubscriptionStatus& getSubscriptionStatus() const;
        void setSubscriptionStatus(const SubscriptionStatus& subscriptionStatus);

        const std::string& getClientReference() const;
        void setClientReference(const std::string& clientReference);


    private:
        std::string subscriptionToken;
        std::tm expiryDateTime;
        std::tm expiredDateTime;
        std::tm createdDateTime;
        std::tm activationDateTime;
        std::tm cancellationDateTime;
        SubscriptionStatus subscriptionStatus;
        std::string clientReference;
};

}

#endif // SUBSCRIPTIONHISTORY_H


