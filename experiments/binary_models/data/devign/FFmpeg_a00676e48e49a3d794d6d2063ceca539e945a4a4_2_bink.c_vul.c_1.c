static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9;
    const VAR10 *VAR11;
    FUN2(VAR4, VAR6, VAR7);
    VAR11 = VAR6->VAR12 + VAR7;
    if (VAR11 > VAR6->VAR13)
    {
        FUN3(VAR2, VAR14, "");
        return -1;
    }
    if (FUN4(VAR4))
    {
        VAR9 = FUN5(VAR4, 4);
        if (VAR9)
        {
            VAR8 = -FUN4(VAR4);
            VAR9 = (VAR9 ^ VAR8) - VAR8;
        }
        memset(VAR6->VAR12, VAR9, VAR7);
        VAR6->VAR12 += VAR7;
    }
    else
    {
        do
        {
            VAR9 = FUN6(VAR4, VAR6->VAR15);
            if (VAR9)
            {
                VAR8 = -FUN4(VAR4);
                VAR9 = (VAR9 ^ VAR8) - VAR8;
            }
            *VAR6->VAR12++ = VAR9;
        } while (VAR6->VAR12 < VAR11);
    }
    return 0;
}