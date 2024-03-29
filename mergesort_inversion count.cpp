
#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll _mergeSort(ll arr[], ll temp[], ll left, ll right);
ll merge(ll arr[], ll temp[], ll left, ll mid,
		ll right);


ll mergeSort(ll arr[], ll array_size)
{
	ll temp[array_size];
	return _mergeSort(arr, temp, 0, array_size - 1);
}


ll _mergeSort(ll arr[], ll temp[], ll left, ll right)
{
	ll mid, inv_count = 0;
	if (right > left) {
		
		mid = (right + left) / 2;

		
		inv_count += _mergeSort(arr, temp, left, mid);
		inv_count += _mergeSort(arr, temp, mid + 1, right);

	
		inv_count += merge(arr, temp, left, mid + 1, right);
	}
	return inv_count;
}


ll merge(ll arr[], ll temp[], ll left, ll mid,
		ll right)
{
	ll i, j, k;
	ll inv_count = 0;

	i = left; 
	j = mid; 
	k = left; 
	while ((i <= mid - 1) && (j <= right)) {
		if (arr[i] <= arr[j]) {
			temp[k++] = arr[i++];
		}
		else {
			temp[k++] = arr[j++];

			
			inv_count = inv_count + (mid - i);
		}
	}

	while (i <= mid - 1)
		temp[k++] = arr[i++];

	while (j <= right)
		temp[k++] = arr[j++];

	
	for (i = left; i <= right; i++)
		arr[i] = temp[i];

	return inv_count;
}

int main()
{
	
	ll n,t;
    cin>>t; 
    while(t--){
        cin>>n;
        ll arr[n+5];
        for(ll i=0;i<n;i++) cin>>arr[i];
	ll ans = mergeSort(arr, n);
	cout<< ans<<"\n";
    }
	return 0;
}
