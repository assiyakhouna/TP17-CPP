
#include <iostream>
#include "Logger.h"
#include "Config.h"

using namespace std;

int main() {
    // Utilisation de Logger
    Logger::getInstance().log("Demarrage du programme");

    // Utilisation de Config
    Config config("config.json");

    string application = config.getString("application");

    cout << "Nom de l'application : "
         << application << endl;

    Logger::getInstance().log("Fin du programme");

    return 0;
}
