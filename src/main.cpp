#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

namespace LiteObject {

    bool ultraLow() {
        return Mod::get()->getSettingValue<bool>("ultra-low");
    }

    bool hideParticles() {
        return Mod::get()->getSettingValue<bool>("hide-particles");
    }

    bool disableGlow() {
        return Mod::get()->getSettingValue<bool>("disable-glow");
    }

    bool logs() {
        return Mod::get()->getSettingValue<bool>("performance-logs");
    }

    void applyPerformanceMode() {
        if (!ultraLow()) return;

        auto gm = GameManager::sharedState();

        if (disableGlow()) {
            // Example: disable glow (adjust variable ID if needed for your GD version)
            gm->setGameVariable("0058", false);
        }

        if (hideParticles()) {
            // Example: disable particles
            gm->setGameVariable("0043", false);
        }

        // Additional performance tweaks can be added here
        gm->setGameVariable("0036", false);

        if (logs()) {
            log::info("LiteObject performance mode enabled");
        }
    }
}

class $modify(LiteObjectMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        LiteObject::applyPerformanceMode();
        return true;
    }
};

class $modify(LiteObjectPlayLayer, PlayLayer) {
    bool init(
        GJGameLevel* level,
        bool useReplay,
        bool dontCreateObjects
    ) {
        if (!PlayLayer::init(
            level,
            useReplay,
            dontCreateObjects
        )) {
            return false;
        }

        LiteObject::applyPerformanceMode();

        return true;
    }
};
