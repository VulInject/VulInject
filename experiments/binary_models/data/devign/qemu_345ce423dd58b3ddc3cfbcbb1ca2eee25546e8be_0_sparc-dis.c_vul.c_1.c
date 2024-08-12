FUN1(bfd_vma VAR1, VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR3->VAR5;
    bfd_byte VAR6[4];
    unsigned long VAR7;
    VAR8 *VAR9;
    static int VAR10 = 0;
    static unsigned long VAR11 = 0;
    FUN2 (*VAR12)(const unsigned char *);
    if (!VAR10 || VAR3->VAR13 != VAR11)
    {
        int VAR14;
        VAR15 = FUN3(VAR3->VAR13);
        if (!VAR10)
            VAR16 = malloc(VAR17 * sizeof(VAR18 *));
        for (VAR14 = 0; VAR14 < VAR17; ++VAR14)
            VAR16[VAR14] = &VAR19[VAR14];
        FUN4((char *)VAR16, VAR17, sizeof(VAR16[0]), VAR20);
        FUN5(VAR16, VAR21, VAR17);
        VAR11 = VAR3->VAR13;
        VAR10 = 1;
    }
    {
        int VAR22 = (*VAR3->VAR23)(VAR1, VAR6, sizeof(VAR6), VAR3);
        if (VAR22 != 0)
        {
            (*VAR3->VAR24)(VAR22, VAR1, VAR3);
            return -1;
        }
    }
    if (VAR3->VAR25 == VAR26 || VAR3->VAR13 == VAR27)
        VAR12 = VAR28;
    else
        VAR12 = VAR29;
    VAR7 = FUN6(VAR6);
    VAR3->VAR30 = 1;
    VAR3->VAR31 = VAR32;
    VAR3->VAR33 = 0;
    VAR3->VAR34 = 0;
    for (VAR9 = VAR21[FUN7(VAR7)]; VAR9; VAR9 = VAR9->VAR35)
    {
        const VAR18 *VAR36 = VAR9->VAR36;
        if (!(VAR36->VAR37 & VAR15))
            continue;
        if ((VAR36->VAR38 & VAR7) == VAR36->VAR38 && (VAR36->VAR39 & VAR7) == 0)
        {
            int VAR40 = 0;
            int VAR41 = 0;
            int VAR42 = 0;
            if (VAR36->VAR38 == 0x80102000)
                VAR41 = 1;
            if (VAR36->VAR38 == 0x80002000)
                VAR40 = 1;
            if (FUN8(VAR7) != FUN9(VAR7) && strchr(VAR36->VAR43, '') != NULL)
                continue;
            if (FUN10(VAR7) != FUN9(VAR7) && strchr(VAR36->VAR43, '') != NULL)
                continue;
            (*VAR3->VAR44)(VAR5, "", VAR36->VAR45);
            {
                const char *VAR46;
                if (VAR36->VAR43[0] != '')
                    (*VAR3->VAR44)(VAR5, "");
                for (VAR46 = VAR36->VAR43; *VAR46 != ''; ++VAR46)
                {
                    while (*VAR46 == '')
                    {
                        (*VAR3->VAR44)(VAR5, "");
                        ++VAR46;
                        switch (*VAR46)
                        {
                        case '':
                            (*VAR3->VAR44)(VAR5, "");
                            ++VAR46;
                            continue;
                        case '':
                            (*VAR3->VAR44)(VAR5, "");
                            ++VAR46;
                            continue;
                        case '':
                            (*VAR3->VAR44)(VAR5, "");
                            ++VAR46;
                            continue;
                        default:
                            break;
                        }
                    }
                    (*VAR3->VAR44)(VAR5, "");
                    switch (*VAR46)
                    {
                    case '':
                        VAR42 = 1;
                    default:
                        (*VAR3->VAR44)(VAR5, "", *VAR46);
                        break;
                    case '':
                        (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                    case '':
                        FUN11(FUN8(VAR7));
                        break;
                    case '':
                    case '':
                        FUN11(FUN10(VAR7));
                        break;
                    case '':
                        FUN11(FUN9(VAR7));
                        break;
                    case '':
                        FUN12(FUN8(VAR7));
                        break;
                    case '':
                    case '':
                        FUN13(FUN8(VAR7));
                        break;
                    case '':
                        FUN12(FUN10(VAR7));
                        break;
                    case '':
                    case '':
                        FUN13(FUN10(VAR7));
                        break;
                    case '':
                        FUN12(FUN9(VAR7));
                        break;
                    case '':
                    case '':
                        FUN13(FUN9(VAR7));
                        break;
                    case '':
                        FUN14(FUN8(VAR7));
                        break;
                    case '':
                        FUN14(FUN10(VAR7));
                        break;
                    case '':
                        FUN14(FUN9(VAR7));
                        break;
                    case '':
                        (*VAR3->VAR44)(VAR5, "", ((unsigned)0xFFFFFFFF & ((int)FUN15(VAR7) << 10)));
                        break;
                    case '':
                    case '':
                    case '':
                    {
                        int VAR47;
                        if (*VAR46 == '')
                            VAR47 = FUN16(VAR7, 13);
                        else if (*VAR46 == '')
                            VAR47 = FUN16(VAR7, 11);
                        else
                            VAR47 = FUN16(VAR7, 10);
                        if (VAR42)
                            VAR40 = 1;
                        if (VAR47 <= 9)
                            (*VAR3->VAR44)(VAR5, "", VAR47);
                        else
                            (*VAR3->VAR44)(VAR5, "", VAR47);
                    }
                    break;
                    case '':
                    case '':
                    {
                        int VAR47 = FUN17(VAR7, *VAR46 == '' ? 5 : 6);
                        if (VAR47 <= 9)
                            (VAR3->VAR44)(VAR5, "", VAR47);
                        else
                            (VAR3->VAR44)(VAR5, "", (unsigned)VAR47);
                    }
                    break;
                    case '':
                        (VAR3->VAR44)(VAR5, "", FUN17(VAR7, 3));
                        break;
                    case '':
                    {
                        int VAR48 = FUN18(VAR7);
                        int VAR49 = 0x40, VAR50 = 0;
                        const char *VAR45;
                        if (VAR48 == 0)
                            (VAR3->VAR44)(VAR5, "");
                        else
                            while (VAR49)
                            {
                                if (VAR48 & VAR49)
                                {
                                    if (VAR50)
                                        (VAR3->VAR44)(VAR5, "");
                                    VAR45 = FUN19(VAR49);
                                    (VAR3->VAR44)(VAR5, "", VAR45);
                                    VAR50 = 1;
                                }
                                VAR49 >>= 1;
                            }
                        break;
                    }
                    case '':
                        VAR3->VAR34 = VAR1 + FUN20(FUN21(VAR7), 16) * 4;
                        (*VAR3->VAR51)(VAR3->VAR34, VAR3);
                        break;
                    case '':
                        VAR3->VAR34 = VAR1 + FUN20(FUN22(VAR7), 19) * 4;
                        (*VAR3->VAR51)(VAR3->VAR34, VAR3);
                        break;
                    case '':
                    case '':
                    case '':
                    case '':
                        (*VAR3->VAR44)(VAR5, "", *VAR46 - '' + '');
                        break;
                    case '':
                        (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                        (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                        (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                        (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                        (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                        (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                        (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                        if (FUN8(VAR7) == 31)
                            (*VAR3->VAR44)(VAR5, "");
                        else if ((unsigned)FUN8(VAR7) < 17)
                            (*VAR3->VAR44)(VAR5, "", VAR52[FUN8(VAR7)]);
                        else
                            (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                        if ((unsigned)FUN9(VAR7) < 17)
                            (*VAR3->VAR44)(VAR5, "", VAR52[FUN9(VAR7)]);
                        else
                            (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                        if ((unsigned)FUN8(VAR7) < 32)
                            (*VAR3->VAR44)(VAR5, "", VAR53[FUN8(VAR7)]);
                        else
                            (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                        if ((unsigned)FUN9(VAR7) < 32)
                            (*VAR3->VAR44)(VAR5, "", VAR53[FUN9(VAR7)]);
                        else
                            (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                        if (FUN8(VAR7) < 16 || FUN8(VAR7) > 25)
                            (*VAR3->VAR44)(VAR5, "");
                        else
                            (*VAR3->VAR44)(VAR5, "", VAR54[FUN8(VAR7) - 16]);
                        break;
                    case '':
                        if (FUN9(VAR7) < 16 || FUN9(VAR7) > 25)
                            (*VAR3->VAR44)(VAR5, "");
                        else
                            (*VAR3->VAR44)(VAR5, "", VAR54[FUN9(VAR7) - 16]);
                        break;
                    case '':
                    {
                        const char *VAR45 = FUN23(FUN9(VAR7));
                        if (VAR45)
                            (*VAR3->VAR44)(VAR5, "", VAR45);
                        else
                            (*VAR3->VAR44)(VAR5, "", FUN9(VAR7));
                        break;
                    }
                    case '':
                        (*VAR3->VAR44)(VAR5, "", FUN8(VAR7));
                        break;
                    case '':
                        (*VAR3->VAR44)(VAR5, "", FUN9(VAR7));
                        break;
                    case '':
                        VAR3->VAR34 = VAR1 + FUN20(FUN24(VAR7), 30) * 4;
                        (*VAR3->VAR51)(VAR3->VAR34, VAR3);
                        break;
                    case '':
                        (*VAR3->VAR44)(VAR5, "", FUN20(FUN25(VAR7), 22));
                        break;
                    case '':
                        VAR3->VAR34 = VAR1 + FUN20(FUN25(VAR7), 22) * 4;
                        (*VAR3->VAR51)(VAR3->VAR34, VAR3);
                        break;
                    case '':
                    {
                        const char *VAR45;
                        if ((VAR3->VAR13 == VAR55) || ((VAR3->VAR13 >= VAR56) && (VAR3->VAR13 <= VAR57)))
                            VAR45 = FUN26(FUN27(VAR7));
                        else
                            VAR45 = FUN28(FUN27(VAR7));
                        if (VAR45)
                            (*VAR3->VAR44)(VAR5, "", VAR45);
                        else
                            (*VAR3->VAR44)(VAR5, "", FUN27(VAR7));
                        break;
                    }
                    case '':
                        (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                        (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                        (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                        (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                        (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                        (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                        (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                        (*VAR3->VAR44)(VAR5, "", ((FUN29(VAR7) << 8) + FUN27(VAR7)));
                        break;
                    case '':
                        (*VAR3->VAR44)(VAR5, "");
                        break;
                    case '':
                    case '':
                    {
                        int VAR58 = *VAR46 == '' ? FUN8(VAR7) : FUN9(VAR7);
                        const char *VAR45 = FUN30(VAR58);
                        if (VAR45)
                            (*VAR3->VAR44)(VAR5, "", VAR45);
                        else
                            (*VAR3->VAR44)(VAR5, "", VAR58);
                        break;
                    }
                    }
                }
            }
            if (VAR41 || VAR40)
            {
                unsigned long VAR59;
                int VAR60;
                if (VAR1 >= 4)
                    VAR60 = (*VAR3->VAR23)(VAR1 - 4, VAR6, sizeof(VAR6), VAR3);
                else
                    VAR60 = 1;
                VAR59 = FUN6(VAR6);
                if (VAR60 == 0)
                {
                    if (FUN31(VAR59))
                    {
                        if (VAR1 >= 8)
                            VAR60 = (*VAR3->VAR23)(VAR1 - 8, VAR6, sizeof(VAR6), VAR3);
                        else
                            VAR60 = 1;
                        VAR59 = FUN6(VAR6);
                    }
                }
                if (VAR60 == 0)
                {
                    if ((VAR59 & 0xc1c00000) == 0x01000000 && FUN9(VAR59) == FUN8(VAR7))
                    {
                        (*VAR3->VAR44)(VAR5, "");
                        VAR3->VAR34 = ((unsigned)0xFFFFFFFF & ((int)FUN15(VAR59) << 10));
                        if (VAR40)
                            VAR3->VAR34 += FUN16(VAR7, 13);
                        else
                            VAR3->VAR34 |= FUN16(VAR7, 13);
                        (*VAR3->VAR51)(VAR3->VAR34, VAR3);
                        VAR3->VAR31 = VAR61;
                        VAR3->VAR62 = 4;
                    }
                }
            }
            if (VAR36->VAR63 & (VAR64 | VAR65 | VAR66))
            {
                if (VAR36->VAR63 & VAR64)
                    VAR3->VAR31 = VAR67;
                if (VAR36->VAR63 & VAR65)
                    VAR3->VAR31 = VAR68;
                if (VAR36->VAR63 & VAR66)
                    VAR3->VAR31 = VAR69;
                if (VAR36->VAR63 & VAR70)
                    VAR3->VAR33 = 1;
            }
            return sizeof(VAR6);
        }
    }
    VAR3->VAR31 = VAR71;
    (*VAR3->VAR44)(VAR5, FUN32(""));
    return sizeof(VAR6);
}