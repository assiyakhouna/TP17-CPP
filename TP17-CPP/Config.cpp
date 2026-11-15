
#include "Config.h"
#include <fstream>
#include <sstream>

Config::Config(const std::string& nomFichier) {
    std::ifstream fichier(nomFichier);

    if (fichier) {
        std::stringstream buffer;
        buffer << fichier.rdbuf();
        contenu = buffer.str();
    }
}

std::string Config::getString(const std::string& cle) const {
    std::string recherche = "\"" + cle + "\"";

    size_t position = contenu.find(recherche);

    if (position == std::string::npos) {
        return "";
    }

    position = contenu.find(':', position);

    if (position == std::string::npos) {
        return "";
    }

    size_t debut = contenu.find('"', position + 1);

    if (debut == std::string::npos) {
        return "";
    }

    size_t fin = contenu.find('"', debut + 1);

    if (fin == std::string::npos) {
        return "";
    }

    return contenu.substr(debut + 1, fin - debut - 1);
}
