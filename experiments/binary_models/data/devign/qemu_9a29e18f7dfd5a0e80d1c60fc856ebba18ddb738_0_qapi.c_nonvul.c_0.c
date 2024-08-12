void FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR5 **VAR6)
{
    int64_t VAR7;
    const char *VAR8;
    BlockDriverInfo VAR9;
    int VAR10;
    VAR5 *VAR11 = NULL;
    VAR3 *VAR12;
    VAR7 = FUN2(VAR2);
    if (VAR7 < 0)
    {
        FUN3(VAR6, -VAR7, "", FUN4(VAR2));
        return;
    }
    VAR12 = FUN5(VAR3, 1);
    VAR12->VAR13 = FUN6(VAR2->VAR13);
    VAR12->VAR14 = FUN6(FUN7(VAR2));
    VAR12->VAR15 = VAR7;
    VAR12->VAR16 = FUN8(VAR2);
    VAR12->VAR17 = VAR12->VAR16 >= 0;
    if (FUN9(VAR2))
    {
        VAR12->VAR18 = true;
        VAR12->VAR19 = true;
    }
    if (FUN10(VAR2, &VAR9) >= 0)
    {
        if (VAR9.VAR20 != 0)
        {
            VAR12->VAR20 = VAR9.VAR20;
            VAR12->VAR21 = true;
        }
        VAR12->VAR22 = VAR9.VAR23;
        VAR12->VAR24 = true;
    }
    VAR12->VAR25 = FUN11(VAR2);
    VAR12->VAR26 = VAR12->VAR25 != NULL;
    VAR8 = VAR2->VAR27;
    if (VAR8[0] != '')
    {
        char *VAR28 = FUN12(VAR29);
        VAR12->VAR8 = FUN6(VAR8);
        VAR12->VAR30 = true;
        FUN13(VAR2, VAR28, VAR29, &VAR11);
        if (VAR11)
        {
            FUN14(VAR6, VAR11);
            FUN15(VAR12);
            FUN16(VAR28);
            return;
        }
        if (strcmp(VAR8, VAR28) != 0)
        {
            VAR12->VAR31 = FUN6(VAR28);
            VAR12->VAR32 = true;
        }
        if (VAR2->VAR33[0])
        {
            VAR12->VAR34 = FUN6(VAR2->VAR33);
            VAR12->VAR35 = true;
        }
        FUN16(VAR28);
    }
    VAR10 = FUN17(VAR2, &VAR12->VAR36, &VAR11);
    switch (VAR10)
    {
    case 0:
        if (VAR12->VAR36)
        {
            VAR12->VAR37 = true;
        }
        break;
    case -VAR38:
    case -VAR39:
        FUN18(VAR11);
        break;
    default:
        FUN14(VAR6, VAR11);
        FUN15(VAR12);
        return;
    }
    *VAR4 = VAR12;
}