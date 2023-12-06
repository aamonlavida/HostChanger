#include <iostream>
#include <fstream>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "Color.h"


using namespace std;

void first() {
    cout_("Auto Host Changer by : AamonLaVida", DARK_BLUE);
    cout_("Project: https://github.com/Aamon1337", DARK_BLUE);
    cout << "" << endl;
    cout << "" << endl;
    cout_("Please enter IP Address for connect:", DARK_MAGENTA);
}


void on(string a) {
    ofstream outFile("C:\\Windows\\System32\\drivers\\etc\\hosts");
    outFile << "# Copyright (c) 1993-2009 Microsoft Corp." << endl;
    outFile << "# Copyright (c) 1993-2009 Microsoft Corp." << endl;
    outFile << "# " << endl;
    outFile << "# This is a sample HOSTS file used by Microsoft TCP/IP for Windows." << endl;
    outFile << "# " << endl;
    outFile << "# This file contains the mappings of IP addresses to host names. Each " << endl;
    outFile << "# entry should be kept on an individual line. The IP address should " << endl;
    outFile << "# be placed in the first column followed by the corresponding host name." << endl;
    outFile << "# The IP address and the host name should be separated by at least one " << endl;
    outFile << "# space." << endl;
    outFile << "# " << endl;
    outFile << "# Additionally, comments (such as these) may be inserted on individual " << endl;
    outFile << "# lines or following the machine name denoted by a '#' symbol." << endl;
    outFile << "# " << endl;
    outFile << "# For example: " << endl;
    outFile << "# " << endl;
    outFile << "#      102.54.94.97     rhino.acme.com          # source server " << endl;
    outFile << "#       38.25.63.10     x.acme.com              # x client host " << endl;
    outFile << "" << endl;
    outFile << "# localhost name resolution is handled within DNS itself." << endl;
    outFile << "#      127.0.0.1       localhost " << endl;
    outFile << "#      ::1             localhost " << endl;
    outFile << " " << endl;
    outFile << a + " www.growtopia1.com" << endl;
    outFile << a + " www.growtopia2.com" << endl;
    outFile.close();

    cout_("Connected to IP Address", DARK_GREEN);
    cout_("Press any key to continue . . .", DARK_GREEN);
    cin.ignore();
}

void off() {
    ofstream outFile("C:\\Windows\\System32\\drivers\\etc\\hosts");
    outFile << "# Copyright (c) 1993-2009 Microsoft Corp." << endl;
    outFile << "# Copyright (c) 1993-2009 Microsoft Corp." << endl;
    outFile << "# " << endl;
    outFile << "# This is a sample HOSTS file used by Microsoft TCP/IP for Windows." << endl;
    outFile << "# " << endl;
    outFile << "# This file contains the mappings of IP addresses to host names. Each " << endl;
    outFile << "# entry should be kept on an individual line. The IP address should " << endl;
    outFile << "# be placed in the first column followed by the corresponding host name." << endl;
    outFile << "# The IP address and the host name should be separated by at least one " << endl;
    outFile << "# space." << endl;
    outFile << "# " << endl;
    outFile << "# Additionally, comments (such as these) may be inserted on individual " << endl;
    outFile << "# lines or following the machine name denoted by a '#' symbol." << endl;
    outFile << "# " << endl;
    outFile << "# For example: " << endl;
    outFile << "# " << endl;
    outFile << "#      102.54.94.97     rhino.acme.com          # source server " << endl;
    outFile << "#       38.25.63.10     x.acme.com              # x client host " << endl;
    outFile << "" << endl;
    outFile << "# localhost name resolution is handled within DNS itself." << endl;
    outFile << "#      127.0.0.1       localhost " << endl;
    outFile << "#      ::1             localhost " << endl;
    outFile << " " << endl;
    outFile.close();

    cout_("Disconnected.", DARK_GREEN);
    cout_("Press any key to continue . . .", DARK_GREEN);
    cin.ignore();
}


int main() {
    while (true) {
        system("CLS");
        cout_("Auto Host Changer by : AamonLaVida", DARK_BLUE);
        cout_("Project: https://github.com/Aamon1337", DARK_BLUE);
        cout << "" << endl;
        cout_("Please enter IP Address for connect:", DARK_MAGENTA);

        string ip;
        getline(cin, ip);

        if (ip.empty()) {
            off();
        }
        else {
            on(ip);
        }
    }

    return 0;
}
