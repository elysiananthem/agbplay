#pragma once

#include <string>
#include <filesystem>

namespace OS {
    void LowerThreadPriority();
    const std::filesystem::path GetMusicDirectory();
    const std::filesystem::path GetLocalConfigDirectory();
    const std::filesystem::path GetGlobalConfigDirectory();
};
