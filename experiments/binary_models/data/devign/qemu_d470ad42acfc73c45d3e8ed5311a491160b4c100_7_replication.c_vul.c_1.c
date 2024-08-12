static void FUN1(VAR1 *VAR2, ReplicationMode VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10;
    VAR6 *VAR11;
    int64_t VAR12, VAR13, VAR14;
    VAR15 *VAR16;
    VAR4 *VAR17 = NULL;
    VAR18 *VAR19;
    VAR16 = FUN2(VAR7);
    FUN3(VAR16);
    VAR10 = VAR7->VAR8;
    if (VAR10->VAR20 != VAR21)
    {
        FUN4(VAR5, "");
        FUN5(VAR16);
        return;
    }
    if (VAR10->VAR3 != VAR3)
    {
        FUN4(VAR5, ""
                         "",
                   VAR10->VAR3, VAR3);
        FUN5(VAR16);
        return;
    }
    switch (VAR10->VAR3)
    {
    case VAR22:
        break;
    case VAR23:
        VAR10->VAR24 = VAR7->VAR25;
        if (!VAR10->VAR24 || !VAR10->VAR24->VAR7 || !VAR10->VAR24->VAR7->VAR26)
        {
            FUN4(VAR5, "");
            FUN5(VAR16);
            return;
        }
        VAR10->VAR27 = VAR10->VAR24->VAR7->VAR26;
        if (!VAR10->VAR27->VAR7 || !VAR10->VAR27->VAR7->VAR26)
        {
            FUN4(VAR5, "");
            FUN5(VAR16);
            return;
        }
        VAR10->VAR28 = VAR10->VAR27->VAR7->VAR26;
        if (!VAR10->VAR28->VAR7 || !FUN6(VAR10->VAR28->VAR7))
        {
            FUN4(VAR5, "");
            FUN5(VAR16);
            return;
        }
        VAR12 = FUN7(VAR10->VAR24->VAR7);
        VAR13 = FUN7(VAR10->VAR27->VAR7);
        VAR14 = FUN7(VAR10->VAR28->VAR7);
        if (VAR12 < 0 || VAR13 < 0 || VAR14 < 0 || VAR12 != VAR13 || VAR13 != VAR14)
        {
            FUN4(VAR5, ""
                             "");
            FUN5(VAR16);
            return;
        }
        if (!VAR10->VAR24->VAR7->VAR29->VAR30 || !VAR10->VAR27->VAR7->VAR29->VAR30)
        {
            FUN4(VAR5, "");
            FUN5(VAR16);
            return;
        }
        FUN8(VAR7, true, &VAR17);
        if (VAR17)
        {
            FUN9(VAR5, VAR17);
            FUN5(VAR16);
            return;
        }
        FUN4(&VAR10->VAR31, "");
        VAR11 = FUN10(VAR10->VAR32, VAR10->VAR32, NULL);
        if (!VAR11 || !FUN11(VAR11) || !FUN12(VAR11, VAR7))
        {
            FUN4(VAR5, "");
            FUN8(VAR7, false, NULL);
            FUN5(VAR16);
            return;
        }
        FUN13(VAR11, VAR10->VAR31);
        FUN14(VAR11, VAR33, VAR10->VAR31);
        VAR19 = FUN15(NULL, VAR10->VAR28->VAR7, VAR10->VAR27->VAR7, 0, VAR34, NULL, false, VAR35, VAR35, VAR36, VAR37, VAR7, NULL, &VAR17);
        if (VAR17)
        {
            FUN9(VAR5, VAR17);
            FUN16(VAR7);
            FUN5(VAR16);
            return;
        }
        FUN17(VAR19);
        break;
    default:
        FUN5(VAR16);
        FUN18();
    }
    VAR10->VAR20 = VAR38;
    if (VAR10->VAR3 == VAR23)
    {
        FUN19(VAR10, VAR5);
    }
    VAR10->VAR39 = 0;
    FUN5(VAR16);