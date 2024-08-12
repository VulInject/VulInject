static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR6->VAR10[VAR4->VAR11];
    VAR12 *VAR13 = VAR2->VAR14, *VAR15;
    VAR16 *VAR17;
    int64_t VAR18;
    int VAR19, VAR20, VAR21, VAR22, VAR23, VAR24, VAR25;
    int VAR26 = !!(VAR4->VAR21 & VAR27);
    int VAR28 = 0;
    int VAR29;
    if (VAR4->VAR30 < 0)
    {
        FUN2(VAR2, VAR31, "" VAR32 "", VAR4->VAR30);
        return FUN3(VAR33);
    }
    if (1LL << (20 + 3 * VAR6->VAR34) <= FUN4(VAR13))
        FUN5(VAR2, VAR13);
    if (VAR26 && !(VAR9->VAR35 & VAR36))
        VAR28 = 1;
    if (VAR4->VAR37 + 30 + FUN4(VAR13) >= VAR6->VAR38 + VAR6->VAR39)
        VAR28 = 1;
    if (VAR28)
    {
        VAR40 *VAR41, VAR42 = {.VAR43 = VAR44};
        FUN6(VAR6, *VAR9->VAR45, VAR4->VAR46);
        for (VAR23 = 0; VAR23 < VAR2->VAR47; VAR23++)
        {
            VAR48 *VAR49 = VAR2->VAR50[VAR23];
            int64_t VAR51 = FUN7(VAR4->VAR46, VAR9->VAR45->VAR52 * (VAR53)VAR6->VAR10[VAR23].VAR45->VAR54, VAR9->VAR45->VAR54 * (VAR53)VAR6->VAR10[VAR23].VAR45->VAR52, VAR55);
            int VAR56 = FUN8(VAR49, VAR51, VAR57);
            if (VAR56 >= 0)
                VAR42.VAR43 = FUN9(VAR42.VAR43, VAR49->VAR58[VAR56].VAR43);
        }
        if (VAR42.VAR43 == VAR44)
            VAR42.VAR43 = 0;
        VAR41 = FUN10(VAR6->VAR59, &VAR42, (void *)VAR60, NULL);
        VAR6->VAR38 = FUN4(VAR13);
        VAR29 = FUN11(&VAR15);
        if (VAR29 < 0)
            return VAR29;
        FUN12(VAR6, VAR9->VAR45, VAR15, VAR4->VAR46);
        FUN13(VAR15, VAR41 ? (VAR6->VAR38 - VAR41->VAR43) >> 4 : 0);
        FUN14(VAR6, VAR13, VAR15, 1, VAR61);
        FUN15(VAR6, VAR6->VAR38, 0, VAR4->VAR46);
    }
    FUN16(VAR9->VAR62 != VAR63);
    VAR18 = VAR4->VAR30 & ((1 << VAR9->VAR64) - 1);
    if (FUN17(VAR9, VAR18) != VAR4->VAR30)
        VAR18 = VAR4->VAR30 + (1 << VAR9->VAR64);
    VAR25 = FUN18(VAR6, VAR4);
    VAR19 = VAR65;
    VAR20 = -1;
    for (VAR23 = 0; VAR23 < 256; VAR23++)
    {
        int VAR66 = 0;
        VAR16 *VAR17 = &VAR6->VAR20[VAR23];
        int VAR21 = VAR17->VAR21;
        if (VAR21 & VAR67)
            continue;
        VAR22 = FUN19(VAR6, VAR9, VAR17, VAR4);
        if (VAR21 & VAR68)
        {
            VAR66++;
            VAR21 = VAR22;
        }
        if ((VAR21 & VAR22) != VAR22)
            continue;
        if ((VAR21 ^ VAR22) & VAR36)
            continue;
        if (VAR21 & VAR69)
            VAR66 += FUN20(VAR4->VAR11);
        if (VAR4->VAR37 % VAR17->VAR70 != VAR17->VAR71)
            continue;
        if (VAR21 & VAR72)
            VAR66 += FUN20(VAR4->VAR37 / VAR17->VAR70);
        if (VAR21 & VAR73)
            VAR66 += 4;
        if (VAR21 & VAR74)
            VAR66 += FUN20(VAR18);
        if ((VAR21 & VAR68) && VAR6->VAR75[VAR25] > VAR6->VAR75[VAR17->VAR24] + 1)
        {
            VAR21 |= VAR76;
        }
        if (VAR21 & VAR76)
        {
            VAR66 += 1 - VAR6->VAR75[VAR25];
        }
        else
        {
            VAR66 -= VAR6->VAR75[VAR17->VAR24];
        }
        VAR66 *= 4;
        VAR66 += !(VAR21 & VAR74);
        VAR66 += !(VAR21 & VAR73);
        if (VAR66 < VAR19)
        {
            VAR19 = VAR66;
            VAR20 = VAR23;
        }
    }
    FUN16(VAR20 != -1);
    VAR17 = &VAR6->VAR20[VAR20];
    VAR21 = VAR17->VAR21;
    VAR22 = FUN19(VAR6, VAR9, VAR17, VAR4);
    VAR24 = VAR17->VAR24;
    FUN21(VAR13, VAR77, 0);
    FUN22(VAR13, VAR20);
    if (VAR21 & VAR68)
    {
        FUN13(VAR13, (VAR21 ^ VAR22) & ~(VAR68));
        VAR21 = VAR22;
    }
    if (VAR21 & VAR69)
        FUN13(VAR13, VAR4->VAR11);
    if (VAR21 & VAR74)
        FUN13(VAR13, VAR18);
    if (VAR21 & VAR72)
        FUN13(VAR13, VAR4->VAR37 / VAR17->VAR70);
    if (VAR21 & VAR76)
        FUN13(VAR13, VAR24 = VAR25);
    if (VAR21 & VAR73)
        FUN23(VAR13, FUN24(VAR13));
    else
        FUN24(VAR13);
    FUN25(VAR13, VAR4->VAR78 + VAR6->VAR75[VAR24], VAR4->VAR37 - VAR6->VAR75[VAR24]);
    VAR9->VAR35 = VAR21;
    VAR9->VAR62 = VAR4->VAR30;
    if (VAR21 & VAR36)
        FUN26(VAR2->VAR50[VAR4->VAR11], VAR6->VAR38, VAR4->VAR30, 0, 0, VAR79);
    return 0;
}