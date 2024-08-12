static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6 = (VAR4->VAR7 == VAR8) ? VAR9 : VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    const char *VAR15, *VAR16;
    VdpStatus VAR17;
    int VAR18;
    VAR14 = FUN2(sizeof(*VAR14));
    if (!VAR14)
        return FUN3(VAR19);
    VAR4->VAR20 = VAR14;
    VAR4->VAR21 = VAR22;
    VAR4->VAR23 = VAR24;
    VAR4->VAR25 = VAR26;
    VAR14->VAR27 = FUN4();
    if (!VAR14->VAR27)
        goto VAR28;
    VAR14->VAR29 = FUN5(VAR4->VAR30);
    if (!VAR14->VAR29)
    {
        FUN6(NULL, VAR6, "", FUN7(VAR4->VAR30));
        goto VAR28;
    }
    VAR15 = FUN8(VAR14->VAR29);
    VAR17 = FUN9(VAR14->VAR29, FUN10(VAR14->VAR29), &VAR14->VAR31, &VAR14->VAR32);
    if (VAR17 != VAR33)
    {
        FUN6(NULL, VAR6, "", VAR15);
        goto VAR28;
    }
    do
    {
        void *VAR34;
        VAR17 = VAR14->FUN11(VAR14->VAR31, VAR35, &VAR34);
        if (VAR17 != VAR33)
        {
            FUN6(NULL, VAR6, "" #VAR35 "");
            goto VAR28;
        }
        VAR14->VAR36 = VAR34;
    } while (0) FUN12(VAR37, VAR38);
    FUN12(VAR39, VAR40);
    FUN12(VAR41, VAR42);
    if (VAR43 == 1)
    {
        FUN12(VAR44, VAR45);
        FUN12(VAR46, VAR47);
        FUN12(VAR48, VAR49);
    }
    FUN12(VAR50, VAR51);
    FUN12(VAR52, VAR53);
    FUN12(VAR54, VAR55);
    FUN12(VAR56, VAR57);
    FUN12(VAR58, VAR59);
    for (VAR18 = 0; VAR18 < FUN13(VAR60); VAR18++)
    {
        VdpBool VAR61;
        VAR17 = VAR14->FUN14(VAR14->VAR31, VAR62, VAR60[VAR18][0], &VAR61);
        if (VAR17 != VAR33)
        {
            FUN6(NULL, VAR6, "", VAR14->FUN15(VAR17));
            goto VAR28;
        }
        if (VAR61)
            break;
    }
    if (VAR18 == FUN13(VAR60))
    {
        FUN6(NULL, VAR6, "");
        return FUN3(VAR63);
    }
    VAR14->VAR64 = VAR60[VAR18][0];
    VAR14->VAR65 = VAR60[VAR18][1];
    if (VAR43 == 1)
    {
        VAR12 = FUN16();
        if (!VAR12)
            goto VAR28;
        VAR12->VAR66 = VAR14->VAR49;
        VAR2->VAR67 = VAR12;
    }
    else if (FUN17(VAR2, VAR14->VAR31, VAR14->VAR32, VAR68))
        goto VAR28;
    VAR14->FUN18(&VAR16);
    FUN6(NULL, VAR9, ""
                                 "",
           VAR16, VAR15, VAR4->VAR69, VAR4->VAR70->VAR71);
    return 0;
VAR28:
    FUN6(NULL, VAR6, "", VAR4->VAR69, VAR4->VAR70->VAR71);
    FUN19(VAR2);
    return FUN3(VAR63);
}