static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7.VAR6;
    uint32_t VAR8;
    uint32_t VAR9;
    VAR2->VAR10 = VAR11;
    VAR2->VAR12 = 1;
    VAR2->VAR13 = VAR14;
    FUN2(&VAR2->VAR15);
    FUN2(&VAR2->VAR16);
    VAR2->VAR17 = VAR18;
    VAR2->VAR19 = 0;
    switch (VAR2->VAR20)
    {
    case 1:
        VAR8 = VAR21;
        VAR9 = 8;
        break;
    case 2:
        VAR8 = VAR22;
        VAR9 = 16;
        break;
    case 3:
        VAR8 = VAR23;
        VAR9 = 32;
        break;
    case 4:
        VAR8 = VAR24;
        VAR9 = FUN3(VAR25);
        break;
    default:
        FUN4(VAR4, "", VAR2->VAR20, VAR26);
        return;
    }
    FUN5(&VAR6[VAR27], VAR8);
    FUN5(&VAR6[VAR28], 1);
    VAR2->VAR29 = FUN6();
    FUN7(&VAR2->VAR30, FUN8(VAR2), "", VAR2->VAR29, &VAR31);
    FUN9(&VAR2->VAR30, &VAR2->VAR7.VAR32);
    FUN10(VAR2);
    FUN11(VAR2);
    VAR2->VAR33.VAR34 = FUN12(VAR35, VAR2->VAR36.VAR37);
    FUN7(&VAR2->VAR38, FUN8(VAR2), "", VAR2->VAR39, &VAR31);
    FUN9(&VAR2->VAR38, &VAR2->VAR7.VAR32);
    FUN13(&VAR2->VAR40, FUN8(VAR2), "", &VAR2->VAR38, 0, VAR2->VAR41);
    FUN14(&VAR2->VAR42, FUN8(VAR2), &VAR43, VAR2, "", VAR9);
    if (VAR2->VAR44 == 0)
    {
        FUN15(&VAR2->VAR45);
    }
    FUN16(&VAR2->VAR42);
    FUN17(&VAR2->VAR7, VAR46, VAR47, &VAR2->VAR42);
    FUN17(&VAR2->VAR7, VAR48, VAR49, &VAR2->VAR30);
    FUN17(&VAR2->VAR7, VAR50, VAR49, &VAR2->VAR45.VAR51);
    FUN17(&VAR2->VAR7, VAR52, VAR49, &VAR2->VAR40);
    if (VAR2->VAR41 < VAR2->VAR39)
    {
        FUN17(&VAR2->VAR7, VAR53, VAR49 | VAR54 | VAR55, &VAR2->VAR38);
    }
    FUN18(VAR2, 1, "", VAR2->VAR44 == 0 ? "" : "", VAR2->VAR45.VAR39 / (1024 * 1024));
    FUN18(VAR2, 1, "", VAR2->VAR41 / (1024 * 1024));
    FUN18(VAR2, 1, "", VAR2->VAR39 / (1024 * 1024), VAR2->VAR41 < VAR2->VAR39 ? "" : "");
    VAR2->VAR36.VAR2.VAR56.VAR57 = &VAR58.VAR56;
    if (FUN19(&VAR2->VAR36.VAR2, VAR2->VAR45.VAR59) != 0)
    {
        FUN4(VAR4, "", VAR60, VAR61);
        return;
    }
    FUN20(VAR62, VAR2);
    VAR2->VAR63 = FUN21(VAR64, VAR2);
    FUN22(VAR2);
    VAR2->VAR65 = FUN21(VAR66, VAR2);
    VAR2->VAR36.VAR67 = FUN21(VAR68, &VAR2->VAR36);
}