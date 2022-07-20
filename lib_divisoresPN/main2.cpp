#include "header/mainH.h"

void nDividers_PN(int n){

			unsigned int nDividers_Positiv[n+1]{};
			int nDividers_Negativ[n+1]{};

			for(int j = 0; j <= n; j++){

				if(j != 0){

					if(n % j == 0){// searching dividers of 'n'

						nDividers_Positiv[j]=j;
						nDividers_Negativ[j]=j*(-1); // make dividers in negatives

						std::cout<<nDividers_Positiv[j]<<" ";// output of dividers positives

					}
				}

				if(j == n){ // if 'j' is equals the 'n' then can print array with values negatives

					std::cout<<"\n";

					for (int i = 1; i <= n; ++i){

							if(nDividers_Negativ[i] !=0 ){

								std::cout<<nDividers_Negativ[i]<<" ";// output of dividers negatives

							}
					}
				}
			}
		}


