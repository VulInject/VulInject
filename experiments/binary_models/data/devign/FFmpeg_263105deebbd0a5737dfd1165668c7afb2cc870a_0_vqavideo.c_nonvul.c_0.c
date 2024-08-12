static int FUN1(VAR1 *VAR2, int VAR3, unsigned char *VAR4, int VAR5, int VAR6)
{
    int VAR7 = 0;
    int VAR8, VAR9, VAR10;
    int VAR11;
    unsigned char VAR12;
    int VAR13;
    VAR10 = FUN2(&VAR2->VAR14);
    while (FUN2(&VAR2->VAR14) - VAR10 < VAR3)
    {
        VAR9 = FUN3(&VAR2->VAR14);
        FUN4(VAR2->VAR15, "", VAR9);
        if (VAR9 == 0x80)
            break;
        if (VAR7 >= VAR5)
        {
            FUN5(VAR2->VAR15, VAR16, "", VAR7, VAR5);
            return VAR17;
        }
        if (VAR9 == 0xFF)
        {
            VAR8 = FUN6(&VAR2->VAR14);
            VAR11 = FUN6(&VAR2->VAR14);
            FUN4(VAR2->VAR15, "", VAR8, VAR11);
            FUN7();
            FUN8(VAR11);
            for (VAR13 = 0; VAR13 < VAR8; VAR13++)
                VAR4[VAR7 + VAR13] = VAR4[VAR11 + VAR13];
            VAR7 += VAR8;
        }
        else if (VAR9 == 0xFE)
        {
            VAR8 = FUN6(&VAR2->VAR14);
            VAR12 = FUN3(&VAR2->VAR14);
            FUN4(VAR2->VAR15, "", VAR8, VAR12);
            FUN7();
            memset(&VAR4[VAR7], VAR12, VAR8);
            VAR7 += VAR8;
        }
        else if ((VAR9 & 0xC0) == 0xC0)
        {
            VAR8 = (VAR9 & 0x3F) + 3;
            VAR11 = FUN6(&VAR2->VAR14);
            FUN4(VAR2->VAR15, "", VAR8, VAR11);
            FUN7();
            FUN8(VAR11);
            for (VAR13 = 0; VAR13 < VAR8; VAR13++)
                VAR4[VAR7 + VAR13] = VAR4[VAR11 + VAR13];
            VAR7 += VAR8;
        }
        else if (VAR9 > 0x80)
        {
            VAR8 = VAR9 & 0x3F;
            FUN4(VAR2->VAR15, "", VAR8);
            FUN7();
            FUN9(&VAR2->VAR14, &VAR4[VAR7], VAR8);
            VAR7 += VAR8;
        }
        else
        {
            VAR8 = ((VAR9 & 0x70) >> 4) + 3;
            VAR11 = FUN3(&VAR2->VAR14) | ((VAR9 & 0x0F) << 8);
            FUN4(VAR2->VAR15, "", VAR8, VAR11);
            FUN7();
            FUN8(VAR7 - VAR11);
            for (VAR13 = 0; VAR13 < VAR8; VAR13++)
                VAR4[VAR7 + VAR13] = VAR4[VAR7 - VAR11 + VAR13];
            VAR7 += VAR8;
        }
    }
    if (VAR6)
        if (VAR7 < VAR5)
            FUN5(VAR2->VAR15, VAR16, "", VAR7, VAR5);
    return 0;
}