void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10;
    VAR3 *VAR11;
    VAR10 = VAR7->VAR12;
    while (VAR5 > 0)
    {
        VAR11 = VAR7->VAR13;
        if ((VAR4[0] == 0) && (VAR4[1] == 0))
        {
            *VAR11++ = 0x04;
            VAR4 += 2;
            VAR5 -= 2;
        }
        else
        {
            *VAR11++ = 0;
        }
        *VAR11++ = 0;
        VAR9 = FUN2(VAR10 - 2, VAR5);
        if (VAR9 < VAR5)
        {
            const VAR3 *VAR14 = FUN3(VAR4, VAR4 + VAR9);
            VAR9 = VAR14 - VAR4;
        }
        memcpy(VAR11, VAR4, VAR9);
        VAR11 += VAR9;
        VAR7->VAR15 = VAR7->VAR16;
        FUN4(VAR2, VAR7->VAR13, VAR11 - VAR7->VAR13, (VAR9 == VAR5));
        VAR4 += VAR9;
        VAR5 -= VAR9;
    }
}