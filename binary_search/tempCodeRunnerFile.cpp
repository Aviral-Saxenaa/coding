
                else{
                        r=mid;
                }
        }
        if(k>=arr[l]){
                searchsmall(k,arr,n,l);
        }
        else{
                searchbig(k,arr,n,l);
        }
}


int main()
{
    int n;
    cin >> n;
    int arr[n];
    int k;cin>>k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    search(n,arr,k);