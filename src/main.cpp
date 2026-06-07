#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

namespace MinusLag {

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
            gm->setGameVariable("0058", false);
        }

        if (hideParticles()) {
            gm->setGameVariable("0043", false);
        }

        gm->setGameVariable("0036", false);

        if (logs()) {
            log::info("-Lag enabled");
        }
    }
}

class $modify(MinusLagMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        MinusLag::applyPerformanceMode();
        return true;
    }
};

class $modify(MinusLagPlayLayer, PlayLayer) {
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

        MinusLag::applyPerformanceMode();

        return true;
    }
};
