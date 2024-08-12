static void FUN1(const VAR1 *VAR2, int VAR3)
{
    bool VAR4 = false;
    int VAR5, VAR6, VAR7 = 0;
    char VAR8;
    for (VAR5 = 0; VAR5 < 6000; ++VAR5)
    {
        while ((VAR6 = read(VAR3, &VAR8, 1)) == 1)
        {
            if (VAR8 == VAR2->VAR9[VAR7])
            {
                VAR7 += 1;
                if (VAR2->VAR9[VAR7] == '')
                {
                    VAR4 = true;
                    goto VAR10;
                }
            }
            else
            {
                VAR7 = 0;
            }
        }
        FUN2(VAR6 >= 0);
        FUN3(10000);
    }
VAR10:
    FUN2(VAR4);
}