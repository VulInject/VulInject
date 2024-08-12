int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8.VAR7;
    if (!VAR4 || VAR5 <= 0)
        return -1;
    if (VAR4[0] == 1)
    {
        int VAR9, VAR10, VAR11;
        const unsigned char *VAR12 = VAR4;
        VAR2->VAR13 = 1;
        if (VAR5 < 7)
        {
            FUN2(VAR7, VAR14, "");
            return -1;
        }
        VAR2->VAR15 = 2;
        VAR10 = *(VAR12 + 5) & 0x1f;
        VAR12 += 6;
        for (VAR9 = 0; VAR9 < VAR10; VAR9++)
        {
            VAR11 = FUN3(VAR12) + 2;
            if (VAR11 > VAR5 - (VAR12 - VAR4))
                return -1;
            if (FUN4(VAR2, VAR12, VAR11) < 0)
            {
                FUN2(VAR7, VAR14, "", VAR9);
                return -1;
            }
            VAR12 += VAR11;
        }
        VAR10 = *(VAR12++);
        for (VAR9 = 0; VAR9 < VAR10; VAR9++)
        {
            VAR11 = FUN3(VAR12) + 2;
            if (VAR11 > VAR5 - (VAR12 - VAR4))
                return -1;
            if (FUN4(VAR2, VAR12, VAR11) < 0)
            {
                FUN2(VAR7, VAR14, "", VAR9);
                return -1;
            }
            VAR12 += VAR11;
        }
        VAR2->VAR15 = (VAR4[4] & 0x03) + 1;
    }
    else
    {
        VAR2->VAR13 = 0;
        if (FUN4(VAR2, VAR4, VAR5) < 0)
            return -1;
    }
    return VAR5;
}