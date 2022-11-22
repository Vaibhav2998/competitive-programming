int ans = 0;

    for(int i=0;i<size;i++){
        ans = (ans^arr[i]);
        cout << "Loop one: " << ans << endl;
    }

    for(int j = 1; j<=size-1;j++){
        ans = (ans^j);
        cout << "Loop two: " << ans << endl;
    }

    return ans;