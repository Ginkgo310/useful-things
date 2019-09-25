#include<iostream>
#include<unistd.h>

using std::cout;
using std::cin;
using std::system;
using std::endl;

int main(){
    system("clear");
    int mode;
    //cout << "セッティングタイム　あり→ 1 なし→ 2" << endl;
    int min;
    int sec;
    int ha;
    int choose;
    int i;
    bool setting_time_flag = true;
    int time;
    while(1){
        cout << "設定　→10 タイマー開始　→１" << endl;
        cin << mode;
        if(mode = 10){
            cout << "セッティングタイム　あり　→１なし　→２" << endl;
            cin >> choose;
            if(choose == 1){
                setting_time_flag = true;
            }else{
                setting_time_flag = false;
            }
            system("clear");
            cout << "" << endl;
            cin >> min;
            cout << "" << endl;
            cin >> sec;
            i = min*60 + sec;
            cout << "" << endl;
            cin >> min;
            cout << "" << endl;
            cin >> sec;
            time = min*60 + sec;
            cout << ""
        }else{
            //タイマー開始
            if(setting_time_flag == true){
                for(i ; i >= 0 ; --i ){
                    min = i/60;
                    sec = i - (min*60);
                    ha = sec/10;
                    system("clear");
                    for(int s = 6 ; s>=0 ; --s){
                        cout << endl;
                    }
                    cout <<"                "<< min << ":" ;
                    switch(ha){
                        case 0:
                            cout << "0" << sec <<  endl;
                            break;
                        default:{
                                    cout << sec << endl;
                                    break;
                                }
                    }
                    sleep(1);
                }
                system("clear");
                cout << "          セッティングタイム終了です。" << endl;
                cin >> choose;
            }else{
                cout << "             セッティングタイムなしで行います。" << endl;
                sleep(1);
            }
            system("clear");
            cout << "             それでは始めます。スタート5秒前!" << endl;	
            sleep(1);
            for(int j = 4; j >= 1 ; --j){
                system("clear");
                for(int k = 5 ; k >= 0; --k){
                    cout << endl;
                }
                cout <<"                " << j << endl;
                sleep(1);
            }
            system("clear");
            cout << "             スタート!" << endl;
            sleep(1);
            for(time =  ; time >= 0 ; --time ){
                min = time/60;
                sec = time - (min*60);
                ha = sec/10;
                system("clear");
                for(int s = 5 ; s>=0 ; --s){
                    cout << endl;
                }
                cout <<"                " << min << ":" ;
                switch(ha){
                    case 0:
                        cout << "0" << sec <<  endl;
                        break;
                    default:{
                                cout << sec << endl;
                                break;
                            }
                }
                sleep(1);
                system("clear");
            }
        }
    }
}
