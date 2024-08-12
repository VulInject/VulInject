static int FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR3 *VAR5, const VAR3 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12;
    const VAR3 *VAR13;
    FUN2(VAR4, 0x2c);
    FUN3(VAR4, 0);
    FUN3(VAR4, 0);
    FUN3(VAR4, VAR2->VAR14);
    FUN3(VAR4, VAR2->VAR12);
    FUN2(VAR4, 0x00);
    FUN2(VAR4, 0x08);
    FUN4(VAR9->VAR15, VAR9->VAR6, VAR2->VAR14 * VAR2->VAR12, 12, VAR16, VAR17);
    VAR13 = VAR6;
    for (VAR12 = VAR2->VAR12; VAR12--;)
    {
        VAR11 += FUN5(VAR9->VAR15, VAR13, VAR2->VAR14);
        VAR13 += VAR7;
    }
    VAR11 += FUN6(VAR9->VAR15, VAR18);
    VAR13 = VAR9->VAR6;
    while (VAR11 > 0)
    {
        int VAR19 = FUN7(255, VAR11);
        FUN2(VAR4, VAR19);
        if (VAR5 - *VAR4 < VAR19)
            return -1;
        FUN8(VAR4, VAR13, VAR19);
        VAR13 += VAR19;
        VAR11 -= VAR19;
    }
    FUN2(VAR4, 0x00);
    FUN2(VAR4, 0x3b);
    return 0;
}