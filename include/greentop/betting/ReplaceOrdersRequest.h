/**
 * Copyright 2015 Colin Doig.  Distributed under the MIT license.
 */

#ifndef REPLACEORDERSREQUEST_H
#define REPLACEORDERSREQUEST_H

#include <json/json.h>
#include <string>
#include <vector>

#include "greentop/JsonRequest.h"
#include "greentop/betting/ReplaceInstruction.h"

namespace greentop {

class ReplaceOrdersRequest : public JsonRequest {
    public:
        ReplaceOrdersRequest();

        ReplaceOrdersRequest(const std::string& marketId,
            const std::vector<ReplaceInstruction>& instructions,
            const std::string& customerRef = std::string());

        virtual void fromJson(const Json::Value& json);

        virtual Json::Value toJson() const;

        virtual bool isValid() const;

        const std::string& getMarketId() const;
        void setMarketId(const std::string& marketId);

        const std::vector<ReplaceInstruction>& getInstructions() const;
        void setInstructions(const std::vector<ReplaceInstruction>& instructions);

        const std::string& getCustomerRef() const;
        void setCustomerRef(const std::string& customerRef);


    private:
        std::string marketId;
        std::vector<ReplaceInstruction> instructions;
        std::string customerRef;
};

}

#endif // REPLACEORDERSREQUEST_H


