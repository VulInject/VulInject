static void FUN1(VAR1 *VAR2, ReplicationMode VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10;
    VAR6 *VAR11;
    int64_t VAR12, VAR13, VAR14;
    VAR15 *VAR16;
    VAR4 *VAR17 = NULL;
    VAR16 = FUN2(VAR7);
    FUN3(VAR16);
    VAR10 = VAR7->VAR8;
    if (VAR10->VAR18 != VAR19)
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
    case VAR20:
        break;
    case VAR21:
        VAR10->VAR22 = VAR7->VAR23;
        if (!VAR10->VAR22 || !VAR10->VAR22->VAR7 || !VAR10->VAR22->VAR7->VAR24)
        {
            FUN4(VAR5, "");
            FUN5(VAR16);
            return;
        }
        VAR10->VAR25 = VAR10->VAR22->VAR7->VAR24;
        if (!VAR10->VAR25->VAR7 || !VAR10->VAR25->VAR7->VAR24)
        {
            FUN4(VAR5, "");
            FUN5(VAR16);
            return;
        }
        VAR10->VAR26 = VAR10->VAR25->VAR7->VAR24;
        if (!VAR10->VAR26->VAR7 || !FUN6(VAR10->VAR26->VAR7))
        {
            FUN4(VAR5, "");
            FUN5(VAR16);
            return;
        }
        VAR12 = FUN7(VAR10->VAR22->VAR7);
        VAR13 = FUN7(VAR10->VAR25->VAR7);
        VAR14 = FUN7(VAR10->VAR26->VAR7);
        if (VAR12 < 0 || VAR13 < 0 || VAR14 < 0 || VAR12 != VAR13 || VAR13 != VAR14)
        {
            FUN4(VAR5, ""
                             "");
            FUN5(VAR16);
            return;
        }
        if (!VAR10->VAR22->VAR7->VAR27->VAR28 || !VAR10->VAR25->VAR7->VAR27->VAR28)
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
        FUN4(&VAR10->VAR29, "");
        VAR11 = FUN10(VAR10->VAR30, VAR10->VAR30, NULL);
        if (!VAR11 || !FUN11(VAR11) || !FUN12(VAR11, VAR7))
        {
            FUN4(VAR5, "");
            FUN8(VAR7, false, NULL);
            FUN5(VAR16);
            return;
        }
        FUN13(VAR11, VAR10->VAR29);
        FUN14(VAR11, VAR31, VAR10->VAR29);
        FUN15(NULL, VAR10->VAR26->VAR7, VAR10->VAR25->VAR7, 0, VAR32, NULL, false, VAR33, VAR33, VAR34, VAR35, VAR7, NULL, &VAR17);
        if (VAR17)
        {
            FUN9(VAR5, VAR17);
            FUN16(VAR7);
            FUN5(VAR16);
            return;
        }
        break;
    default:
        FUN5(VAR16);
        FUN17();
    }
    VAR10->VAR18 = VAR36;
    if (VAR10->VAR3 == VAR21)
    {
        FUN18(VAR10, VAR5);
    }
    VAR10->VAR37 = 0;
    FUN5(VAR16);
}