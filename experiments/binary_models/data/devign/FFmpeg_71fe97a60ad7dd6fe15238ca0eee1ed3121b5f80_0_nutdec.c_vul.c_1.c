static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR7->VAR11;
    int VAR12, VAR13, VAR14;
    int64_t VAR15, VAR16;
    VAR17 *VAR18;
    uint8_t VAR19;
    VAR12 = FUN2(VAR2, &VAR15, &VAR13, &VAR19, VAR5);
    if (VAR12 < 0)
        return VAR12;
    VAR18 = &VAR2->VAR20[VAR13];
    if (VAR18->VAR21 & VAR22)
        VAR18->VAR23 = 0;
    VAR14 = VAR7->VAR24[VAR13]->VAR14;
    VAR16 = VAR7->VAR24[VAR13]->VAR16;
    if ((VAR14 >= VAR25 && !(VAR18->VAR21 & VAR22)) || (VAR14 >= VAR26 && VAR16 != VAR27 && VAR16 > VAR15) || VAR14 >= VAR28 || VAR18->VAR23)
    {
        FUN3(VAR10, VAR12);
        return 1;
    }
    if (FUN4(VAR4, VAR12 + VAR2->VAR29[VAR19]) < 0)
        return FUN5(VAR30);
    memcpy(VAR4->VAR31, VAR2->VAR32[VAR19], VAR2->VAR29[VAR19]);
    VAR4->VAR33 = FUN6(VAR10);
    if (VAR18->VAR21 & VAR34)
    {
        int VAR35;
        if (FUN7(VAR7, VAR10, VAR4, 0, VAR4->VAR33 + VAR12) < 0)
            return VAR36;
        if (FUN7(VAR7, VAR10, VAR4, 1, VAR4->VAR33 + VAR12) < 0)
            return VAR36;
        VAR35 = FUN6(VAR10) - VAR4->VAR33;
        VAR12 -= VAR35;
        VAR4->VAR12 -= VAR35;
    }
    FUN8(VAR10, VAR4->VAR31 + VAR2->VAR29[VAR19], VAR12);
    VAR4->VAR37 = VAR13;
    if (VAR18->VAR21 & VAR22)
        VAR4->VAR38 |= VAR39;
    VAR4->VAR15 = VAR15;
    return 0;
}