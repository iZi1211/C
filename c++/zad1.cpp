#include <iostream>

using namespace std;

void ustawianie(int tab[],int N){
    int liczba=10;
    for(int i=0;i<N;i++){
        tab[i]=liczba;
        liczba+=5;
    }
}
void drukowanie(int tab[],int N){
    for(int i=0;i<N;i++){
        cout<<tab[i]<<" ";
    }
}

struct obliczenia{
    int a;
    int b;
    int suma;
    int iloczyn;
    float srednia;
};

void wczyt_3(struct obliczenia *ob){
    cout<<"podaj liczbe: "<<endl;
    cin>>(*ob).a;
    cout<<"podaj druga liczbe: "<<endl;
    cin>>(*ob).b;

}

void oblicz_3(struct obliczenia *ob){
    ob->suma=ob->a+ob->b;
    ob->iloczyn=ob->a*ob->b;
    ob->srednia=(ob->a+ob->b)/2.;
}

void druk_3(const struct obliczenia ob){
    cout<<"pierwsza liczba:"<<ob.a<<endl;
    cout<<"druga liczba: "<<ob.b<<endl;
    cout<<"suma: "<<ob.suma<<endl;
    cout<<"iloczyn: "<<ob.iloczyn<<endl;
    cout<<"srednia: "<<ob.srednia<<endl;

}

int main()
{

    cout<<"zadanie.1."<<endl;
    int a,b,c,liczba=1;
    float avg;
    string zdanie;
    cout<<"podaj pierwsza liczbe: "<<endl;
    cin>>a;
    cout<<"podaj druga liczbe: "<<endl;
    cin>>b;
    cout<<"podaj trzecia liczbe: "<<endl;
    cin>>c;
    avg=(a+b+c)/3;
    cout<<"srednia: "<<avg<<endl;
    cin.ignore();
    cout<<"podaj zdanie: "<<endl;
    getline(cin,zdanie);
    cout<<"ilosc znakow: "<<zdanie.length()<<endl;
    while(liczba<10000000){
        cout.width(7);
        cout<<liczba<<endl;

        liczba*=10;

    }

    cout<<endl<<"zadanie.2."<<endl;
    int tab2[100];
    ustawianie(tab2,100);
    drukowanie(tab2,100);

    cout<<endl<<"zadanie.3."<<endl;
    obliczenia ob;
    wczyt_3(&ob);
    oblicz_3(&ob);
    druk_3(ob);

    cout<<endl<<"zadanie.4."<<endl;

    int tab4[16][16]={0};
    /*//
      int licz4=7;
    for(int k=8;k<16;k++){
        for(int i=0;i<16;i++){
            for(int j=0;j<16;j++){
                tab4[i][j]=licz4;
            }
        }

    }

    int w1=7,w2=8;
    for(int k=8;k<16;k++){
        for(int i=0;i<16;i++){
            for(int j=0;j<16;j++){
                for(int n=w1-1;n<=w2;n++){
                    tab4[w1][w2]=1;
                }
            }
        }
licz4--;
    }
    //*/

    for(int i=0;i<16;i++){
        for(int j=0;j<16;j++){
            cout<<tab4[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"zadanie.5."<<endl;
    string zdanie5;
    string pom1,pom2;
    int suma=0;
    cin.ignore();
    cout<<"podaj zdanie: "<<endl;
    getline(cin,zdanie5);
    for (int i = 0; i < zdanie5.length(); ++i)
    {
        if (isdigit(zdanie5[i])){
            pom1+=zdanie5[i];
        }
        else{
            pom2+=zdanie5[i];
        }

    }
    for(int i = 0; i < pom1.length(); i++){
        suma+=(char)pom1[i]-48;
    }
    cout<<suma<<endl;
    cout<<pom1<<endl;
    cout<<pom2<<endl;

    return 0;
}
