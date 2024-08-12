static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8;
    VAR1 *VAR9 = VAR2 + VAR4 * VAR3;
    if (VAR7)
    {
        for (VAR8 = 0; VAR8 < VAR3; VAR8++)
        {
            int32_t VAR10 = VAR2[VAR8 * VAR4];
            int32_t VAR11 = FUN2(VAR10) - VAR12;
            if (VAR11 >= 0)
            {
                FUN3(VAR11 < sizeof(VAR13));
                VAR10 = VAR10 >= 0 ? VAR13[VAR11] : -VAR13[VAR11];
            }
            else
                VAR10 <<= 15;
            VAR2[VAR8 * VAR4] = VAR10;
        }
    }
    else
    {
        for (VAR8 = 0; VAR8 < VAR3; VAR8++)
            VAR2[VAR8 * VAR4] <<= 15;
    }
    if (VAR5 <= VAR6)
    {
        int VAR14 = FUN4(VAR3, VAR6 - VAR5);
        for (VAR8 = 0; VAR8 < VAR14; VAR8++)
        {
            ++VAR5;
            FUN5(*VAR2, VAR5);
            VAR2 += VAR4;
        }
        VAR3 -= VAR14;
    }
    else
    {
        int VAR14 = FUN4(VAR3, (VAR5 - VAR6) >> 3);
        for (VAR8 = 0; VAR8 < VAR14; VAR8++)
        {
            VAR5 -= 8;
            FUN5(*VAR2, VAR5);
            VAR2 += VAR4;
        }
        if (VAR5 - 8 < VAR6)
            VAR5 = VAR6;
        VAR3 -= VAR14;
    }
    if (VAR5 == 0)
    {
        if (VAR3 > 0)
            VAR2 += VAR3 * VAR4;
    }
    else
    {
        while (--VAR3 >= 0)
        {
            FUN5(*VAR2, VAR5);
            VAR2 += VAR4;
        }
    }
    FUN3(VAR2 == VAR9);
    return VAR5;
}