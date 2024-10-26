#include <stdio.h>

int main(){
   	int p,aw=0,dw=0;
	scanf("%d", &p);
	getchar();
	char  w[p + 1];

	fgets(w, sizeof(w), stdin);
	for(int i=0 ; i<p; i++){
		if(w[i]=='A') aw++;
		else if (w[i]=='D') dw++;
	}
	if(aw > dw)printf("%s","Anton");
	else if(aw< dw)printf("%s","Danik");
	else printf("%s","Friendship");
}
