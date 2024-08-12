static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    AVBPrint VAR9;
    char VAR10[128];
    const char *VAR11;
    int VAR12;
    FUN2(&VAR9, 1, VAR13);
    FUN3(VAR2, VAR14);
    VAR11 = FUN4(VAR6->VAR15->VAR16);
    if (VAR11)
        FUN5("", VAR11);
    else
        FUN6("", "");
    FUN7("", VAR6->VAR17);
    FUN7("", VAR4->VAR18);
    FUN8("", VAR4->VAR19);
    FUN9("", VAR4->VAR19, &VAR6->VAR20);
    FUN8("", VAR4->VAR21);
    FUN9("", VAR4->VAR21, &VAR6->VAR20);
    FUN8("", VAR4->VAR22);
    FUN9("", VAR4->VAR22, &VAR6->VAR20);
    FUN10("", VAR4->VAR23);
    FUN11("", VAR4->VAR23, &VAR6->VAR20);
    if (VAR4->VAR24 != -1)
        FUN12("", "" VAR25, VAR4->VAR24);
    else
        FUN6("", "");
    if (VAR4->VAR26 != -1)
        FUN13("", VAR4->VAR26, VAR27);
    else
        FUN6("", "");
    switch (VAR6->VAR15->VAR16)
    {
        AVRational VAR28;
    case VAR29:
        FUN7("", VAR4->VAR30);
        FUN7("", VAR4->VAR31);
        VAR11 = FUN14(VAR4->VAR32);
        if (VAR11)
            FUN5("", VAR11);
        else
            FUN6("", "");
        VAR28 = FUN15(VAR8, VAR6, VAR4);
        if (VAR28.VAR33)
        {
            FUN16("", VAR28, '');
        }
        else
        {
            FUN6("", "");
        }
        FUN12("", "", FUN17(VAR4->VAR34));
        FUN7("", VAR4->VAR35);
        FUN7("", VAR4->VAR36);
        FUN7("", VAR4->VAR37);
        FUN7("", VAR4->VAR38);
        FUN7("", VAR4->VAR39);
        if (VAR4->VAR40 != VAR41)
            FUN5("", FUN18(VAR4->VAR40));
        else
            FUN6("", FUN18(VAR4->VAR40));
        if (VAR4->VAR42 != VAR43)
            FUN5("", FUN19(VAR4->VAR42));
        else
            FUN6("", FUN19(VAR4->VAR42));
        if (VAR4->VAR44 != VAR45)
            FUN5("", FUN20(VAR4->VAR44));
        else
            FUN6("", FUN20(VAR4->VAR44));
        if (VAR4->VAR46 != VAR47)
            FUN5("", FUN21(VAR4->VAR46));
        else
            FUN6("", FUN21(VAR4->VAR46));
        if (VAR4->VAR48 != VAR49)
            FUN5("", FUN22(VAR4->VAR48));
        else
            FUN6("", FUN22(VAR4->VAR48));
        break;
    case VAR50:
        VAR11 = FUN23(VAR4->VAR32);
        if (VAR11)
            FUN5("", VAR11);
        else
            FUN6("", "");
        FUN7("", VAR4->VAR51);
        FUN7("", VAR4->VAR52);
        if (VAR4->VAR53)
        {
            FUN24(&VAR9);
            FUN25(&VAR9, VAR4->VAR52, VAR4->VAR53);
            FUN5("", VAR9.VAR54);
        }
        else
            FUN6("", "");
        break;
    }
    if (VAR55)
        FUN26(VAR2, VAR4->VAR56, VAR57);
    if (VAR58)
        FUN27(VAR2, VAR59, VAR60, VAR58);
    if (VAR4->VAR61)
    {
        FUN3(VAR2, VAR62);
        for (VAR12 = 0; VAR12 < VAR4->VAR61; VAR12++)
        {
            VAR63 *VAR64 = VAR4->VAR65[VAR12];
            const char *VAR66;
            FUN3(VAR2, VAR67);
            VAR66 = FUN28(VAR64->VAR68);
            FUN5("", VAR66 ? VAR66 : "");
            if (VAR64->VAR68 == VAR69 && VAR64->VAR70 >= 9 * 4)
            {
                FUN29(VAR2, "", VAR64->VAR71, 9, "", 3, 4, 1);
                FUN7("", FUN30((VAR72 *)VAR64->VAR71));
            }
            else if (VAR64->VAR68 == VAR73 && VAR64->VAR70 >= 8)
            {
                char VAR74[VAR75];
                FUN31(VAR74, *(VAR76 *)(VAR64->VAR71));
                FUN5("", VAR74);
            }
            else if (VAR64->VAR68 == VAR77)
            {
                VAR78 *VAR56 = (VAR78 *)VAR64->VAR71;
                if (VAR56->VAR79)
                {
                    FUN16("", VAR56->VAR80[0][0], '');
                    FUN16("", VAR56->VAR80[0][1], '');
                    FUN16("", VAR56->VAR80[1][0], '');
                    FUN16("", VAR56->VAR80[1][1], '');
                    FUN16("", VAR56->VAR80[2][0], '');
                    FUN16("", VAR56->VAR80[2][1], '');
                    FUN16("", VAR56->VAR81[0], '');
                    FUN16("", VAR56->VAR81[1], '');
                }
                if (VAR56->VAR82)
                {
                    FUN16("", VAR56->VAR83, '');
                    FUN16("", VAR56->VAR84, '');
                }
            }
            else if (VAR64->VAR68 == VAR85)
            {
                VAR86 *VAR56 = (VAR86 *)VAR64->VAR71;
                FUN7("", VAR56->VAR87);
                FUN7("", VAR56->VAR88);
            }
            else if (VAR64->VAR68 == VAR89)
            {
                VAR90 *VAR91 = FUN32(VAR64->VAR56, "", NULL, VAR92);
                if (VAR91)
                    FUN5(VAR91->VAR93, VAR91->VAR94);
                FUN7("", VAR64->VAR70);
            }
            FUN33(VAR2);
        }
        FUN33(VAR2);
    }
    FUN33(VAR2);
    FUN34(&VAR9, NULL);
    FUN35(VAR95);
}