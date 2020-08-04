/**
 * @file FolderPath.h(.in)
 * @authors Stefano Dafarra
 * @copyright 2020 Istituto Italiano di Tecnologia (IIT). This software may be modified and
 * distributed under the terms of the GNU Lesser General Public License v2.1 or any later version.
 */

#ifndef CONFIG_FOLDERPATH_H_IN
#define CONFIG_FOLDERPATH_H_IN

#define SOURCE_CONFIG_DIR "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/ParametersHandler/tests"

inline std::string getConfigPath()
{
    return std::string(SOURCE_CONFIG_DIR) + "/config.ini";
}

#endif // CONFIG_FOLDERPATH_H_IN
