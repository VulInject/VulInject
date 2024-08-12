static int FUN1(VAR1 *VAR2, void *VAR3)
{
    RDMAControlHeader VAR4 = {
        .VAR5 = sizeof(VAR6),
        .VAR7 = VAR8,
        .VAR9 = 0,
    };
    RDMAControlHeader VAR10 = {
        .VAR5 = 0,
        .VAR7 = VAR11,
        .VAR9 = 0,
    };
    RDMAControlHeader VAR12 = {.VAR7 = VAR13, .VAR9 = 1};
    VAR14 *VAR15 = FUN2(VAR3);
    VAR16 *VAR17 = VAR15->VAR17;
    VAR18 *VAR19 = &VAR17->VAR20;
    RDMAControlHeader VAR21;
    VAR22 *VAR23, *VAR24;
    VAR25 *VAR26;
    VAR6 *VAR27;
    static RDMARegisterResult VAR28[VAR29];
    VAR30 *VAR31;
    void *VAR32;
    int VAR33 = 0;
    int VAR34 = 0;
    int VAR35 = 0;
    int VAR36 = 0;
    FUN3();
    do
    {
        FUN4();
        VAR33 = FUN5(VAR17, &VAR21, VAR37);
        if (VAR33 < 0)
        {
            break;
        }
        if (VAR21.VAR9 > VAR29)
        {
            FUN6(""
                         "",
                         VAR21.VAR9);
            VAR33 = -VAR38;
            break;
        }
        switch (VAR21.VAR7)
        {
        case VAR39:
            VAR26 = (VAR25 *)VAR17->VAR40[VAR34].VAR41;
            FUN7(VAR26);
            FUN8(VAR26->VAR42, VAR26->VAR43, VAR26->VAR44);
            if (VAR26->VAR43 >= VAR17->VAR20.VAR45)
            {
                FUN6("", (unsigned int)VAR26->VAR43, VAR17->VAR20.VAR45);
                VAR33 = -VAR38;
                goto VAR46;
            }
            VAR31 = &(VAR17->VAR20.VAR31[VAR26->VAR43]);
            VAR32 = VAR31->VAR47 + (VAR26->VAR44 - VAR31->VAR44);
            FUN9(VAR32, VAR26->VAR48, VAR26->VAR42);
            break;
        case VAR49:
            FUN10();
            goto VAR46;
        case VAR50:
            FUN11();
            FUN12(VAR17->VAR20.VAR31, VAR17->VAR20.VAR45, sizeof(VAR30), VAR51);
            if (VAR17->VAR52)
            {
                VAR33 = FUN13(VAR17);
                if (VAR33)
                {
                    FUN6(""
                                 "");
                    goto VAR46;
                }
            }
            for (VAR36 = 0; VAR36 < VAR19->VAR45; VAR36++)
            {
                VAR17->VAR53[VAR36].VAR54 = (VAR55)(VAR19->VAR31[VAR36].VAR47);
                if (VAR17->VAR52)
                {
                    VAR17->VAR53[VAR36].VAR56 = VAR19->VAR31[VAR36].VAR57->VAR58;
                }
                VAR17->VAR53[VAR36].VAR44 = VAR19->VAR31[VAR36].VAR44;
                VAR17->VAR53[VAR36].VAR42 = VAR19->VAR31[VAR36].VAR42;
                FUN14(&VAR17->VAR53[VAR36]);
                FUN15(VAR19->VAR31[VAR36].VAR59, VAR19->VAR31[VAR36].VAR44, VAR19->VAR31[VAR36].VAR42, VAR19->VAR31[VAR36].VAR47, VAR19->VAR31[VAR36].VAR60);
            }
            VAR12.VAR5 = VAR17->VAR20.VAR45 * sizeof(VAR61);
            VAR33 = FUN16(VAR17, (VAR62 *)VAR17->VAR53, &VAR12);
            if (VAR33 < 0)
            {
                FUN6("");
                goto VAR46;
            }
            break;
        case VAR63:
            FUN17(VAR21.VAR9);
            VAR4.VAR9 = VAR21.VAR9;
            VAR24 = (VAR22 *)VAR17->VAR40[VAR34].VAR41;
            for (VAR35 = 0; VAR35 < VAR21.VAR9; VAR35++)
            {
                uint64_t VAR64;
                VAR62 *VAR65, *VAR66;
                VAR23 = &VAR24[VAR35];
                FUN18(VAR23);
                VAR27 = &VAR28[VAR35];
                FUN19(VAR35, VAR23->VAR67, VAR23->VAR68.VAR69, VAR23->VAR70);
                if (VAR23->VAR67 >= VAR17->VAR20.VAR45)
                {
                    FUN6("", (unsigned int)VAR23->VAR67, VAR17->VAR20.VAR45);
                    VAR33 = -VAR71;
                    goto VAR46;
                }
                VAR31 = &(VAR17->VAR20.VAR31[VAR23->VAR67]);
                if (VAR31->VAR72)
                {
                    if (VAR31->VAR44 > VAR23->VAR68.VAR69)
                    {
                        FUN6(""
                                     "" VAR73 "" VAR73,
                                     VAR31->VAR59, VAR31->VAR44, VAR23->VAR68.VAR69);
                        VAR33 = -VAR74;
                        goto VAR46;
                    }
                    VAR32 = (VAR31->VAR47 + (VAR23->VAR68.VAR69 - VAR31->VAR44));
                    VAR64 = FUN20(VAR31->VAR47, (VAR62 *)VAR32);
                }
                else
                {
                    VAR64 = VAR23->VAR68.VAR64;
                    VAR32 = VAR31->VAR47 + (VAR23->VAR68.VAR64 * (1UL << VAR75));
                    if (VAR32 < (void *)VAR31->VAR47)
                    {
                        FUN6(""
                                     "" VAR73,
                                     VAR31->VAR59, VAR23->VAR68.VAR64);
                        VAR33 = -VAR74;
                        goto VAR46;
                    }
                }
                VAR65 = FUN21(VAR31, VAR64);
                VAR66 = FUN22(VAR31, VAR64 + VAR23->VAR70);
                if (FUN23(VAR17, VAR31, (VAR55)VAR32, NULL, &VAR27->VAR58, VAR64, VAR65, VAR66))
                {
                    FUN6("");
                    VAR33 = -VAR76;
                    goto VAR46;
                }
                VAR27->VAR32 = (VAR55)VAR31->VAR47;
                FUN24(VAR27->VAR58);
                FUN25(VAR27);
            }
            VAR33 = FUN16(VAR17, (VAR62 *)VAR28, &VAR4);
            if (VAR33 < 0)
            {
                FUN6("");
                goto VAR46;
            }
            break;
        case VAR77:
            FUN26(VAR21.VAR9);
            VAR10.VAR9 = VAR21.VAR9;
            VAR24 = (VAR22 *)VAR17->VAR40[VAR34].VAR41;
            for (VAR35 = 0; VAR35 < VAR21.VAR9; VAR35++)
            {
                VAR23 = &VAR24[VAR35];
                FUN18(VAR23);
                FUN27(VAR35, VAR23->VAR67, VAR23->VAR68.VAR64);
                VAR31 = &(VAR17->VAR20.VAR31[VAR23->VAR67]);
                VAR33 = FUN28(VAR31->VAR78[VAR23->VAR68.VAR64]);
                VAR31->VAR78[VAR23->VAR68.VAR64] = NULL;
                if (VAR33 != 0)
                {
                    FUN29("");
                    VAR33 = -VAR33;
                    goto VAR46;
                }
                VAR17->VAR79--;
                FUN30(VAR23->VAR68.VAR64);
            }
            VAR33 = FUN16(VAR17, NULL, &VAR10);
            if (VAR33 < 0)
            {
                FUN6("");
                goto VAR46;
            }
            break;
        case VAR8:
            FUN6("");
            VAR33 = -VAR38;
            goto VAR46;
        default:
            FUN6("", FUN31(VAR21.VAR7));
            VAR33 = -VAR38;
            goto VAR46;
        }
    } while (1);
VAR46:
    if (VAR33 < 0)
    {
        VAR17->VAR80 = VAR33;
    }
    return VAR33;
}