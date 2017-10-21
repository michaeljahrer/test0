#include "Config.h"
#include "DataPorto.h"

using namespace std;

int main (int argc, char *argv[])
{
    if (argc < 2)
    {
        cout<<"provide Config.txt"<<endl;
        exit(0);
    }
    string configfname = argv[1];
    cout<<"config file:"<<configfname<<endl;
    Config::loadConfigFile(configfname);
    cout<<"DataDirInput:"<<CONFIG_STRING("DataDirInput")<<endl;
    cout<<"DataDirOutput:"<<CONFIG_STRING("DataDirOutput")<<endl;
    cout<<"RandomSeed:"<<CONFIG_INT("RandomSeed")<<endl;
    srand(CONFIG_INT("RandomSeed"));
    int n = -1;
    if (argc > 2)
        n = atoi(argv[2]);
    DataPorto d(n);
    return 0;
}
