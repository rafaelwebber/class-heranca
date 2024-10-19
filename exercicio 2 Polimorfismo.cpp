//2. Crie um programa que possua uma classe abstrata chamada Payment e
 //que possua uma fun��o virtual pura processPayment( ) para
 //implementar diferentes formas de pagamento.
 //Requisitos:
 //a. Crie a classe base Payment com o m�todo processPayment( )
 //(virtual puro);
 //b. Crie as classes derivadas CreditCardPayment, PaypalPayment e
 //BitcoinPayment que implementam (override) o m�todo
 //processPayment( );
 //c. No m�todo principal, crie inst�ncias das classes derivadas e
 //demonstre a forma de pagamento de cada classe derivada.
 
 #include <iostream>
 
 
 using namespace std;
 
 class Payment {
 	virtual void processPayment() const = 0 ;
 };
 
 class CreditCardPayment: public Payment {
 	private:
 		float valor_;
 		
 	public:
 		CreditCardPayment(float valor):
 			valor_(valor){}
 		
 		void processPayment() const override{
		 cout << "Pagamento do cart�o de cr�dito no valor: ( " << valor_ << ") realizado com sucesso!" << endl;
		 }
 };
 
 class PaypalPayment : public Payment {
 	private:
 		float valor_;
 		
 	public:
 		PaypalPayment(float valor): 
 					valor_(valor){}
 					
 		void processPayment() const override {
		 cout << "Pagamento online via PayPal no valor: ( " << valor_ << ") realizado com sucesso!" << endl;
		 }
 };
 
 class BitcoinPayment : public Payment {
 	private:
 		float valor_;
 	
 	public:
 		BitcoinPayment (float valor):
 					valor_(valor){}
 					
 	void processPayment() const override {
 		cout << "Pagamento online via Bitcoin no valor: ( " << valor_ << ") realizado com sucesso!" << endl;
	 }
 };
 
 int main (){
 	
 	CreditCardPayment pag1 (5000);
 	PaypalPayment pag2 (8000);
 	BitcoinPayment pag3 (800000);
 	
 	pag1.processPayment();
 	pag2.processPayment();
 	pag3.processPayment();
 	
 	
 	return 0;
 }
