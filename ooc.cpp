#include"payment.h"
#include<cstring>

Payment::payment(int Pid,char* payDesc){
	PaymentID=Pid;
	strcpy(PaymentDescription,payDesc);
}

void Payment::setPaymentAmount(float Amount){
	PamentAmount=Amount;
}

float Payment::getPayAmount(){
}
