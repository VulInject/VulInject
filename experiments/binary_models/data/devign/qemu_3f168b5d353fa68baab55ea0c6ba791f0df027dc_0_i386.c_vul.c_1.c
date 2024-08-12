FUN1(bfd_vma VAR1, VAR2 *VAR3)
{
    const struct VAR4 *VAR5;
    int VAR6;
    char *VAR7[VAR8];
    int VAR9;
    unsigned char VAR10, VAR11;
    unsigned char VAR12, VAR13;
    int VAR14;
    const char *VAR15;
    struct dis_private VAR16;
    unsigned char VAR17;
    unsigned char VAR18;
    if (VAR3->VAR19 == VAR20 || VAR3->VAR19 == VAR21)
        VAR22 = VAR23;
    else
        VAR22 = VAR24;
    if (VAR25 == (char)-1)
        VAR25 = (VAR3->VAR19 == VAR26 || VAR3->VAR19 == VAR20);
    if (VAR3->VAR19 == VAR27 || VAR3->VAR19 == VAR21 || VAR3->VAR19 == VAR26 || VAR3->VAR19 == VAR20)
        VAR16.VAR28 = VAR29 | VAR30;
    else if (VAR3->VAR19 == VAR31)
        VAR16.VAR28 = 0;
    else
        FUN2();
    for (VAR15 = VAR3->VAR32; VAR15 != NULL;)
    {
        if (FUN3(VAR15, "", 6) == 0)
        {
            VAR22 = VAR23;
            VAR16.VAR28 = VAR29 | VAR30;
        }
        else if (FUN3(VAR15, "", 4) == 0)
        {
            VAR22 = VAR24;
            VAR16.VAR28 = VAR29 | VAR30;
        }
        else if (FUN3(VAR15, "", 5) == 0)
        {
            VAR22 = VAR33;
            VAR16.VAR28 = 0;
        }
        else if (FUN3(VAR15, "", 5) == 0)
        {
            VAR25 = 1;
        }
        else if (FUN3(VAR15, "", 3) == 0)
        {
            VAR25 = 0;
        }
        else if (FUN3(VAR15, "", 4) == 0)
        {
            if (VAR22 == VAR23)
            {
                if (VAR15[4] == '' && VAR15[5] == '')
                    VAR16.VAR28 &= ~VAR29;
                else if (VAR15[4] == '' && VAR15[5] == '')
                    VAR16.VAR28 |= VAR29;
            }
            else
            {
                if (VAR15[4] == '' && VAR15[5] == '')
                    VAR16.VAR28 &= ~VAR29;
                else if (VAR15[4] == '' && VAR15[5] == '')
                    VAR16.VAR28 |= VAR29;
            }
        }
        else if (FUN3(VAR15, "", 4) == 0)
        {
            if (VAR15[4] == '' && VAR15[5] == '')
                VAR16.VAR28 &= ~VAR30;
            else if (VAR15[4] == '' && VAR15[5] == '')
                VAR16.VAR28 |= VAR30;
        }
        else if (FUN3(VAR15, "", 6) == 0)
            VAR16.VAR28 |= VAR34;
        VAR15 = strchr(VAR15, '');
        if (VAR15 != NULL)
            VAR15++;
    }
    if (VAR25)
    {
        VAR35 = VAR36;
        VAR37 = VAR38;
        VAR39 = VAR40;
        VAR41 = VAR42;
        VAR43 = VAR44;
        VAR45 = VAR46;
        VAR47 = VAR48;
        VAR49 = '';
        VAR50 = '';
        VAR51 = '';
        VAR52 = '';
    }
    else
    {
        VAR35 = VAR53;
        VAR37 = VAR54;
        VAR39 = VAR55;
        VAR41 = VAR56;
        VAR43 = VAR57;
        VAR45 = VAR58;
        VAR47 = VAR59;
        VAR49 = '';
        VAR50 = '';
        VAR51 = '';
        VAR52 = '';
    }
    VAR3->VAR60 = 7;
    VAR3->VAR61 = &VAR16;
    VAR16.VAR62 = VAR16.VAR63;
    VAR16.VAR64 = VAR1;
    VAR65[0] = 0;
    for (VAR6 = 0; VAR6 < VAR8; ++VAR6)
    {
        VAR66[VAR6][0] = 0;
        VAR67[VAR6] = -1;
    }
    VAR68 = VAR3;
    VAR69 = VAR1;
    VAR70 = VAR16.VAR63;
    VAR71 = VAR16.VAR63;
    if (FUN4(VAR16.VAR72, 0) != 0)
    {
        const char *VAR73;
        if (VAR71 > VAR16.VAR63)
        {
            VAR73 = FUN5(VAR16.VAR63[0], VAR16.VAR28);
            if (VAR73 != NULL)
                (*VAR3->VAR74)(VAR3->VAR75, "", VAR73);
            else
            {
                (*VAR3->VAR74)(VAR3->VAR75, "", (unsigned int)VAR16.VAR63[0]);
            }
            return 1;
        }
        return -1;
    }
    VAR76 = VAR65;
    FUN6();
    FUN7();
    VAR77 = VAR71;
    VAR14 = VAR16.VAR28;
    FUN8(VAR3, VAR71 + 1);
    VAR78 = (*VAR71 == 0x62) || (*VAR71 == 0xc8);
    if (((VAR79 & VAR80) && ((*VAR71 < 0xd8) || (*VAR71 > 0xdf))) || (VAR81 && VAR82))
    {
        const char *VAR73;
        VAR73 = FUN5(VAR16.VAR63[0], VAR16.VAR28);
        if (VAR73 == NULL)
            VAR73 = VAR83;
        (*VAR3->VAR74)(VAR3->VAR75, "", VAR73);
        return 1;
    }
    VAR17 = 0;
    if (VAR79 & VAR84)
    {
        VAR85 |= VAR84 | VAR86 | VAR87;
        if (VAR79 & VAR86)
            VAR18 = 0x38;
        else if (VAR79 & VAR87)
            VAR18 = 0x3a;
        else
            VAR18 = *VAR71++;
        goto VAR88;
    }
    if (*VAR71 == 0x0f)
    {
        FUN8(VAR3, VAR71 + 2);
        VAR18 = VAR71[1];
        VAR71 += 2;
    VAR88:
        VAR5 = &VAR89[VAR18];
        VAR90 = VAR91[VAR18];
        VAR10 = VAR92[VAR18];
        VAR12 = VAR93[VAR18];
        VAR13 = VAR94[VAR18];
        VAR11 = (VAR18 & ~0x02) == 0x20;
        if (VAR5->VAR73 == NULL && VAR5->VAR17[0].VAR95 == VAR96)
        {
            FUN8(VAR3, VAR71 + 2);
            VAR17 = *VAR71++;
            switch (VAR18)
            {
            case 0x38:
                VAR10 = VAR97[VAR17];
                VAR12 = VAR98[VAR17];
                VAR13 = VAR99[VAR17];
                break;
            case 0x3a:
                VAR10 = VAR100[VAR17];
                VAR12 = VAR101[VAR17];
                VAR13 = VAR102[VAR17];
                break;
            default:
                break;
            }
        }
    }
    else
    {
        VAR5 = &VAR4[*VAR71];
        VAR90 = VAR103[*VAR71];
        VAR10 = 0;
        VAR12 = 0;
        VAR13 = *VAR71 == 0x90;
        VAR11 = 0;
        VAR71++;
    }
    if (!VAR13 && (VAR79 & VAR104))
    {
        FUN9("");
        VAR85 |= VAR104;
    }
    if (!VAR12 && (VAR79 & VAR105))
    {
        FUN9("");
        VAR85 |= VAR105;
    }
    if (!VAR11 && (VAR79 & VAR106))
    {
        FUN9("");
        VAR85 |= VAR106;
    }
    if (VAR79 & VAR107)
    {
        VAR14 ^= VAR29;
        if (VAR5->VAR17[2].VAR95 != VAR108 || VAR25)
        {
            if ((VAR14 & VAR29) || VAR22 == VAR23)
                FUN9("");
            else
                FUN9("");
            VAR85 |= VAR107;
        }
    }
    if (!VAR10 && (VAR79 & VAR109))
    {
        VAR14 ^= VAR30;
        if (VAR5->VAR17[2].VAR95 == VAR110 && VAR5->VAR17[0].VAR95 == VAR111 && !VAR25)
        {
            if (VAR14 & VAR30)
                FUN9("");
            else
                FUN9("");
            VAR85 |= VAR109;
        }
    }
    if (VAR5->VAR73 == NULL && VAR5->VAR17[0].VAR95 == VAR96)
    {
        VAR5 = &VAR112[VAR5->VAR17[1].VAR95][VAR17];
        VAR113.VAR114 = (*VAR71 >> 6) & 3;
        VAR113.VAR115 = (*VAR71 >> 3) & 7;
        VAR113.VAR116 = *VAR71 & 7;
    }
    else if (VAR90)
    {
        FUN8(VAR3, VAR71 + 1);
        VAR113.VAR114 = (*VAR71 >> 6) & 3;
        VAR113.VAR115 = (*VAR71 >> 3) & 7;
        VAR113.VAR116 = *VAR71 & 7;
    }
    if (VAR5->VAR73 == NULL && VAR5->VAR17[0].VAR95 == VAR117)
    {
        FUN10(VAR14);
    }
    else
    {
        int VAR118;
        if (VAR5->VAR73 == NULL)
        {
            switch (VAR5->VAR17[0].VAR95)
            {
            case VAR119:
                VAR5 = &VAR120[VAR5->VAR17[1].VAR95][VAR113.VAR115];
                break;
            case VAR121:
                VAR118 = 0;
                VAR85 |= (VAR79 & VAR104);
                if (VAR79 & VAR104)
                    VAR118 = 1;
                else
                {
                    VAR85 |= (VAR79 & VAR105);
                    if (VAR79 & VAR105)
                        VAR118 = 3;
                    else
                    {
                        VAR85 |= (VAR79 & VAR109);
                        if (VAR79 & VAR109)
                            VAR118 = 2;
                    }
                }
                VAR5 = &VAR122[VAR5->VAR17[1].VAR95][VAR118];
                break;
            case VAR123:
                VAR118 = VAR22 == VAR23 ? 1 : 0;
                VAR5 = &VAR124[VAR5->VAR17[1].VAR95][VAR118];
                break;
            default:
                FUN9(VAR83);
                break;
            }
        }
        if (FUN11(VAR5->VAR73, VAR14) == 0)
        {
            for (VAR6 = 0; VAR6 < VAR8; ++VAR6)
            {
                VAR76 = VAR66[VAR6];
                VAR125 = VAR8 - 1 - VAR6;
                if (VAR5->VAR17[VAR6].VAR126)
                    (*VAR5->VAR17[VAR6].VAR126)(VAR5->VAR17[VAR6].VAR95, VAR14);
            }
        }
    }
    if ((VAR79 & ~VAR85) != 0)
    {
        const char *VAR73;
        VAR73 = FUN5(VAR16.VAR63[0], VAR16.VAR28);
        if (VAR73 == NULL)
            VAR73 = VAR83;
        (*VAR3->VAR74)(VAR3->VAR75, "", VAR73);
        return 1;
    }
    if (VAR81 & ~VAR82)
    {
        const char *VAR73;
        VAR73 = FUN5(VAR81 | 0x40, VAR16.VAR28);
        if (VAR73 == NULL)
            VAR73 = VAR83;
        (*VAR3->VAR74)(VAR3->VAR75, "", VAR73);
    }
    VAR76 = VAR65 + strlen(VAR65);
    for (VAR6 = strlen(VAR65); VAR6 < 6; VAR6++)
        FUN9("");
    FUN9("");
    (*VAR3->VAR74)(VAR3->VAR75, "", VAR65);
    if (VAR25 || VAR78)
    {
        bfd_vma VAR127;
        for (VAR6 = 0; VAR6 < VAR8; ++VAR6)
            VAR7[VAR6] = VAR66[VAR6];
        for (VAR6 = 0; VAR6 < (VAR8 >> 1); ++VAR6)
        {
            VAR125 = VAR67[VAR6];
            VAR67[VAR6] = VAR67[VAR8 - 1 - VAR6];
            VAR67[VAR8 - 1 - VAR6] = VAR125;
            VAR127 = VAR128[VAR6];
            VAR128[VAR6] = VAR128[VAR8 - 1 - VAR6];
            VAR128[VAR8 - 1 - VAR6] = VAR127;
        }
    }
    else
    {
        for (VAR6 = 0; VAR6 < VAR8; ++VAR6)
            VAR7[VAR8 - 1 - VAR6] = VAR66[VAR6];
    }
    VAR9 = 0;
    for (VAR6 = 0; VAR6 < VAR8; ++VAR6)
        if (*VAR7[VAR6])
        {
            if (VAR9)
                (*VAR3->VAR74)(VAR3->VAR75, "");
            if (VAR67[VAR6] != -1 && !VAR128[VAR6])
                (*VAR3->VAR129)((VAR130)VAR131[VAR67[VAR6]], VAR3);
            else
                (*VAR3->VAR74)(VAR3->VAR75, "", VAR7[VAR6]);
            VAR9 = 1;
        }
    for (VAR6 = 0; VAR6 < VAR8; VAR6++)
        if (VAR67[VAR6] != -1 && VAR128[VAR6])
        {
            (*VAR3->VAR74)(VAR3->VAR75, "");
            (*VAR3->VAR129)((VAR130)(VAR69 + VAR71 - VAR70 + VAR131[VAR67[VAR6]]), VAR3);
            break;
        }
    return VAR71 - VAR16.VAR63;
}