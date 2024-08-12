static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10;
    unsigned char *VAR11;
    const unsigned char *VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    const char *VAR20;
    if (VAR7->VAR21 >= VAR7->VAR22->VAR23)
        return VAR24;
    VAR13 = VAR7->VAR21++;
    if (VAR5)
        return 0;
    VAR19 = VAR25.FUN2(VAR7->VAR22);
    VAR19 = FUN2(VAR7->VAR22);
    VAR4->VAR26 = (((VAR27)VAR7->VAR22->VAR28 * (VAR27)VAR7->VAR22->VAR29) * VAR19) / 8;
    if (!VAR4->VAR26)
        return VAR30;
    if (FUN3(VAR4, VAR4->VAR26) < 0)
        return FUN4(VAR31);
    VAR4->VAR32 = VAR13;
    VAR4->VAR33 = VAR13;
    VAR4->VAR34 = 1;
    VAR4->VAR35 = VAR7->VAR36;
    VAR10 = VAR25.FUN5(VAR7->VAR37, VAR13);
    VAR20 = VAR25.FUN6(VAR7->VAR37);
    if (VAR20)
    {
        FUN7(VAR2, VAR38, "", VAR20);
        VAR7->VAR20 = 1;
        FUN8(VAR4);
        return VAR30;
    }
    VAR11 = VAR4->VAR39;
    for (VAR14 = 0; VAR14 < VAR7->VAR40; VAR14++)
    {
        VAR15 = VAR7->VAR41[VAR14];
        VAR12 = VAR25.FUN9(VAR10, VAR15);
        VAR18 = VAR25.FUN10(VAR10, VAR15);
        VAR16 = VAR25.FUN11(VAR10, VAR15);
        VAR17 = VAR25.FUN12(VAR10, VAR15);
        VAR12 = FUN9(VAR10, VAR15);
        VAR18 = FUN10(VAR10, VAR15);
        VAR16 = FUN11(VAR10, VAR15);
        VAR17 = FUN12(VAR10, VAR15);
        if (FUN13(VAR7->VAR22) || FUN14(VAR7->VAR22))
        {
            VAR12 = VAR12 + (VAR17 - 1) * VAR18;
            VAR18 = -VAR18;
        }
        VAR25.FUN15(VAR7->VAR42, VAR11, VAR16, VAR12, VAR18, VAR16, VAR17);
        VAR11 += VAR16 * VAR17;
    }
    VAR25.FUN16(VAR10);
    return 0;
}