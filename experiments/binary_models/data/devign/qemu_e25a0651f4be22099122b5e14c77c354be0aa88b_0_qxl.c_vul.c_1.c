static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5.VAR4;
    uint32_t VAR6;
    uint32_t VAR7;
    VAR2->VAR8 = VAR9;
    VAR2->VAR10 = 1;
    VAR2->VAR11 = VAR12;
    FUN2(&VAR2->VAR13);
    FUN2(&VAR2->VAR14);
    VAR2->VAR15 = VAR16;
    VAR2->VAR17 = 0;
    switch (VAR2->VAR18)
    {
    case 1:
        VAR6 = VAR19;
        VAR7 = 8;
        break;
    case 2:
        VAR6 = VAR20;
        VAR7 = 16;
        break;
    case 3:
        VAR6 = VAR21;
        VAR7 = 32;
        break;
        FUN3(VAR22) case 4 : VAR6 = VAR23;
        VAR7 = FUN4(VAR24 * 2 - 1);
        break;
    default:
        FUN5("", VAR2->VAR18, VAR25);
        return -1;
    }
    FUN6(&VAR4[VAR26], VAR6);
    FUN6(&VAR4[VAR27], 1);
    VAR2->VAR28 = FUN7();
    FUN8(&VAR2->VAR29, "", VAR2->VAR28);
    FUN9(&VAR2->VAR29, &VAR2->VAR5.VAR30);
    FUN10(VAR2);
    FUN11(VAR2);
    VAR2->VAR31.VAR32 = FUN12(VAR33, VAR2->VAR34.VAR35);
    FUN8(&VAR2->VAR36, "", VAR2->VAR37);
    FUN9(&VAR2->VAR36, &VAR2->VAR5.VAR30);
    FUN13(&VAR2->VAR38, "", &VAR2->VAR36, 0, VAR2->VAR39);
    FUN14(&VAR2->VAR40, &VAR41, VAR2, "", VAR7);
    if (VAR2->VAR42 == 0)
    {
        FUN15(&VAR2->VAR43);
    }
    FUN16(&VAR2->VAR40);
    FUN17(&VAR2->VAR5, VAR44, VAR45, &VAR2->VAR40);
    FUN17(&VAR2->VAR5, VAR46, VAR47, &VAR2->VAR29);
    FUN17(&VAR2->VAR5, VAR48, VAR47, &VAR2->VAR43.VAR49);
    FUN17(&VAR2->VAR5, VAR50, VAR47, &VAR2->VAR38);
    if (VAR2->VAR39 < VAR2->VAR37)
    {
        FUN17(&VAR2->VAR5, VAR51, VAR47 | VAR52 | VAR53, &VAR2->VAR36);
    }
    FUN18(VAR2, 1, "", VAR2->VAR42 == 0 ? "" : "", VAR2->VAR43.VAR37 / (1024 * 1024));
    FUN18(VAR2, 1, "", VAR2->VAR39 / (1024 * 1024));
    FUN18(VAR2, 1, "", VAR2->VAR37 / (1024 * 1024), VAR2->VAR39 < VAR2->VAR37 ? "" : "");
    VAR2->VAR34.VAR2.VAR54.VAR55 = &VAR56.VAR54;
    VAR2->VAR34.VAR2.VAR42 = VAR2->VAR42;
    FUN19(&VAR2->VAR34.VAR2.VAR54);
    FUN20(VAR57, VAR2);
    FUN21(VAR2);
    FUN22(VAR2);
    VAR2->VAR58 = FUN23(VAR59, VAR2);
    return 0;
}