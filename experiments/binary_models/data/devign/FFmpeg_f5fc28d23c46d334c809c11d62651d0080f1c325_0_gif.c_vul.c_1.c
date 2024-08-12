static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, const VAR7 *VAR8, int VAR9, int VAR10)
{
    PutBitContext VAR11;
    uint8_t VAR12[200];
    int VAR13, VAR14, VAR15, VAR16;
    const VAR7 *VAR17;
    FUN2(VAR2, 0x2c);
    FUN3(VAR2, VAR3);
    FUN3(VAR2, VAR4);
    FUN3(VAR2, VAR5);
    FUN3(VAR2, VAR6);
    FUN2(VAR2, 0x00);
    FUN2(VAR2, 0x08);
    VAR14 = VAR5 * VAR6;
    FUN4(&VAR11, VAR12, 130);
    VAR17 = VAR8;
    VAR15 = VAR5;
    while (VAR14 > 0)
    {
        FUN5(&VAR11, 9, 0x0100);
        for (VAR13 = 0; VAR13 < VAR18; VAR13++)
        {
            if (VAR10 == VAR19)
            {
                VAR16 = FUN6(VAR17[0], VAR17[1], VAR17[2]);
                VAR17 += 3;
            }
            else
            {
                VAR16 = *VAR17++;
            }
            FUN5(&VAR11, 9, VAR16);
            if (--VAR15 == 0)
            {
                VAR15 = VAR5;
                VAR8 += VAR9;
                VAR17 = VAR8;
            }
        }
        if (VAR14 <= VAR18)
        {
            FUN5(&VAR11, 9, 0x101);
            FUN7(&VAR11);
        }
        if (FUN8(&VAR11) - VAR11.VAR8 > 0)
        {
            FUN2(VAR2, FUN8(&VAR11) - VAR11.VAR8);
            FUN9(VAR2, VAR11.VAR8, FUN8(&VAR11) - VAR11.VAR8);
            VAR11.VAR20 = VAR11.VAR8;
        }
        if (VAR14 <= VAR18)
        {
            FUN2(VAR2, 0x00);
        }
        VAR14 -= VAR18;
    }
    return 0;
}