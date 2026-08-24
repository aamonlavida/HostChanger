#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include "color.hpp"

namespace {

constexpr const char* kHostsPath = R"(C:\Windows\System32\drivers\etc\hosts)";

void WriteDefaultHosts(std::ofstream& outFile) {
    outFile << "# Copyright (c) 1993-2009 Microsoft Corp." << std::endl;
    outFile << "# Copyright (c) 1993-2009 Microsoft Corp." << std::endl;
    outFile << "# " << std::endl;
    outFile << "# This is a sample HOSTS file used by Microsoft TCP/IP for Windows." << std::endl;
    outFile << "# " << std::endl;
    outFile << "# This file contains the mappings of IP addresses to host names. Each " << std::endl;
    outFile << "# entry should be kept on an individual line. The IP address should " << std::endl;
    outFile << "# be placed in the first column followed by the corresponding host name." << std::endl;
    outFile << "# The IP address and the host name should be separated by at least one " << std::endl;
    outFile << "# space." << std::endl;
    outFile << "# " << std::endl;
    outFile << "# Additionally, comments (such as these) may be inserted on individual " << std::endl;
    outFile << "# lines or following the machine name denoted by a '#' symbol." << std::endl;
    outFile << "# " << std::endl;
    outFile << "# For example: " << std::endl;
    outFile << "# " << std::endl;
    outFile << "#      102.54.94.97     rhino.acme.com          # source server " << std::endl;
    outFile << "#       38.25.63.10     x.acme.com              # x client host " << std::endl;
    outFile << "" << std::endl;
    outFile << "# localhost name resolution is handled within DNS itself." << std::endl;
    outFile << "#      127.0.0.1       localhost " << std::endl;
    outFile << "#      ::1             localhost " << std::endl;
    outFile << " " << std::endl;
}


void On(const std::string& ipAddress) {
    std::ofstream outFile(kHostsPath, std::ios::trunc);
    if (!outFile) {
        Logger("Unable to write hosts file. Run the program as administrator.", RED);
        Logger("Press Enter to continue . . .", DARK_GREEN);
        std::cin.get();
        return;
    }

    WriteDefaultHosts(outFile);
    outFile << ipAddress << " www.growtopia1.com" << std::endl;
    outFile << ipAddress << " www.growtopia2.com" << std::endl;
    outFile.close();

    Logger("Connected to IP Address", DARK_GREEN);
    Logger("Press any key to continue . . .", DARK_GREEN);
    std::cin.get();
}

void Off() {
    std::ofstream outFile(kHostsPath, std::ios::trunc);
    if (!outFile) {
        Logger("Unable to write hosts file. Run the program as administrator.", RED);
        Logger("Press Enter to continue . . .", DARK_GREEN);
        std::cin.get();
        return;
    }

    WriteDefaultHosts(outFile);
    outFile.close();

    Logger("Disconnected.", DARK_GREEN);
    Logger("Press any key to continue . . .", DARK_GREEN);
    std::cin.get();
}

}  // namespace


int main() {
    while (true) {
        std::system("cls");
        Logger("Made by: absolute", RED);
        Logger("Project: https://github.com/aamonlavida", YELLOW);
        std::cout << "" << std::endl;
        Logger("Please enter IP Address for connect:", WHITE);

        std::string ip;
        std::getline(std::cin, ip);

        if (ip.empty()) {
            Off();
        }
        else {
            On(ip);
        }
    }

    return 0;
}
