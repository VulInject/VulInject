static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR5 *VAR11, *VAR12;
    VAR13 *VAR14 = VAR3;
    GetBitContext VAR15;
    uint32_t VAR16, VAR17, VAR18, VAR19, VAR20;
    uint32_t VAR21, VAR22;
    VAR12 = VAR6;
    VAR11 = VAR6 + VAR7;
VAR23:
    VAR9->VAR24 = 0;
    VAR9->VAR25 = 0;
    FUN2(&VAR15, VAR12, (VAR11 - VAR12) * 8);
    FUN3(&VAR15, 32);
    if (FUN4(&VAR15, 32) != FUN5(FUN6("")))
    {
        FUN7("");
        return 0;
    }
    VAR21 = FUN4(&VAR15, 32);
    FUN7("", VAR21);
    FUN3(&VAR15, 32);
    VAR20 = FUN4(&VAR15, 32);
    FUN7("", VAR20);
    if (VAR20)
        VAR9->VAR26 = 1;
    VAR16 = FUN4(&VAR15, 32);
    FUN7("", VAR16);
    if (VAR16)
    {
        FUN2(&VAR9->VAR27, VAR6 + VAR16, (VAR11 - (VAR6 + VAR16)) * 8);
        VAR9->VAR28 = VAR29;
        FUN8(VAR9);
    }
    VAR17 = FUN4(&VAR15, 32);
    FUN7("", VAR17);
    if (VAR17)
    {
        FUN2(&VAR9->VAR27, VAR6 + VAR17, (VAR11 - (VAR6 + VAR17)) * 8);
        VAR9->VAR28 = VAR30;
        FUN9(VAR9);
    }
    VAR18 = FUN4(&VAR15, 32);
    FUN7("", VAR18);
    if (VAR18)
    {
        FUN2(&VAR9->VAR27, VAR6 + VAR18, (VAR11 - (VAR6 + VAR18)) * 8);
        VAR9->VAR28 = VAR31;
        if (FUN10(VAR9) < 0)
            return -1;
    }
    VAR19 = FUN4(&VAR15, 32);
    FUN7("", VAR19);
    VAR22 = FUN4(&VAR15, 32);
    FUN7("", VAR22);
    if (VAR19)
    {
        FUN2(&VAR9->VAR27, VAR6 + VAR19, VAR21 * 8);
        VAR9->VAR25 = (VAR22 - VAR19 - FUN11(&VAR9->VAR27, 16));
        VAR9->VAR28 = VAR32;
        FUN12(VAR9);
    }
    if (VAR9->VAR26)
    {
        VAR9->VAR33 ^= 1;
        if (VAR9->VAR33 && VAR20)
        {
            VAR12 = VAR6 + VAR20;
            VAR20 = 0;
            goto VAR23;
        }
    }
    *VAR14 = VAR9->VAR14;
    *VAR4 = sizeof(VAR13);
    if (!VAR9->VAR34)
    {
        VAR14->VAR35 = FUN13(FUN13(VAR9->VAR36[0], VAR9->VAR36[1]), VAR9->VAR36[2]);
        VAR14->VAR37 = 0;
        VAR14->VAR38 = VAR9->VAR38;
        memset(VAR14->VAR38, VAR14->VAR35, (VAR9->VAR39 + 15) / 16);
        if (VAR2->VAR40 & VAR41)
            FUN14(VAR2, VAR42, "", VAR14->VAR35);
        VAR14->VAR35 *= VAR43;
    }
    return VAR12 - VAR6;
}