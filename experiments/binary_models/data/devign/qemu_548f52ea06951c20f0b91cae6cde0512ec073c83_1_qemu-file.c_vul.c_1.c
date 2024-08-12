int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6 = VAR5;
    int VAR7 = 0;
    while (VAR6 > 0)
    {
        int VAR8;
        VAR8 = FUN2(VAR2, VAR4, VAR6, 0);
        if (VAR8 == 0)
        {
            return VAR7;
        }
        FUN3(VAR2, VAR8);
        VAR4 += VAR8;
        VAR6 -= VAR8;
        VAR7 += VAR8;
    }
    return VAR7;
}