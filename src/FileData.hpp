#include <fstream>
#include <vector>
#include <string>

using namespace std;

class FileData {
  private:
    string masterPassword;
    int infoKey;
  public:
    FileData();
    bool infoExists();
    void setPassword(string p);
    bool checkPassword(string p);
    void addFileInfo(vector<string>& f);
    vector<string> getFileInfo(string& drive);
};