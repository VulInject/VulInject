static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6 = VAR2->VAR7;
    struct v4l2_buffer VAR8 = {.VAR9 = VAR10, .VAR11 = VAR12};
    struct pollfd VAR13 = {.VAR14 = VAR6->VAR14, .VAR15 = VAR16};
    int VAR17;
    VAR17 = FUN2(&VAR13, 1, VAR6->VAR18);
    if (VAR17 < 0)
        return FUN3(VAR19);
    if (!(VAR13.VAR20 & (VAR16 | VAR21 | VAR22)))
        return FUN3(VAR23);
    while ((VAR17 = FUN4(VAR6->VAR14, VAR24, &VAR8)) < 0 && (VAR19 == VAR25))
        ;
    if (VAR17 < 0)
    {
        if (VAR19 == VAR23)
        {
            VAR4->VAR26 = 0;
            return FUN3(VAR23);
        }
        FUN5(VAR2, VAR27, "", strerror(VAR19));
        return FUN3(VAR19);
    }
    if (VAR8.VAR28 >= VAR6->VAR29)
    {
        FUN5(VAR2, VAR27, "");
        return FUN3(VAR30);
    }
    FUN6(&VAR6->VAR31, -1);
    FUN7(FUN8(&VAR6->VAR31) >= 1);
    if (VAR6->VAR32 > 0 && VAR8.VAR33 != VAR6->VAR32)
    {
        FUN5(VAR2, VAR27, "", VAR8.VAR33, VAR6->VAR32);
        return VAR34;
    }
    if (FUN8(&VAR6->VAR31) == FUN9(VAR6->VAR29 / 8, 1))
    {
        VAR17 = FUN10(VAR4, VAR8.VAR33);
        if (VAR17 < 0)
        {
            FUN5(VAR2, VAR27, "");
            return VAR17;
        }
        memcpy(VAR4->VAR35, VAR6->VAR36[VAR8.VAR28], VAR8.VAR33);
        VAR17 = FUN4(VAR6->VAR14, VAR37, &VAR8);
        if (VAR17 < 0)
        {
            FUN5(VAR2, VAR27, "");
            FUN11(VAR4);
            return FUN3(VAR19);
        }
        FUN6(&VAR6->VAR31, 1);
    }
    else
    {
        struct VAR38 *VAR39;
        VAR4->VAR35 = VAR6->VAR36[VAR8.VAR28];
        VAR4->VAR26 = VAR8.VAR33;
        FF_DISABLE_DEPRECATION_WARNINGS VAR4->VAR40 = VAR41;
        FF_ENABLE_DEPRECATION_WARNINGS VAR39 = FUN12(sizeof(struct VAR38));
        if (!VAR39)
        {
            FUN5(VAR2, VAR27, "");
            VAR17 = FUN4(VAR6->VAR14, VAR37, &VAR8);
            return FUN3(VAR42);
        }
        VAR39->VAR14 = VAR6->VAR14;
        VAR39->VAR28 = VAR8.VAR28;
        VAR39->VAR6 = VAR6;
        VAR4->VAR8 = FUN13(VAR4->VAR35, VAR4->VAR26, VAR43, VAR39, 0);
        if (!VAR4->VAR8)
        {
            FUN14(&VAR39);
            return FUN3(VAR42);
        }
    }
    VAR4->VAR44 = VAR8.VAR45.VAR46 * FUN15(1000000) + VAR8.VAR45.VAR47;
    return VAR6->VAR48[VAR8.VAR28];
}