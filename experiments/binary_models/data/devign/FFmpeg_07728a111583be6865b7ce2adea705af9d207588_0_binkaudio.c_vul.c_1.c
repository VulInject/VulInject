static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    VAR12 *VAR13 = &VAR8->VAR13;
    int VAR14, VAR15 = 0;
    if (!FUN2(VAR13))
    {
        VAR16 *VAR17;
        if (!VAR6->VAR18)
        {
            *VAR4 = 0;
            return 0;
        }
        if (VAR6->VAR18 < 4)
        {
            FUN3(VAR2, VAR19, "");
            return VAR20;
        }
        VAR17 = FUN4(VAR8->VAR21, VAR6->VAR18 + VAR22);
        if (!VAR17)
            return FUN5(VAR23);
        VAR8->VAR21 = VAR17;
        memcpy(VAR8->VAR21, VAR6->VAR3, VAR6->VAR18);
        if ((VAR14 = FUN6(VAR13, VAR8->VAR21, VAR6->VAR18)) < 0)
            return VAR14;
        VAR15 = VAR6->VAR18;
        FUN7(VAR13, 32);
    }
    VAR11->VAR24 = VAR8->VAR25;
    if ((VAR14 = FUN8(VAR2, VAR11, 0)) < 0)
        return VAR14;
    if (FUN9(VAR8, (float **)VAR11->VAR26, VAR2->VAR27->VAR28 == VAR29))
    {
        FUN3(VAR2, VAR19, "");
        return VAR20;
    }
    FUN10(VAR13);
    VAR11->VAR24 = VAR8->VAR30 / VAR2->VAR31;
    *VAR4 = 1;
    return VAR15;