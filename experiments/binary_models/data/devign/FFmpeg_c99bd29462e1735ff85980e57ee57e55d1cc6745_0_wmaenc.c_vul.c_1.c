static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    const short *VAR9 = VAR5;
    int VAR10, VAR11;
    VAR7->VAR12 = VAR7->VAR13;
    VAR7->VAR14 = 1 << VAR7->VAR12;
    FUN2(VAR2, VAR9, VAR2->VAR15);
    if (VAR7->VAR16)
    {
        float VAR17, VAR18;
        int VAR10;
        for (VAR10 = 0; VAR10 < VAR7->VAR14; VAR10++)
        {
            VAR17 = VAR7->VAR19[0][VAR10] * 0.5;
            VAR18 = VAR7->VAR19[1][VAR10] * 0.5;
            VAR7->VAR19[0][VAR10] = VAR17 + VAR18;
            VAR7->VAR19[1][VAR10] = VAR17 - VAR18;
        }
    }
    if (VAR4 < 2 * VAR20)
    {
        FUN3(VAR2, VAR21, "");
        return FUN4(VAR22);
    }
    VAR11 = 128;
    for (VAR10 = 64; VAR10; VAR10 >>= 1)
    {
        int VAR23 = FUN5(VAR7, VAR7->VAR19, VAR3, VAR4, VAR11 - VAR10);
        if (VAR23 < 0)
            VAR11 -= VAR10;
    }
    VAR11 = 90;
    VAR24 = FUN5(VAR7, VAR7->VAR19, VAR3, VAR4, VAR11);
    for (VAR10 = 32; VAR10; VAR10 >>= 1)
    {
        int VAR25 = FUN5(VAR7, VAR7->VAR19, VAR3, VAR4, VAR11 - VAR10);
        int VAR26 = FUN5(VAR7, VAR7->VAR19, VAR3, VAR4, VAR11 + VAR10);
        FUN3(NULL, VAR21, "", VAR25, VAR24, VAR26, VAR11);
        if (VAR25 < FUN6(VAR24, VAR26))
        {
            VAR24 = VAR25;
            VAR11 -= VAR10;
        }
        else if (VAR26 < VAR24)
        {
            VAR24 = VAR26;
            VAR11 += VAR10;
        }
    }
    if ((VAR10 = FUN5(VAR7, VAR7->VAR19, VAR3, VAR4, VAR11)) >= 0)
    {
        FUN3(VAR2, VAR21, ""
                                    "");
        return FUN4(VAR22);
    }
    assert((FUN7(&VAR7->VAR27) & 7) == 0);
    while (VAR10++)
        FUN8(&VAR7->VAR27, 8, '');
    FUN9(&VAR7->VAR27);
    return VAR7->VAR28;
}