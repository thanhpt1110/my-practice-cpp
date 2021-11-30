    void NhapMaTran(int a[][100], int &r, int &c)
    {
        cin>>r>>c;
        for (int i=0; i<r; i++)
        {
            for (int j=0; j<c; j++)
            {
                cin>>a[i][j];
            }
        }
    }