t i=0;i<n;i++){
        for(int j=n-i;j<n;j++)
            cout<<"  ";
        for(int z=i;z<n;z++){
            if(m==91)
                m=0;
            cout<<char(m+65)<<" ";
            m++;
        }
        cout<<endl;
    }