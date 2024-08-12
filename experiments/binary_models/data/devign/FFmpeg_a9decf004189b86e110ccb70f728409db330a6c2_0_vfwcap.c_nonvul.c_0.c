static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    int VAR12;
    int VAR13;
    VAR14 *VAR15;
    CAPTUREPARMS VAR16;
    DWORD VAR17;
    WORD VAR18;
    int VAR19;
    int VAR20;
    int VAR21;
    if (!VAR4->VAR22.VAR23)
    {
        FUN2(VAR2, VAR24, "");
        return VAR25;
    }
    VAR6->VAR2 = VAR2;
    VAR6->VAR26 = FUN3(NULL, 0, 0, 0, 0, 0, VAR27, 0);
    if (!VAR6->VAR26)
    {
        FUN2(VAR2, VAR24, "");
        return VAR25;
    }
    VAR12 = FUN4(VAR2->VAR28);
    VAR21 = SendMessage(VAR6->VAR26, VAR29, VAR12, 0);
    if (!VAR21)
    {
        FUN2(VAR2, VAR24, "");
        FUN5(VAR6->VAR26);
        return FUN6(VAR30);
    }
    SendMessage(VAR6->VAR26, VAR31, 0, 0);
    SendMessage(VAR6->VAR26, VAR32, 0, 0);
    VAR21 = SendMessage(VAR6->VAR26, VAR33, 0, (VAR34)VAR35);
    if (!VAR21)
    {
        FUN2(VAR2, VAR24, "");
        goto VAR36;
    }
    FUN7(VAR6->VAR26, VAR37, (VAR38)VAR6);
    VAR11 = FUN8(VAR2, 0);
    if (!VAR11)
    {
        FUN9(VAR2);
        return VAR39;
    }
    VAR13 = SendMessage(VAR6->VAR26, VAR40, 0, 0);
    if (!VAR13)
        goto VAR36;
    VAR15 = FUN10(VAR13);
    if (!VAR15)
    {
        FUN9(VAR2);
        return VAR39;
    }
    VAR21 = SendMessage(VAR6->VAR26, VAR40, VAR13, (VAR34)VAR15);
    if (!VAR21)
        goto VAR41;
    FUN11(VAR2, &VAR15->VAR42);
    VAR19 = VAR4->VAR19 ? VAR4->VAR19 : VAR15->VAR42.VAR43;
    VAR20 = VAR4->VAR20 ? VAR4->VAR20 : VAR15->VAR42.VAR44;
    VAR15->VAR42.VAR43 = VAR19;
    VAR15->VAR42.VAR44 = VAR20;
    if (0)
    {
        VAR15->VAR42.VAR43 = 320;
        VAR15->VAR42.VAR44 = 240;
        VAR15->VAR42.VAR45 = 1;
        VAR15->VAR42.VAR18 = 12;
        VAR15->VAR42.VAR17 = FUN12('', '', '', '');
        VAR15->VAR42.VAR46 = 115200;
        FUN11(VAR2, &VAR15->VAR42);
    }
    VAR21 = SendMessage(VAR6->VAR26, VAR47, VAR13, (VAR34)VAR15);
    if (!VAR21)
    {
        FUN2(VAR2, VAR24, "");
        goto VAR41;
    }
    VAR17 = VAR15->VAR42.VAR17;
    VAR18 = VAR15->VAR42.VAR18;
    FUN13(VAR15);
    VAR21 = SendMessage(VAR6->VAR26, VAR48, sizeof(VAR16), (VAR34)&VAR16);
    if (!VAR21)
        goto VAR36;
    FUN14(VAR2, &VAR16);
    VAR16.VAR49 = 1;
    VAR16.VAR50 = (VAR4->VAR22.VAR51 * 1000000) / VAR4->VAR22.VAR23;
    VAR16.VAR52 = 0;
    VAR16.VAR53 = 0;
    VAR16.VAR54 = 0;
    VAR16.VAR55 = 0;
    VAR21 = SendMessage(VAR6->VAR26, VAR56, sizeof(VAR16), (VAR34)&VAR16);
    if (!VAR21)
        goto VAR36;
    VAR9 = VAR11->VAR9;
    VAR9->VAR22 = VAR4->VAR22;
    VAR9->VAR57 = VAR58;
    VAR9->VAR19 = VAR19;
    VAR9->VAR20 = VAR20;
    VAR9->VAR59 = FUN15(VAR17, VAR18);
    if (VAR9->VAR59 == VAR60)
    {
        VAR9->VAR61 = FUN16(VAR17);
        if (VAR9->VAR61 == VAR62)
        {
            FUN2(VAR2, VAR24, ""
                                    "");
            FUN9(VAR2);
            return VAR63;
        }
        VAR9->VAR64 = VAR18;
    }
    else
    {
        VAR9->VAR61 = VAR65;
        if (VAR17 == VAR66)
            VAR9->VAR64 = VAR18;
    }
    FUN17(VAR11, 32, 1, 1000);
    VAR6->mutex = FUN18(NULL, 0, NULL);
    if (!VAR6->mutex)
    {
        FUN2(VAR2, VAR24, "");
        goto VAR36;
    }
    VAR6->VAR67 = FUN19(NULL, 1, 0, NULL);
    if (!VAR6->VAR67)
    {
        FUN2(VAR2, VAR24, "");
        goto VAR36;
    }
    VAR21 = SendMessage(VAR6->VAR26, VAR68, 0, 0);
    if (!VAR21)
    {
        FUN2(VAR2, VAR24, "");
        goto VAR36;
    }
    return 0;
VAR41:
    FUN13(VAR15);
VAR36:
    FUN9(VAR2);
    return VAR25;
}