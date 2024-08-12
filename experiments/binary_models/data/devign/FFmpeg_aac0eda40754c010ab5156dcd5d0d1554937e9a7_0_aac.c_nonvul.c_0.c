static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8)
{
    Pulse VAR9;
    VAR10 *VAR11 = &VAR4->VAR11;
    VAR12 *VAR13 = &VAR4->VAR13;
    float *VAR14 = VAR4->VAR15;
    int VAR16, VAR17 = 0;
    VAR9.VAR18 = 0;
    VAR16 = FUN2(VAR6, 8);
    if (!VAR7 && !VAR8)
    {
        if (FUN3(VAR2, VAR13, VAR6, 0) < 0)
            return -1;
    }
    if (FUN4(VAR2, VAR4->VAR19, VAR4->VAR20, VAR6, VAR13) < 0)
        return -1;
    if (FUN5(VAR2, VAR4->VAR21, VAR6, VAR16, VAR13, VAR4->VAR19, VAR4->VAR20) < 0)
        return -1;
    VAR17 = 0;
    if (!VAR8)
    {
        if ((VAR17 = FUN6(VAR6)))
        {
            if (VAR13->VAR22[0] == VAR23)
            {
                FUN7(VAR2->VAR24, VAR25, "");
                return -1;
            }
            if (FUN8(&VAR9, VAR6, VAR13->VAR26, VAR13->VAR27))
            {
                FUN7(VAR2->VAR24, VAR25, "");
                return -1;
            }
        }
        if ((VAR11->VAR28 = FUN6(VAR6)) && FUN9(VAR2, VAR11, VAR6, VAR13))
            return -1;
        if (FUN6(VAR6))
        {
            FUN10(VAR2->VAR24, "", 1);
            return -1;
        }
    }
    if (FUN11(VAR2, VAR14, VAR6, VAR4->VAR21, VAR17, &VAR9, VAR13, VAR4->VAR19) < 0)
        return -1;
    return 0;
}