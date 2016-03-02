#pragma once

#include "PlayFabBaseModel.h"
#include "aws\core\utils\json\JsonSerializer.h"

namespace PlayFab
{
    namespace MatchmakerModels
    {
        struct AuthUserRequest : public PlayFabBaseModel
        {
            Aws::String AuthorizationTicket;

            AuthUserRequest() :
                PlayFabBaseModel(),
                AuthorizationTicket()
            {}

            AuthUserRequest(const AuthUserRequest& src) :
                PlayFabBaseModel(),
                AuthorizationTicket(src.AuthorizationTicket)
            {}

            AuthUserRequest(const rapidjson::Value& obj) : AuthUserRequest()
            {
                readFromValue(obj);
            }

            ~AuthUserRequest();

            void writeJSON(PFStringJsonWriter& writer) override;
            bool readFromValue(const rapidjson::Value& obj) override;
        };

        struct AuthUserResponse : public PlayFabBaseModel
        {
            bool Authorized;
            Aws::String PlayFabId;

            AuthUserResponse() :
                PlayFabBaseModel(),
                Authorized(false),
                PlayFabId()
            {}

            AuthUserResponse(const AuthUserResponse& src) :
                PlayFabBaseModel(),
                Authorized(src.Authorized),
                PlayFabId(src.PlayFabId)
            {}

            AuthUserResponse(const rapidjson::Value& obj) : AuthUserResponse()
            {
                readFromValue(obj);
            }

            ~AuthUserResponse();

            void writeJSON(PFStringJsonWriter& writer) override;
            bool readFromValue(const rapidjson::Value& obj) override;
        };

        struct ItemInstance : public PlayFabBaseModel
        {
            Aws::String ItemId;
            Aws::String ItemInstanceId;
            Aws::String ItemClass;
            OptionalTime PurchaseDate;
            OptionalTime Expiration;
            OptionalInt32 RemainingUses;
            OptionalInt32 UsesIncrementedBy;
            Aws::String Annotation;
            Aws::String CatalogVersion;
            Aws::String BundleParent;
            Aws::String DisplayName;
            Aws::String UnitCurrency;
            Uint32 UnitPrice;
            std::list<Aws::String> BundleContents;
            std::map<Aws::String, Aws::String> CustomData;

            ItemInstance() :
                PlayFabBaseModel(),
                ItemId(),
                ItemInstanceId(),
                ItemClass(),
                PurchaseDate(),
                Expiration(),
                RemainingUses(),
                UsesIncrementedBy(),
                Annotation(),
                CatalogVersion(),
                BundleParent(),
                DisplayName(),
                UnitCurrency(),
                UnitPrice(0),
                BundleContents(),
                CustomData()
            {}

            ItemInstance(const ItemInstance& src) :
                PlayFabBaseModel(),
                ItemId(src.ItemId),
                ItemInstanceId(src.ItemInstanceId),
                ItemClass(src.ItemClass),
                PurchaseDate(src.PurchaseDate),
                Expiration(src.Expiration),
                RemainingUses(src.RemainingUses),
                UsesIncrementedBy(src.UsesIncrementedBy),
                Annotation(src.Annotation),
                CatalogVersion(src.CatalogVersion),
                BundleParent(src.BundleParent),
                DisplayName(src.DisplayName),
                UnitCurrency(src.UnitCurrency),
                UnitPrice(src.UnitPrice),
                BundleContents(src.BundleContents),
                CustomData(src.CustomData)
            {}

            ItemInstance(const rapidjson::Value& obj) : ItemInstance()
            {
                readFromValue(obj);
            }

            ~ItemInstance();

            void writeJSON(PFStringJsonWriter& writer) override;
            bool readFromValue(const rapidjson::Value& obj) override;
        };

        struct PlayerJoinedRequest : public PlayFabBaseModel
        {
            Aws::String LobbyId;
            Aws::String PlayFabId;

            PlayerJoinedRequest() :
                PlayFabBaseModel(),
                LobbyId(),
                PlayFabId()
            {}

