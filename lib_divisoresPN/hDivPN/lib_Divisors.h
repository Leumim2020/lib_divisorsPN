#include <iostream>

#ifndef LIB_DIVIDERS_H
#define LIB_DIVIDERS_H

namespace dvPN{

	void nDivisors_PN(int n){

			unsigned int nDivisors_Positiv[n+1]{};
			int nDivisors_Negativ[n+1]{};

			for(int j = 0; j <= n; j++){

				if(j != 0){

					if(n % j == 0){// searching dividers of 'n'

						nDivisors_Positiv[j]=j;
						nDivisors_Negativ[j]=j*(-1); // make dividers in negatives

						std::cout<<nDivisors_Positiv[j]<<" ";// output of dividers positives

					}
				}

				if(j == n){ // if 'j' is equals the 'n' then can print array with values negatives

					std::cout<<"\n";

					for (int i = 1; i <= n; ++i){

							if(nDivisors_Negativ[i] !=0 ){

								std::cout<<nDivisors_Negativ[i]<<" ";// output of dividers negatives

							}
					}
				}
			}
		}

	void nDivisorsN(int n, int nDivisors_negativ[]){ // function go generate divisors negative of a number

		for(int j = 0; j <= n; j++){

				if(j != 0){

					if(n % j == 0){// searching dividers of 'n'

						nDivisors_negativ[j]=j*(-1);

					}	
				}

			}	

	}	

	void nDivisorsP(int n, int nDivisors_Positiv[]){ // function go generate divisors positive of a number

			for(int j = 0; j <= n; j++){

				if(j != 0){

					if(n % j == 0){// searching dividers of 'n'

						nDivisors_Positiv[j]=j;

					}	
				}

			}	
	
	}
}

#endif
