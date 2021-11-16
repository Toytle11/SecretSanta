#include <iostream>
#include <ctime>
using namespace std;

class SecretSanta
{
private:
    const string DEFAULT_LETTER = "\0";
    string userSanta = DEFAULT_LETTER;
    string arrow = "-->";
    string userRec = DEFAULT_LETTER;

public:
    string getSanta();
    string getArrow();
    string getRec();
    void setSanta(string user);
    void setRec(string user);
    SecretSanta() {};
};

string SecretSanta::getSanta()
{
    return userSanta;
}
string SecretSanta::getArrow()
{
    return arrow;
}
string SecretSanta::getRec()
{
    return userRec;
}
void SecretSanta::setSanta(string user)
{
    userSanta = user;
}
void SecretSanta::setRec(string user)
{
    userRec = user;
}

int main()
{
    const int ARRLENG = 15;
    srand(time(0));
    string secretP[ARRLENG];
    secretP[0] = "Jason";
    secretP[1] = "Riley";
    secretP[2] = "Jaron";
    secretP[3] = "Morgan";
    secretP[4] = "Jusin";
    secretP[5] = "Blake";
    secretP[6] = "Matthew";
    secretP[7] = "Wiggy";
    secretP[8] = "Eddie";
    secretP[9] = "Lucas";
    secretP[10] = "Starsun";
    secretP[11] = "Garett";
    secretP[12] = "Kory";
    secretP[13] = "Hieser";
    secretP[14] = "Raynele";

    string secretT[ARRLENG];
    secretT[0] = "Jason";
    secretT[1] = "Riley";
    secretT[2] = "Jaron";
    secretT[3] = "Morgan";
    secretT[4] = "Jusin";
    secretT[5] = "Blake";
    secretT[6] = "Matthew";
    secretT[7] = "Wiggy";
    secretT[8] = "Eddie";
    secretT[9] = "Lucas";
    secretT[10] = "Starsun";
    secretT[11] = "Garett";
    secretT[12] = "Kory";
    secretT[13] = "Hieser";
    secretT[14] = "Raynele";

    int TEMPLENG =sizeof(secretT)/sizeof(secretT[0]);
    for (int i = 0; i < ARRLENG; i++)
    {
        bool difName = false;
        SecretSanta balls;
        int randNum;
        while (difName == false)
        {
            randNum = rand() % TEMPLENG;
            balls.setSanta(secretP[i]);
            balls.setRec(secretT[randNum]);
            if (balls.getSanta() != balls.getRec())
            {
                difName = true;
            }
        }
        cout << balls.getSanta() << balls.getArrow() << balls.getRec() << endl;
        for (int j = randNum; j < TEMPLENG - 1; j++)
        {
            secretT[j] = secretT[j + 1];
        }
        TEMPLENG--;
    }

    return 0;
}