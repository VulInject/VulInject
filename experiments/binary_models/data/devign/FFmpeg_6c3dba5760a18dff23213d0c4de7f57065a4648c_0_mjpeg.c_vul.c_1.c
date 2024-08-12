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
    VAR9->VAR26 = 0;
    FUN2(&VAR15, VAR12, (VAR11 - VAR12) * 8);
    FUN3(&VAR15, 32);
    if (FUN4(&VAR15, 32) != FUN5('', '', '', ''))
    {
        FUN6(VAR2, VAR27, "");
        return 0;
    }
    VAR21 = FUN4(&VAR15, 32);
    FUN6(VAR2, VAR28, "", VAR21);
    FUN3(&VAR15, 32);
    VAR20 = FUN4(&VAR15, 32);
    FUN6(VAR2, VAR28, "", VAR20);
    if (VAR20)
        VAR9->VAR29 = 1;
    VAR16 = FUN4(&VAR15, 32);
    FUN6(VAR2, VAR28, "", VAR16);
    if (VAR16)
    {
        FUN2(&VAR9->VAR30, VAR6 + VAR16, (VAR11 - (VAR6 + VAR16)) * 8);
        VAR9->VAR31 = VAR32;
        FUN7(VAR9);
    }
    VAR17 = FUN4(&VAR15, 32);
    FUN6(VAR2, VAR28, "", VAR17);
    if (VAR17)
    {
        FUN2(&VAR9->VAR30, VAR6 + VAR17, (VAR11 - (VAR6 + VAR17)) * 8);
        VAR9->VAR31 = VAR33;
        FUN8(VAR9);
    }
    VAR18 = FUN4(&VAR15, 32);
    FUN6(VAR2, VAR28, "", VAR18);
    if (VAR18)
    {
        FUN2(&VAR9->VAR30, VAR6 + VAR18, (VAR11 - (VAR6 + VAR18)) * 8);
        VAR9->VAR31 = VAR34;
        if (FUN9(VAR9) < 0)
            return -1;
    }
    VAR19 = FUN4(&VAR15, 32);
    FUN6(VAR2, VAR28, "", VAR19);
    VAR22 = FUN4(&VAR15, 32);
    FUN6(VAR2, VAR28, "", VAR22);
    if (VAR19)
    {
        FUN2(&VAR9->VAR30, VAR6 + VAR19, VAR21 * 8);
        VAR9->VAR26 = (VAR22 - VAR19 - FUN10(&VAR9->VAR30, 16));
        VAR9->VAR31 = VAR35;
        FUN11(VAR9);
    }
    if (VAR9->VAR29)
    {
        VAR9->VAR36 ^= 1;
        if (VAR9->VAR36 && VAR20)
        {
            VAR12 = VAR6 + VAR20;
            VAR20 = 0;
            goto VAR23;
        }
    }
    *VAR14 = VAR9->VAR14;
    *VAR4 = sizeof(VAR13);
    if (!VAR9->VAR37)
    {
        VAR14->VAR38 = FUN12(FUN12(VAR9->VAR39[0], VAR9->VAR39[1]), VAR9->VAR39[2]);
        VAR14->VAR40 = 0;
        VAR14->VAR41 = VAR9->VAR41;
        memset(VAR14->VAR41, VAR14->VAR38, (VAR9->VAR42 + 15) / 16);
        if (VAR2->VAR43 & VAR44)
            FUN6(VAR2, VAR28, "", VAR14->VAR38);
        VAR14->VAR38 *= VAR45;
    }
    return VAR12 - VAR6;
}