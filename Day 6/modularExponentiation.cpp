// Link : https://www.codingninjas.com/codestudio/problems/modular-exponentiation_8230803?challengeSlug=striver-sde-challenge&leftPanelTab=0


#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	int ans  = 1;

	while(n>0){

		// If n is odd
		if(n&1){
			ans = (1LL*ans * (x)%m)%m;
		}

		x = (1LL*(x)%m*(x)%m)%m;

		n = n/2;
	}

	return ans;
}