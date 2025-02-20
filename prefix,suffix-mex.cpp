vector<int>prefix(n), suffix(n);
set<int>preMex, sufMex;
int a = 0, b = 0;

for(int i = 0; i < n; i++) {
    preMex.insert(arr[i]);
    while(preMex.count(a)) a++;
    prefix[i] = a;
}

for(int i = n - 1; i >= 0; i--) {
    sufMex.insert(arr[i]);
    while(sufMex.count(b)) b++;
    suffix[i] = b;
}
