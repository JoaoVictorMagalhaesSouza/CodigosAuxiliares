#include <iostream>

int main() {
    int n1,n2;
    std::cout << "Digite o primeiro numero: ";
    std::cin >> n1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> n2;
    int qtdePrimos = 0;
    int contaDivisores = 0;
    for (int i=n1;i<=n2;i++){
	for (int j=1;j<=i;j++){
		if (i%j==0){			
			contaDivisores++;
		}
		
	
	}
	if (contaDivisores==2){ // Um numero primo so eh divisivel por 1 e por ele mesmo.
		std::cout << i << "eh primo\n";
		qtdePrimos++;
	}
	contaDivisores = 0;

}
std::cout << "A quantidade de primos é:  " << qtdePrimos << "\n";
    return 0;
}

