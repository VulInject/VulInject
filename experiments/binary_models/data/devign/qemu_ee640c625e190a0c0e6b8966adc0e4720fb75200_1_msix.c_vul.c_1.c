int FUN1(struct VAR1 *VAR2, unsigned short VAR3, VAR4 *VAR5, uint8_t VAR6, unsigned VAR7, VAR4 *VAR8, uint8_t VAR9, unsigned VAR10, uint8_t VAR11)
{
    int VAR12;
    unsigned VAR13, VAR14;
    VAR15 *VAR16;
    if (!VAR17)
    {
        return -VAR18;
    }
    if (VAR3 < 1 || VAR3 > VAR19 + 1)
    {
        return -VAR20;
    }
    VAR13 = VAR3 * VAR21;
    VAR14 = FUN2(VAR3, 64) / 8;
    if ((VAR6 == VAR9 && FUN3(VAR7, VAR13, VAR10, VAR14)) || VAR7 + VAR13 > FUN4(VAR5) || VAR10 + VAR14 > FUN4(VAR8) || (VAR7 | VAR10) & VAR22)
    {
        return -VAR20;
    }
    VAR12 = FUN5(VAR2, VAR23, VAR11, VAR24);
    if (VAR12 < 0)
    {
        return VAR12;
    }
    VAR2->VAR25 = VAR12;
    VAR2->VAR26 |= VAR27;
    VAR16 = VAR2->VAR16 + VAR12;
    FUN6(VAR16 + VAR28, VAR3 - 1);
    VAR2->VAR29 = VAR3;
    VAR2->VAR30 = true;
    FUN7(VAR16 + VAR31, VAR7 | VAR6);
    FUN7(VAR16 + VAR32, VAR10 | VAR9);
    VAR2->VAR33[VAR12 + VAR34] |= VAR35 | VAR36;
    VAR2->VAR37 = FUN8(VAR13);
    VAR2->VAR38 = FUN8(VAR14);
    VAR2->VAR39 = FUN8(VAR3 * sizeof *VAR2->VAR39);
    FUN9(VAR2, VAR3);
    FUN10(&VAR2->VAR40, FUN11(VAR2), &VAR41, VAR2, "", VAR13);
    FUN12(VAR5, VAR7, &VAR2->VAR40);
    FUN10(&VAR2->VAR42, FUN11(VAR2), &VAR43, VAR2, "", VAR14);
    FUN12(VAR8, VAR10, &VAR2->VAR42);
    return 0;
}