            PlayerJoinedRequest(const PlayerJoinedRequest& src) :
                PlayFabBaseModel(),
                LobbyId(src.LobbyId),
                PlayFabId(src.PlayFabId)
            {}

            PlayerJoinedRequest(const rapidjson::Value& obj) : PlayerJoinedRequest()
            {
                readFromValue(obj);
            }

            ~PlayerJoinedRequest();

            void writeJSON(PFStringJsonWriter& writer) override;
            bool readFromValue(const rapidjson::Value& obj) override;
        };

        struct PlayerJoinedResponse : public PlayFabBaseModel
        {

            PlayerJoinedResponse() :
                PlayFabBaseModel()
            {}

            PlayerJoinedResponse(const PlayerJoinedResponse& src) :
                PlayFabBaseModel()
            {}

            PlayerJoinedResponse(const rapidjson::Value& obj) : PlayerJoinedResponse()
            {
                readFromValue(obj);
            }

            ~PlayerJoinedResponse();

            void writeJSON(PFStringJsonWriter& writer) override;
            bool readFromValue(const rapidjson::Value& obj) override;
        };

        struct PlayerLeftRequest : public PlayFabBaseModel
        {
            Aws::String LobbyId;
            Aws::String PlayFabId;

            PlayerLeftRequest() :
                PlayFabBaseModel(),
                LobbyId(),
                PlayFabId()
            {}

            PlayerLeftRequest(const PlayerLeftRequest& src) :
                PlayFabBaseModel(),
                LobbyId(src.LobbyId),
                PlayFabId(src.PlayFabId)
            {}

            PlayerLeftRequest(const rapidjson::Value& obj) : PlayerLeftRequest()
            {
                readFromValue(obj);
            }

            ~PlayerLeftRequest();

            void writeJSON(PFStringJsonWriter& writer) override;
            bool readFromValue(const rapidjson::Value& obj) override;
        };

        struct PlayerLeftResponse : public PlayFabBaseModel
        {

            PlayerLeftResponse() :
                PlayFabBaseModel()
            {}

            PlayerLeftResponse(const PlayerLeftResponse& src) :
                PlayFabBaseModel()
            {}

            PlayerLeftResponse(const rapidjson::Value& obj) : PlayerLeftResponse()
            {
                readFromValue(obj);
            }

            ~PlayerLeftResponse();

            void writeJSON(PFStringJsonWriter& writer) override;
            bool readFromValue(const rapidjson::Value& obj) override;
        };

        enum Region
        {
            RegionUSCentral,
            RegionUSEast,
            RegionEUWest,
            RegionSingapore,
            RegionJapan,
            RegionBrazil,
            RegionAustralia
        };

        void writeRegionEnumJSON(Region enumVal, PFStringJsonWriter& writer);
        Region readRegionFromValue(const rapidjson::Value& obj);

        struct StartGameRequest : public PlayFabBaseModel
        {
            Aws::String Build;
            Region pfRegion;
            Aws::String GameMode;
            Aws::String CustomCommandLineData;
            Aws::String ExternalMatchmakerEventEndpoint;

            StartGameRequest() :
                PlayFabBaseModel(),
                Build(),
                pfRegion(),
                GameMode(),
                CustomCommandLineData(),
                ExternalMatchmakerEventEndpoint()
            {}

            StartGameRequest(const StartGameRequest& src) :
                PlayFabBaseModel(),
                Build(src.Build),
                pfRegion(src.pfRegion),
                GameMode(src.GameMode),
                CustomCommandLineData(src.CustomCommandLineData),
                ExternalMatchmakerEventEndpoint(src.ExternalMatchmakerEventEndpoint)
            {}

            StartGameRequest(const rapidjson::Value& obj) : StartGameRequest()
            {
                readFromValue(obj);
            }

            ~StartGameRequest();

            void writeJSON(PFStringJsonWriter& writer) override;
            bool readFromValue(const rapidjson::Value& obj) override;
        };

        struct StartGameResponse : public PlayFabBaseModel
        {
            Aws::String GameID;
            Aws::String ServerHostname;
            Uint32 ServerPort;

