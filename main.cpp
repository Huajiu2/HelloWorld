#include<iostream>
void sort(int arr[],int m_size)
{
	int tmp=0;
	for(int i=0;i<m_size-1;i++)
		for(int j=0;j<m_size-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
}
int main()
{
	int arr[]={12,4,89,43,21,78};
	int size=sizeof(arr)/sizeof(arr[0]);
	sort(arr,size);
	return 0;
}


