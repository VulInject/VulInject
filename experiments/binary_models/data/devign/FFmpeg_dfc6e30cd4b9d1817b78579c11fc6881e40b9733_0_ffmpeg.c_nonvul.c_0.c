static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = VAR2->VAR6;
    VAR5 *VAR7 = NULL;
    VAR8 *VAR9 = VAR10[VAR2->VAR11]->VAR12;
    int VAR13, VAR14;
    FUN3(VAR10[VAR2->VAR11], VAR2);
    if (VAR4)
    {
        VAR2->VAR15->VAR16 = VAR4->VAR15->VAR16;
        VAR7 = VAR4->VAR7;
        VAR6->VAR17 = VAR7->VAR17;
    }
    else
    {
        for (VAR13 = 0; VAR13 < VAR9->VAR18; VAR13++)
        {
            VAR19 *VAR15 = VAR9->VAR20[VAR13];
            if (VAR15 != VAR2->VAR15 && VAR15->VAR21->VAR22 == VAR2->VAR15->VAR21->VAR22)
                break;
        }
        if (VAR13 == VAR9->VAR18)
            if (VAR2->VAR15->VAR21->VAR22 == VAR23 || VAR2->VAR15->VAR21->VAR22 == VAR24)
                VAR2->VAR15->VAR16 = VAR25;
    }
    if ((VAR6->VAR22 == VAR24 || VAR6->VAR22 == VAR23) && FUN4(VAR2->VAR26->VAR27))
    {
        VAR28 *VAR29 = VAR2->VAR26->VAR27;
        if (FUN5(VAR29))
        {
            FUN6(NULL, VAR30, "");
            FUN7(1);
        }
    }
    if (VAR6->VAR22 == VAR24)
    {
        if (!VAR2->VAR31.VAR32)
            VAR2->VAR31 = FUN8(VAR2->VAR26->VAR26);
        if (VAR4 && !VAR2->VAR31.VAR32)
            VAR2->VAR31 = VAR4->VAR33;
        if (VAR4 && !VAR2->VAR31.VAR32)
            VAR2->VAR31 = VAR4->VAR15->VAR34;
        if (VAR4 && !VAR2->VAR31.VAR32)
        {
            VAR2->VAR31 = (VAR35){25, 1};
            FUN6(NULL, VAR36, ""
                                         ""
                                         ""
                                         "",
                   VAR2->VAR11, VAR2->VAR37);
        }
        if (VAR2->VAR38->VAR39 && !VAR2->VAR40)
        {
            int VAR41 = FUN9(VAR2->VAR31, VAR2->VAR38->VAR39);
            VAR2->VAR31 = VAR2->VAR38->VAR39[VAR41];
        }
        if (VAR6->VAR42 == VAR43)
        {
            FUN10(&VAR2->VAR31.VAR32, &VAR2->VAR31.VAR44, VAR2->VAR31.VAR32, VAR2->VAR31.VAR44, 65535);
        }
    }
    switch (VAR6->VAR22)
    {
    case VAR23:
        VAR6->VAR45 = FUN11(VAR2->VAR26->VAR26);
        if (VAR7)
            VAR6->VAR46 = FUN12(VAR7->VAR46, FUN13(VAR6->VAR45) << 3);
        VAR6->VAR47 = FUN14(VAR2->VAR26->VAR26);
        VAR6->VAR48 = FUN15(VAR2->VAR26->VAR26);
        VAR6->VAR49 = FUN16(VAR2->VAR26->VAR26);
        VAR6->VAR50 = (VAR35){1, VAR6->VAR47};
        break;
    case VAR24:
        VAR6->VAR50 = FUN17(VAR2->VAR31);
        if (!(VAR6->VAR50.VAR32 && VAR6->VAR50.VAR44))
            VAR6->VAR50 = FUN18(VAR2->VAR26->VAR26);
        if (FUN19(VAR6->VAR50) < 0.001 && VAR51 != VAR52 && (VAR51 == VAR53 || VAR51 == VAR54 || (VAR51 == VAR55 && !(VAR9->VAR56->VAR57 & VAR58))))
        {
            FUN6(VAR9, VAR36, ""
                                       "");
        }
        for (VAR13 = 0; VAR13 < VAR2->VAR59; VAR13++)
            VAR2->VAR60[VAR13] = FUN20(VAR2->VAR60[VAR13], VAR61, VAR6->VAR50);
        VAR6->VAR62 = FUN21(VAR2->VAR26->VAR26);
        VAR6->VAR63 = FUN22(VAR2->VAR26->VAR26);
        VAR6->VAR64 = VAR2->VAR15->VAR64 = VAR2->VAR65.VAR32 ? FUN23(VAR2->VAR65, (VAR35){VAR6->VAR63, VAR6->VAR62}) : FUN24(VAR2->VAR26->VAR26);
        if (!FUN25(VAR2->VAR38->VAR66, "", 7) && VAR6->VAR67 == VAR68 && FUN11(VAR2->VAR26->VAR26) != VAR69)
            FUN6(NULL, VAR36, ""
                                         "",
                   FUN26(FUN11(VAR2->VAR26->VAR26)));
        if (!FUN25(VAR2->VAR38->VAR66, "", 10) && VAR6->VAR67 == VAR68 && FUN11(VAR2->VAR26->VAR26) != VAR69)
            FUN6(NULL, VAR36, ""
                                         "",
                   FUN26(FUN11(VAR2->VAR26->VAR26)));
        VAR6->VAR67 = FUN11(VAR2->VAR26->VAR26);
        if (VAR7)
            VAR6->VAR46 = FUN12(VAR7->VAR46, FUN27(VAR6->VAR67)->VAR70[0].VAR71);
        VAR2->VAR15->VAR72 = VAR2->VAR31;
        if (!VAR7 || VAR6->VAR62 != VAR7->VAR62 || VAR6->VAR63 != VAR7->VAR63 || VAR6->VAR67 != VAR7->VAR67)
        {
            VAR6->VAR46 = VAR73;
        }
        if (VAR2->VAR74)
        {
            if (!FUN25(VAR2->VAR74, "", 5))
            {
                VAR14 = FUN28(&VAR2->VAR75, VAR2->VAR74 + 5, VAR76, NULL, NULL, NULL, NULL, 0, NULL);
                if (VAR14 < 0)
                {
                    FUN6(NULL, VAR77, "", VAR2->VAR74 + 5);
                    return VAR14;
                }
                VAR2->VAR78[VAR79] = 0;
                VAR2->VAR78[VAR80] = 0;
                VAR2->VAR78[VAR81] = VAR82;
                VAR2->VAR78[VAR83] = VAR82;
            }
            else if (FUN25(VAR2->VAR74, "", 6))
            {
                FUN29(VAR2->VAR74, VAR2, VAR2->VAR6);
            }
        }
        break;
    case VAR84:
        VAR6->VAR50 = (VAR35){1, 1000};
        if (!VAR6->VAR62)
        {
            VAR6->VAR62 = VAR85[VAR2->VAR86]->VAR15->VAR21->VAR62;
            VAR6->VAR63 = VAR85[VAR2->VAR86]->VAR15->VAR21->VAR63;
        }
        break;
    case VAR87:
        break;
    default:
        FUN30();
        break;
    }
    return 0;
}