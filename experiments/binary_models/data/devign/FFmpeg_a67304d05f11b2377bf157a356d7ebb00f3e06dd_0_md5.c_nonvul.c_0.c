void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    const VAR3 *VAR6;
    int VAR7;
    VAR7 = VAR2->VAR5 & 63;
    VAR2->VAR5 += VAR5;
    if (VAR7)
    {
        int VAR8 = FUN2(VAR5, 64 - VAR7);
        memcpy(VAR2->VAR9 + VAR7, VAR4, VAR8);
        VAR4 += VAR8;
        VAR5 -= VAR8;
        if (VAR7 + VAR8 < 64)
            return;
        FUN3(VAR2->VAR10, (VAR11 *)VAR2->VAR9, 1);
    }
    VAR6 = VAR4 + (VAR5 & ~63);
    if (VAR12 || (!VAR13 && ((VAR14)VAR4 & 3)))
    {
        while (VAR4 < VAR6)
        {
            memcpy(VAR2->VAR9, VAR4, 64);
            FUN3(VAR2->VAR10, (VAR11 *)VAR2->VAR9, 1);
            VAR4 += 64;
        }
    }
    else
    {
        int VAR15 = VAR5 / 64;
        FUN3(VAR2->VAR10, (VAR11 *)VAR4, VAR15);
        VAR4 = VAR6;
    }
    VAR5 &= 63;
    if (VAR5 > 0)
        memcpy(VAR2->VAR9, VAR4, VAR5);
}