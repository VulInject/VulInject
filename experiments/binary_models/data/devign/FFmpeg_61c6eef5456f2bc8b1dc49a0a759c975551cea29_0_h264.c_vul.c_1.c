int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5.VAR4;
    if (VAR4->VAR6[0] == 1)
    {
        int VAR7, VAR8, VAR9;
        unsigned char *VAR10 = VAR4->VAR6;
        VAR2->VAR11 = 1;
        if (VAR4->VAR12 < 7)
        {
            FUN2(VAR4, VAR13, "");
            return -1;
        }
        VAR2->VAR14 = 2;
        VAR8 = *(VAR10 + 5) & 0x1f;
        VAR10 += 6;
        for (VAR7 = 0; VAR7 < VAR8; VAR7++)
        {
            VAR9 = FUN3(VAR10) + 2;
            if (VAR10 - VAR4->VAR6 + VAR9 > VAR4->VAR12)
                return -1;
            if (FUN4(VAR2, VAR10, VAR9) < 0)
            {
                FUN2(VAR4, VAR13, "", VAR7);
                return -1;
            }
            VAR10 += VAR9;
        }
        VAR8 = *(VAR10++);
        for (VAR7 = 0; VAR7 < VAR8; VAR7++)
        {
            VAR9 = FUN3(VAR10) + 2;
            if (VAR10 - VAR4->VAR6 + VAR9 > VAR4->VAR12)
                return -1;
            if (FUN4(VAR2, VAR10, VAR9) < 0)
            {
                FUN2(VAR4, VAR13, "", VAR7);
                return -1;
            }
            VAR10 += VAR9;
        }
        VAR2->VAR14 = (VAR4->VAR6[4] & 0x03) + 1;
    }
    else
    {
        VAR2->VAR11 = 0;
        if (FUN4(VAR2, VAR4->VAR6, VAR4->VAR12) < 0)
            return -1;
    }
    return 0;
}