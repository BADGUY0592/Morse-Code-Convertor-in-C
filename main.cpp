#include <iostream>
#include <cstring>
#include <windows.h>
#include <mmsystem.h>
using namespace std;

int main()
{
    int i;
    char s[300];
    cout<<"enter anything u want to convert in morse code\n";
    cin.getline(s,300);
    cout<<endl<<endl;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='A')
            cout<<"._ ";
        else if(s[i]=='b'||s[i]=='B')
            cout<<"_... ";
        else if(s[i]=='c'||s[i]=='C')
            cout<<"_._. ";
        else if(s[i]=='d'||s[i]=='D')
            cout<<"_.. ";
        else if(s[i]=='e'||s[i]=='E')
            cout<<". ";
        else if(s[i]=='f'||s[i]=='F')
            cout<<".._. ";
        else if(s[i]=='g'||s[i]=='G')
            cout<<"__. ";
        else if(s[i]=='h'||s[i]=='H')
            cout<<".... ";
        else if(s[i]=='i'||s[i]=='I')
            cout<<".. ";
        else if(s[i]=='j'||s[i]=='J')
            cout<<".___ ";
        else if(s[i]=='k'||s[i]=='K')
            cout<<"_._ ";
        else if(s[i]=='l'||s[i]=='L')
            cout<<"._.. ";
        else if(s[i]=='m'||s[i]=='M')
            cout<<"__ ";
        else if(s[i]=='n'||s[i]=='N')
            cout<<"_. ";
        else if(s[i]=='o'||s[i]=='O')
            cout<<"___ ";
        else if(s[i]=='p'||s[i]=='P')
            cout<<".__. ";
        else if(s[i]=='q'||s[i]=='Q')
            cout<<"__._ ";
        else if(s[i]=='r'||s[i]=='R')
            cout<<"._. ";
        else if(s[i]=='s'||s[i]=='S')
            cout<<"... ";
        else if(s[i]=='t'||s[i]=='T')
            cout<<"_ ";
        else if(s[i]=='u'||s[i]=='U')
            cout<<".._ ";
        else if(s[i]=='v'||s[i]=='V')
            cout<<"..._ ";
        else if(s[i]=='w'||s[i]=='W')
            cout<<".__ ";
        else if(s[i]=='x'||s[i]=='X')
            cout<<"_.._ ";
        else if(s[i]=='y'||s[i]=='Y')
            cout<<"_.__ ";
        else if(s[i]=='Z'||s[i]=='z')
            cout<<"__.. ";
        else if(s[i]=='0')
            cout<<"_____ ";
        else if(s[i]=='1')
            cout<<".____ ";
        else if(s[i]=='2')
            cout<<"..___ ";
        else if(s[i]=='3')
            cout<<"...__ ";
        else if(s[i]=='4')
            cout<<"...._ ";
        else if(s[i]=='5')
            cout<<"..... ";
        else if(s[i]=='6')
            cout<<"_.... ";
        else if(s[i]=='7')
            cout<<"__... ";
        else if(s[i]=='8')
            cout<<"___.. ";
        else if(s[i]=='9')
            cout<<"____. ";
        else if(s[i]=='.')
            cout<<"._._._ ";
        else if(s[i]==',')
            cout<<"__..__ ";
        else if(s[i]=='?')
            cout<<"..__.. ";
        else if(s[i]=='!')
            cout<<".____. ";
        else if(s[i]=='/')
            cout<<"_.._. ";
        else if(s[i]==':')
            cout<<"___... ";
        else if(s[i]==';')
            cout<<"_._._. ";
        else if(s[i]=='=')
            cout<<"_..._ ";
        else if(s[i]=='&')
            cout<<"._... ";
        else if(s[i]=='+')
            cout<<"._._. ";
        else if(s[i]=='-')
            cout<<"_...._ ";
        else if(s[i]=='_')
            cout<<"..__._ ";
        else if(s[i]=='"')
            cout<<"._.._. ";
        else if(s[i]=='$')
            cout<<"..._.._ ";
        else if(s[i]=='@')
            cout<<".__._. ";
        else if(s[i]==' ')
            cout<<"       ";
    }
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='A')
            PlaySound(TEXT("A.wav"),NULL,SND_SYNC);
        else if(s[i]=='b'||s[i]=='B')
            PlaySound(TEXT("B.wav"),NULL,SND_SYNC);
        else if(s[i]=='c'||s[i]=='C')
            PlaySound(TEXT("C.wav"),NULL,SND_SYNC);
        else if(s[i]=='d'||s[i]=='D')
            PlaySound(TEXT("D.wav"),NULL,SND_SYNC);
        else if(s[i]=='e'||s[i]=='E')
            PlaySound(TEXT("D.wav"),NULL,SND_SYNC);
        else if(s[i]=='f'||s[i]=='F')
            PlaySound(TEXT("E.wav"),NULL,SND_SYNC);
        else if(s[i]=='g'||s[i]=='G')
            PlaySound(TEXT("F.wav"),NULL,SND_SYNC);
        else if(s[i]=='h'||s[i]=='H')
            PlaySound(TEXT("G.wav"),NULL,SND_SYNC);
        else if(s[i]=='i'||s[i]=='I')
            PlaySound(TEXT("H.wav"),NULL,SND_SYNC);
        else if(s[i]=='j'||s[i]=='J')
            PlaySound(TEXT("J.wav"),NULL,SND_SYNC);
        else if(s[i]=='k'||s[i]=='K')
            PlaySound(TEXT("K.wav"),NULL,SND_SYNC);
        else if(s[i]=='l'||s[i]=='L')
            PlaySound(TEXT("L.wav"),NULL,SND_SYNC);
        else if(s[i]=='m'||s[i]=='M')
            PlaySound(TEXT("M.wav"),NULL,SND_SYNC);
        else if(s[i]=='n'||s[i]=='N')
            PlaySound(TEXT("N.wav"),NULL,SND_SYNC);
        else if(s[i]=='o'||s[i]=='O')
            PlaySound(TEXT("O.wav"),NULL,SND_SYNC);
        else if(s[i]=='p'||s[i]=='P')
            PlaySound(TEXT("P.wav"),NULL,SND_SYNC);
        else if(s[i]=='q'||s[i]=='Q')
            PlaySound(TEXT("Q.wav"),NULL,SND_SYNC);
        else if(s[i]=='r'||s[i]=='R')
            PlaySound(TEXT("R.wav"),NULL,SND_SYNC);
        else if(s[i]=='s'||s[i]=='S')
            PlaySound(TEXT("S.wav"),NULL,SND_SYNC);
        else if(s[i]=='t'||s[i]=='T')
            PlaySound(TEXT("T.wav"),NULL,SND_SYNC);
        else if(s[i]=='u'||s[i]=='U')
            PlaySound(TEXT("U.wav"),NULL,SND_SYNC);
        else if(s[i]=='v'||s[i]=='V')
            PlaySound(TEXT("V.wav"),NULL,SND_SYNC);
        else if(s[i]=='w'||s[i]=='W')
            PlaySound(TEXT("W.wav"),NULL,SND_SYNC);
        else if(s[i]=='x'||s[i]=='X')
            PlaySound(TEXT("X.wav"),NULL,SND_SYNC);
        else if(s[i]=='y'||s[i]=='Y')
            PlaySound(TEXT("Y.wav"),NULL,SND_SYNC);
        else if(s[i]=='Z'||s[i]=='z')
            PlaySound(TEXT("Z.wav"),NULL,SND_SYNC);
        else if(s[i]=='0')
            PlaySound(TEXT("0.wav"),NULL,SND_SYNC);
        else if(s[i]=='1')
            PlaySound(TEXT("1.wav"),NULL,SND_SYNC);
        else if(s[i]=='2')
            PlaySound(TEXT("2.wav"),NULL,SND_SYNC);
        else if(s[i]=='3')
            PlaySound(TEXT("3.wav"),NULL,SND_SYNC);
        else if(s[i]=='4')
            PlaySound(TEXT("4.wav"),NULL,SND_SYNC);
        else if(s[i]=='5')
            PlaySound(TEXT("5.wav"),NULL,SND_SYNC);
        else if(s[i]=='6')
            PlaySound(TEXT("6.wav"),NULL,SND_SYNC);
        else if(s[i]=='7')
            PlaySound(TEXT("7.wav"),NULL,SND_SYNC);
        else if(s[i]=='8')
            PlaySound(TEXT("8.wav"),NULL,SND_SYNC);
        else if(s[i]=='9')
            PlaySound(TEXT("9.wav"),NULL,SND_SYNC);
        else if(s[i]=='.')
            PlaySound(TEXT("DOT.wav"),NULL,SND_SYNC);
        else if(s[i]==',')
            PlaySound(TEXT(",.wav"),NULL,SND_SYNC);
        else if(s[i]=='?')
            PlaySound(TEXT("Question Mark.wav"),NULL,SND_SYNC);
        else if(s[i]=='!')
            PlaySound(TEXT("!.wav"),NULL,SND_SYNC);
        else if(s[i]=='/')
            PlaySound(TEXT("Slash.wav"),NULL,SND_SYNC);
        else if(s[i]==':')
            PlaySound(TEXT("Colon.wav"),NULL,SND_SYNC);
        else if(s[i]==';')
            PlaySound(TEXT(";.wav"),NULL,SND_SYNC);
        else if(s[i]=='=')
            PlaySound(TEXT("=.wav"),NULL,SND_SYNC);
        else if(s[i]=='&')
            PlaySound(TEXT("&.wav"),NULL,SND_SYNC);
        else if(s[i]=='+')
            PlaySound(TEXT("+.wav"),NULL,SND_SYNC);
        else if(s[i]=='-')
            PlaySound(TEXT("-.wav"),NULL,SND_SYNC);
        else if(s[i]=='_')
            PlaySound(TEXT("_.wav"),NULL,SND_SYNC);
        else if(s[i]=='"')
            PlaySound(TEXT("Quotation Mark.wav"),NULL,SND_SYNC);
        else if(s[i]=='$')
            PlaySound(TEXT("$.wav"),NULL,SND_SYNC);
        else if(s[i]=='@')
            PlaySound(TEXT("@.wav"),NULL,SND_SYNC);

    }
    cout<<"\n\n..._._ \n\n";
    PlaySound(TEXT("end.wav"),NULL,SND_SYNC);
    cout<<"***************CREATED BY => BADGUY*******************\n\n\n";
    return 0;
}
