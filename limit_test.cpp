#include<iostream>
#include<pigpio.h>
#include<stdlib.h>
#include"PigpioMS/PigpioMS.hpp"

using namespace std;
using namespace RPMS;

MotorSerial ms;

int main(){
	cout << "リミットスイッチチェッカー起動しました                          " << endl;
	cout << "Ctrl + C でプログラム終了します                                 " << endl;
	cout << "通電中には０が、スイッチが押されているときは１が表示され続けます" << endl;
	cout << "スイッチから手を離してください                                  " << endl;
	cout << "確認したいピンの番号を入力してください                          " << endl;
	cout << "M-2 右上　→　12 右下　→　16 左上　→  11 左下　→　22             " << endl;
	cout << "M-3 Y軸前　→　26　Y軸後ろ　→　19　Z軸上　→　9　Z軸下　→　10　   " << endl;
	cout << "ポテンショメータチェッカーは、100を入力してください             " << endl;
	int pin;
	cin >> pin;


	gpioInitialise();
	gpioSetMode(pin,PI_INPUT);
	gpioSetPullUpDown(pin,PI_PUD_UP);

	int x;
	x = gpioRead(pin);
	if(pin != 100){
		if( x == 1){
			cout << "通電していません。配線及びスイッチの確認をしてください。" << endl;
			exit(0);
		}else{
			while(1){
				x = gpioRead(pin);
				cout << x << endl;
			}
		}
	}else{
		int x;
		x = ms.send(16,40,200);
		while(1){
			cout <<"potentiometer" <<  x << endl;
		}
	}
	return 0;

}
