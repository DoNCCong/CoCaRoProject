#ifndef __PHUTRO_H__
#define __PHUTRO_H__


template <class T>
void Print(T A[][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<A[i][j]<<"|";
		}
		cout<<endl;
	}
}

#endif
