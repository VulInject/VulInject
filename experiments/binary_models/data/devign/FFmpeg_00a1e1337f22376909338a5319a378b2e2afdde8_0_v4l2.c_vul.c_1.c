static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6 = VAR2->VAR7;
    struct v4l2_buffer VAR8 = {.VAR9 = VAR10, .VAR11 = VAR12};
    int VAR13;
    VAR4->VAR14 = 0;
    while ((VAR13 = FUN2(VAR6->VAR15, VAR16, &VAR8)) < 0 && (VAR17 == VAR18))
        ;
    if (VAR13 < 0)
    {
        if (VAR17 == VAR19)
            return FUN3(VAR19);
        VAR13 = FUN3(VAR17);
        FUN4(VAR2, VAR20, "", FUN5(VAR13));
        return VAR13;
    }
    if (VAR8.VAR21 >= VAR6->VAR22)
    {
        FUN4(VAR2, VAR20, "");
        return FUN3(VAR23);
    }
    FUN6(&VAR6->VAR24, -1);
    FUN7(FUN8(&VAR6->VAR24) >= 1);
    if (VAR8.VAR25 & VAR26)
    {
        FUN4(VAR2, VAR27, "", VAR8.VAR28);
        VAR8.VAR28 = 0;
    }
    else
    {
        if (VAR2->VAR29 == VAR30)
            VAR6->VAR31 = VAR8.VAR28;
        if (VAR6->VAR31 > 0 && VAR8.VAR28 != VAR6->VAR31)
        {
            FUN4(VAR2, VAR20, "", VAR8.VAR28, VAR6->VAR31, VAR8.VAR25);
            FUN9(VAR6, &VAR8);
            return VAR32;
        }
    }
    if (FUN8(&VAR6->VAR24) == FUN10(VAR6->VAR22 / 8, 1))
    {
        VAR13 = FUN11(VAR4, VAR8.VAR28);
        if (VAR13 < 0)
        {
            FUN4(VAR2, VAR20, "");
            FUN9(VAR6, &VAR8);
            return VAR13;
        }
        memcpy(VAR4->VAR33, VAR6->VAR34[VAR8.VAR21], VAR8.VAR28);
        VAR13 = FUN9(VAR6, &VAR8);
        if (VAR13)
        {
            FUN12(VAR4);
            return VAR13;
        }
    }
    else
    {
        struct VAR35 *VAR36;
        VAR4->VAR33 = VAR6->VAR34[VAR8.VAR21];
        VAR4->VAR14 = VAR8.VAR28;
        VAR36 = FUN13(sizeof(struct VAR35));
        if (!VAR36)
        {
            FUN4(VAR2, VAR20, "");
            FUN9(VAR6, &VAR8);
            return FUN3(VAR37);
        }
        VAR36->VAR21 = VAR8.VAR21;
        VAR36->VAR6 = VAR6;
        VAR4->VAR8 = FUN14(VAR4->VAR33, VAR4->VAR14, VAR38, VAR36, 0);
        if (!VAR4->VAR8)
        {
            FUN4(VAR2, VAR20, "");
            FUN9(VAR6, &VAR8);
            FUN15(&VAR36);
            return FUN3(VAR37);
        }
    }
    VAR4->VAR39 = VAR8.VAR40.VAR41 * FUN16(1000000) + VAR8.VAR40.VAR42;
    FUN17(VAR2, &VAR4->VAR39);
    return VAR4->VAR14;
}