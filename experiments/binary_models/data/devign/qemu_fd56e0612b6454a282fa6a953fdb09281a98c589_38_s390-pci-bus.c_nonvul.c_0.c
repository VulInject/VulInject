static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = NULL;
    VAR9 *VAR10;
    int32_t VAR11;
    VAR12 *VAR13 = NULL;
    VAR14 *VAR15 = FUN2();
    if (FUN3(FUN4(VAR4), VAR16))
    {
        FUN5(VAR6, "");
        return;
    }
    else if (FUN3(FUN4(VAR4), VAR17))
    {
        VAR8 = FUN6(VAR4);
        FUN7(VAR13, &VAR15->VAR18, VAR19)
        {
            if (VAR13->VAR20 == VAR8)
            {
                break;
            }
        }
        assert(VAR13 != NULL);
    }
    else if (FUN3(FUN4(VAR4), VAR21))
    {
        VAR13 = FUN8(VAR4);
        VAR8 = VAR13->VAR20;
    }
    switch (VAR13->VAR22)
    {
    case VAR23:
        goto VAR24;
    case VAR25:
        break;
    default:
        FUN9(VAR26, VAR13->VAR27, VAR13->VAR28);
        VAR13->VAR29 = FUN10(VAR30, VAR31, VAR13);
        FUN11(VAR13->VAR29, FUN12(VAR30) + VAR32);
        return;
    }
    if (VAR13->VAR29 && FUN13(VAR13->VAR29))
    {
        FUN14(VAR13->VAR29);
        FUN15(VAR13->VAR29);
        VAR13->VAR29 = NULL;
    }
    FUN9(VAR33, VAR13->VAR27, VAR13->VAR28);
    VAR10 = FUN16(VAR8);
    VAR11 = VAR8->VAR11;
    FUN17(FUN4(VAR8));
    FUN18(VAR13);
    FUN19(VAR15, VAR10, VAR11);
    VAR13->VAR20 = NULL;
    VAR13->VAR22 = VAR23;
VAR24:
    VAR13->VAR28 = 0;
    FUN20(&VAR15->VAR18, VAR13, VAR19);
    FUN21(VAR15->VAR34, &VAR13->VAR35);
    FUN17(FUN4(VAR13));
}