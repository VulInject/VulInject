static void FUN1(int VAR1, int VAR2, int VAR3, int VAR4, float *VAR5)
{
    int VAR6 = VAR4 - VAR2;
    int VAR7 = VAR3 - VAR1;
    int VAR8 = FUN2(VAR6);
    int VAR9 = VAR6 < 0 ? -1 : 1;
    VAR5[VAR1] = VAR10[VAR2];
    if (VAR8 * 2 <= VAR7)
    {
        FUN3(VAR1, VAR2, VAR3, VAR9, VAR8, VAR7, VAR5);
    }
    else
    {
        int VAR11 = VAR6 / VAR7;
        int VAR12 = VAR1;
        int VAR13 = VAR2;
        int VAR14 = -VAR7;
        VAR8 -= FUN2(VAR11) * VAR7;
        while (++VAR12 < VAR3)
        {
            VAR13 += VAR11;
            VAR14 += VAR8;
            if (VAR14 >= 0)
            {
                VAR14 -= VAR7;
                VAR13 += VAR9;
            }
            VAR5[VAR12] = VAR10[VAR13];
        }
    }
}