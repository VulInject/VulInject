static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8)
{
    Pulse VAR9;
    VAR10 *VAR11 = &VAR4->VAR11;
    VAR12 *VAR13 = &VAR4->VAR13;
    VAR14 *VAR15 = VAR4->VAR16;
    int VAR17, VAR18, VAR19, VAR20 = 0;
    int VAR21;
    VAR18 = VAR2->VAR22[1].VAR23.VAR24 == VAR25;
    VAR19 = VAR2->VAR22[1].VAR23.VAR24 == VAR26 || VAR2->VAR22[1].VAR23.VAR24 == VAR27 || VAR2->VAR22[1].VAR23.VAR24 == VAR28 || VAR2->VAR22[1].VAR23.VAR24 == VAR25;
    VAR9.VAR29 = 0;
    VAR17 = FUN2(VAR6, 8);
    if (!VAR7 && !VAR8)
    {
        if (FUN3(VAR2, VAR13, VAR6) < 0)
            return VAR30;
    }
    if ((VAR21 = FUN4(VAR2, VAR4->VAR31, VAR4->VAR32, VAR6, VAR13)) < 0)
        return VAR21;
    if ((VAR21 = FUN5(VAR2, VAR4->VAR33, VAR6, VAR17, VAR13, VAR4->VAR31, VAR4->VAR32)) < 0)
        return VAR21;
    VAR20 = 0;
    if (!VAR8)
    {
        if (!VAR18 && (VAR20 = FUN6(VAR6)))
        {
            if (VAR13->VAR34[0] == VAR35)
            {
                FUN7(VAR2->VAR36, VAR37, "");
                return VAR30;
            }
            if (FUN8(&VAR9, VAR6, VAR13->VAR38, VAR13->VAR39))
            {
                FUN7(VAR2->VAR36, VAR37, "");
                return VAR30;
            }
        }
        VAR11->VAR40 = FUN6(VAR6);
        if (VAR11->VAR40 && !VAR19)
            if (FUN9(VAR2, VAR11, VAR6, VAR13) < 0)
                return VAR30;
        if (!VAR18 && FUN6(VAR6))
        {
            FUN10(VAR2->VAR36, "");
            return VAR41;
        }
        if (VAR11->VAR40 && VAR19)
            if (FUN9(VAR2, VAR11, VAR6, VAR13) < 0)
                return VAR30;
    }
    if (FUN11(VAR2, VAR15, VAR6, VAR4->VAR33, VAR20, &VAR9, VAR13, VAR4->VAR31) < 0)
        return VAR30;
    if (VAR2->VAR22[1].VAR23.VAR24 == VAR42 && !VAR7)
        FUN12(VAR2, VAR4);
    return 0;
}