            StartGameResponse() :
                PlayFabBaseModel(),
                GameID(),
                ServerHostname(),
                ServerPort(0)
            {}

            StartGameResponse(const StartGameResponse& src) :
                PlayFabBaseModel(),
                GameID(src.GameID),
                ServerHostname(src.ServerHostname),
                ServerPort(src.ServerPort)
            {}

            StartGameResponse(const rapidjson::Value& obj) : StartGameResponse()
            {
                readFromValue(obj);
            }

            ~StartGameResponse();

            void writeJSON(PFStringJsonWriter& writer) override;
            bool readFromValue(const rapidjson::Value& obj) override;
        };

        struct UserInfoRequest : public PlayFabBaseModel
        {
            Aws::String PlayFabId;
            Int32 MinCatalogVersion;

            UserInfoRequest() :
                PlayFabBaseModel(),
                PlayFabId(),
                MinCatalogVersion(0)
            {}

            UserInfoRequest(const UserInfoRequest& src) :
                PlayFabBaseModel(),
                PlayFabId(src.PlayFabId),
                MinCatalogVersion(src.MinCatalogVersion)
            {}

            UserInfoRequest(const rapidjson::Value& obj) : UserInfoRequest()
            {
                readFromValue(obj);
            }

            ~UserInfoRequest();

            void writeJSON(PFStringJsonWriter& writer) override;
            bool readFromValue(const rapidjson::Value& obj) override;
        };

        struct VirtualCurrencyRechargeTime : public PlayFabBaseModel
        {
            Int32 SecondsToRecharge;
            time_t RechargeTime;
            Int32 RechargeMax;

            VirtualCurrencyRechargeTime() :
                PlayFabBaseModel(),
                SecondsToRecharge(0),
                RechargeTime(0),
                RechargeMax(0)
            {}

            VirtualCurrencyRechargeTime(const VirtualCurrencyRechargeTime& src) :
                PlayFabBaseModel(),
                SecondsToRecharge(src.SecondsToRecharge),
                RechargeTime(src.RechargeTime),
                RechargeMax(src.RechargeMax)
            {}

            VirtualCurrencyRechargeTime(const rapidjson::Value& obj) : VirtualCurrencyRechargeTime()
            {
                readFromValue(obj);
            }

            ~VirtualCurrencyRechargeTime();

            void writeJSON(PFStringJsonWriter& writer) override;
            bool readFromValue(const rapidjson::Value& obj) override;
        };

        struct UserInfoResponse : public PlayFabBaseModel
        {
            Aws::String PlayFabId;
            Aws::String Username;
            Aws::String TitleDisplayName;
            std::list<ItemInstance> Inventory;
            std::map<Aws::String, Int32> VirtualCurrency;
            std::map<Aws::String, VirtualCurrencyRechargeTime> VirtualCurrencyRechargeTimes;
            bool IsDeveloper;
            Aws::String SteamId;

            UserInfoResponse() :
                PlayFabBaseModel(),
                PlayFabId(),
                Username(),
                TitleDisplayName(),
                Inventory(),
                VirtualCurrency(),
                VirtualCurrencyRechargeTimes(),
                IsDeveloper(false),
                SteamId()
            {}

            UserInfoResponse(const UserInfoResponse& src) :
                PlayFabBaseModel(),
                PlayFabId(src.PlayFabId),
                Username(src.Username),
                TitleDisplayName(src.TitleDisplayName),
                Inventory(src.Inventory),
                VirtualCurrency(src.VirtualCurrency),
                VirtualCurrencyRechargeTimes(src.VirtualCurrencyRechargeTimes),
                IsDeveloper(src.IsDeveloper),
                SteamId(src.SteamId)
            {}

            UserInfoResponse(const rapidjson::Value& obj) : UserInfoResponse()
            {
                readFromValue(obj);
            }

            ~UserInfoResponse();

            void writeJSON(PFStringJsonWriter& writer) override;
            bool readFromValue(const rapidjson::Value& obj) override;
        };


    }
}
