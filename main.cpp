//TODO: Finish:
// fileNew(); with file saving and buffers
// fileOld(); with file loading and loading into buffers
// optionMenu(); with options saved to configuration file
#define BUILD "45"
#define START "Wednesday, August 24 2011 at 15:46:32"
#define BUILT "Friday, August 26 2011 at 13:24:28"
#define SPEED2 50000
#define SPEED3 100000
#include <curl/curl.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstring>
#include "type.h"

int Menu();
int fileNew();
int fileOld();
int optionMenu();

int Update(char CurVer[10])
	{
		char dVer[10];
		FILE *outfile;
		outfile = fopen ("check","w");
		CURL *curl;
		curl = curl_easy_init();
		if (curl == NULL) {	typeSlow(SPEED2, "main.cpp:17 curl = NULL");
					return 0;						}
		else if (curl != NULL)	{
		std::cout << std::endl;
		typeSlow(SPEED2,"Attempting Update... ");
		curl_easy_setopt(curl, CURLOPT_URL, "adrenalins-haven.myftp.biz/private/version");
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, outfile);
		curl_easy_perform(curl);
		fclose(outfile);
		curl_easy_cleanup(curl);
		FILE *input;
		input = fopen("check","r");
		if (input == NULL) { std::cout << std::endl << std::cout << "main.cpp:39 input = NULL;";
					return 0;	}
		else {  fgets(dVer, 4, input);

				std::cout << std::endl;
				typeSlow(SPEED3,"Current Version: ");
				std::cout << CurVer << std::endl;
				typeSlow(SPEED3,"Remote Version: ");
				std::cout << dVer << std::endl;
				for (int a=0; a<24; a++)	{ typeSlow(SPEED3,"\n"); }
		}
		fclose(input);
	}
		remove("check");
		return 0;
}

int newFile()	 { std::cout << "\nError: newFile(); Not Implemented\n";
		 }
int oldFile()    {  std::cout << "\nError: oldFile(); Not Implemented\n";
		 }
int optionMenu() {
	int buf1;
	string buf2, buf3, buf4("save-name"), line;
	for (int a=0; a<24; a++) { typeSlow(SPEED2,"\n"); }
		typeSlow(SPEED2,"OpenAT V0.01\n");
		typeSlow(SPEED2,"Option Menu:\n");
		typeSlow(SPEED2,"1)Journal File\n");
		typeSlow(SPEED2,"2)Exit\n");
		typeSlow(SPEED2,"Select: ");
		cin >> buf1;
		if (buf1 == 2)	{ /*for (int e; e<24; e++) { typeSlow(SPEED3,"\n"); }*/ return 0; }
		else {
			switch (buf1) {

		 case 1: { for (int a=0; a<24; a++) { typeSlow(SPEED2,"\n"); }
			 typeSlow(SPEED2,"Journal Name: ");
			 getline(cin,buf2);
				ifstream buffer1("OpenAT.conf", ios::in | ios::out);
				do { getline(buffer1,line); }
				while (!buffer1.eof() && line != buf4);
					if (!buffer1.eof()) {
					    std::cout << line << std::endl;
                    }
					buffer1.close();
            }
        }
    }
    for (int e=0; e<24; e++) { typeSlow(SPEED3,"\n");}
}

int Menu(int argc)
{
	char buf2[20];
	int buf1;
	switch (argc)	{
		case 1: for (int d=0; d<24; d++) { typeSlow(SPEED2,"\n"); }
			typeSlow(SPEED2,"OpenAT V0.01\n");
			typeSlow(SPEED2,"Menu:\n");
			typeSlow(SPEED2,"1)New File\n");
			typeSlow(SPEED2,"2)Load File\n");
			typeSlow(SPEED2,"3)Options\n");
			typeSlow(SPEED2,"4)Menu\n");
			typeSlow(SPEED2,"Select: ");
			std::cin >> buf1;
			if (buf1 == 4) { break; }
			switch (buf1)	{
				case 1: newFile();
				        return 0;
				case 2: oldFile();
                        return 0;
				case 3: optionMenu();
                        return 0;
				default: typeSlow(SPEED2,"\nError: Invalid Number!\n");
					 for (int a=0; a<23; a++) { typeSlow(SPEED3,"\n"); }
					 break;	}
		case 2:	Update(BUILD);
			break;
		case 3: std::cout << std::endl;
	for (int a=0; a<22; a++)	{ typeSlow(SPEED3,"\n"); }
			typeSlow(SPEED2,"OpenAT is a opensource application template.\n");
			typeSlow(SPEED2,"Project Started: ");
			std::cout << START << std::endl;
			typeSlow(SPEED2,"Built : ");
			std::cout << BUILT << std::endl;
			typeSlow(SPEED2,"Build ");
			std::cout << BUILD << std::endl;
			typeSlow(SPEED3,"Third Party Content:\n");
			typeSlow(SPEED3,"cURL - libcurl\n");
			typeSlow(SPEED3,"\nCopyright (C) 2011  Henri Mainville\n");
                        typeSlow(SPEED3,"\nThis program is free software: you can redistribute it and/or modify\n");
                        typeSlow(SPEED3,"it under the terms of the GNU General Public License as published by\n");
                        typeSlow(SPEED3,"the Free Software Foundation, version 3 of the License.\n");
                        typeSlow(SPEED3,"\nThis program is distributed in the hope that it will be useful,\n");
                        typeSlow(SPEED3,"but WITHOUT ANY WARRANTY; without even the implied warranty of\n");
                        typeSlow(SPEED3,"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n");
                        typeSlow(SPEED3,"GNU General Public License for more details.\n");
                        typeSlow(SPEED3,"\nYou should have received a copy of the GNU General Public License\n");
                        typeSlow(SPEED3,"along with this program.  If not, see <www.gnu.org/licenses/>.\n \n");
			typeSlow(SPEED3,"\n");
			for (int a=0; a<22; a++)
		      { typeSlow(SPEED3,"\n"); }
			break;
		default: std::cout << std::endl;
			 std::cout << "Error: Invalid Number!";
			 std::cout << std::endl << std::endl;
			 break;
	}
		return 0;
}

int main( int argc, char *argv[] )
	{
	int buf1;
		for (int a=0; a<24; a++) { std::cout << std::endl; }
	Main:
		buf1 = NULL;
		typeSlow(SPEED2,"OpenAT V0.01 Alpha\nWritten by Adrenalin6\nLicense: GPLv3\n");
		typeSlow(SPEED2, "Menu:\n");
		typeSlow(SPEED2, "1) Start\n");
		typeSlow(SPEED2, "2) Update\n");
		typeSlow(SPEED2, "3) About\n");
		typeSlow(SPEED2, "4) Exit\n");
		std::cout << "Select :";
		std::cin >> buf1;
		if (buf1 == 4) return 0;
		Menu(buf1);
		goto Main;
		return 0;
}
