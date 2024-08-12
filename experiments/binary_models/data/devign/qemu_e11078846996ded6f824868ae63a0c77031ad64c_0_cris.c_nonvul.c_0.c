FUN1(const struct VAR1 *VAR2, unsigned int VAR3, unsigned char *VAR4, bfd_vma VAR5, VAR6 *VAR7, const struct VAR1 *VAR8, unsigned int VAR9, unsigned char *VAR10, bfd_boolean VAR11)
{
    char VAR12[sizeof("") * 2];
    char *VAR13 = VAR12;
    static const char VAR14[] = "";
    const char *VAR15;
    const char *VAR16;
    struct VAR17 *VAR18 = (struct VAR17 *)VAR7->VAR19;
    (*VAR7->VAR20)(VAR7->VAR21, "", VAR2->VAR22);
    VAR16 = VAR2->VAR23;
    VAR15 = VAR16;
    if (*VAR15 == '')
        VAR15++;
    if (*VAR15 == '' || *VAR15 == '' || *VAR15 == '')
    {
        *VAR13++ = '';
        *VAR13++ = *VAR15 == '' ? (VAR3 & 0x8000 ? '' : VAR3 & 0x4000 ? ''
                                                                 : '')
                          : VAR14[(VAR3 >> 4) & (*VAR15 == '' ? 1 : 3)];
        VAR15 += 2;
    }
    if (VAR2->VAR24 != (VAR25 + VAR26 * 256))
        *VAR13++ = '';
    if (VAR2->VAR22[0] == '')
    {
        if (FUN2(VAR2->VAR22, ""))
            VAR7->VAR27 = VAR28;
        else
            VAR7->VAR27 = VAR29;
    }
    VAR7->VAR30 = VAR2->VAR31;
    for (; *VAR15; VAR15++)
    {
        switch (*VAR15)
        {
        case '':
            VAR13 = FUN3((VAR3 >> 12) & 15, VAR13, VAR11);
            break;
        case '':
            if (VAR11)
                *VAR13++ = VAR32;
            *VAR13++ = '';
            *VAR13++ = '';
            *VAR13++ = '';
            break;
        case '':
        case '':
        case '':
            *VAR13++ = *VAR15;
            break;
        case '':
            break;
        case '':
            break;
        case '':
            VAR8 = NULL;
            break;
        case '':
        case '':
            VAR13 = FUN4(VAR18, VAR3 & 15, VAR13, VAR11);
            break;
        case '':
            VAR13 = FUN4(VAR18, (VAR3 >> 12) & 15, VAR13, VAR11);
            break;
        case '':
        {
            unsigned long VAR33 = (VAR4[2] + VAR4[3] * 256 + VAR4[4] * 65536 + VAR4[5] * 0x1000000 + VAR5);
            *VAR13 = 0;
            if (VAR12[0])
                (*VAR7->VAR20)(VAR7->VAR21, "", VAR12);
            VAR13 = VAR12;
            (*VAR7->VAR34)((VAR35)VAR33, VAR7);
        }
        break;
        case '':
        {
            unsigned long VAR33 = (VAR4[0] & 0xf) * 2 + VAR5;
            *VAR13 = 0;
            if (VAR12[0])
                (*VAR7->VAR20)(VAR7->VAR21, "", VAR12);
            VAR13 = VAR12;
            (*VAR7->VAR34)((VAR35)VAR33, VAR7);
        }
        break;
        case '':
        case '':
        case '':
        case '':
        case '':
            if ((VAR3 & 0x400) && (VAR3 & 15) == 15 && VAR8 == NULL)
            {
                long VAR33;
                int VAR36 = ((*VAR16 == '' && (VAR3 & 0x20)) || VAR2->VAR24 == VAR37);
                int VAR38;
                if (VAR2->VAR39 == VAR40)
                    VAR38 = 4;
                else if (VAR2->VAR39 == VAR41)
                {
                    const struct VAR42 *VAR43 = FUN5((VAR3 >> 12) & 15, VAR18->VAR44);
                    if (VAR43 == NULL)
                        VAR38 = 42;
                    else
                        VAR38 = VAR18->VAR44 == VAR45 ? 4 : (VAR43->VAR46 + 1) & ~1;
                }
                else
                {
                    int VAR47 = 1 << ((VAR3 >> 4) & (*VAR16 == '' ? 1 : 3));
                    if (VAR47 == 1)
                        VAR38 = 2;
                    else
                        VAR38 = VAR47;
                }
                switch (VAR38)
                {
                case 1:
                    VAR33 = VAR4[2];
                    if (VAR36 && VAR33 > 127)
                        VAR33 -= 256;
                    break;
                case 2:
                    VAR33 = VAR4[2] + VAR4[3] * 256;
                    if (VAR36 && VAR33 > 32767)
                        VAR33 -= 65536;
                    break;
                case 4:
                    VAR33 = VAR4[2] + VAR4[3] * 256 + VAR4[4] * 65536 + VAR4[5] * 0x1000000;
                    break;
                default:
                    strcpy(VAR13, "");
                    VAR13 += 3;
                    VAR33 = 42;
                }
                if ((*VAR16 == '' && (VAR3 & 0x20)) || (VAR2->VAR24 == VAR37 && (VAR38 <= 2 || VAR4[1 + VAR38] == 0)))
                    VAR13 = FUN6(VAR33, VAR13, VAR36);
                else
                {
                    unsigned int VAR48 = (VAR33 >> 24) & 0xff;
                    if (VAR38 == 4 && (VAR48 == ((VAR5 >> 24) & 0xff) || (VAR48 != 0 && VAR48 != 0xff) || VAR7->VAR27 == VAR29 || VAR7->VAR27 == VAR28))
                    {
                        *VAR13 = 0;
                        VAR13 = VAR12;
                        if (VAR12[0])
                            (*VAR7->VAR20)(VAR7->VAR21, "", VAR12);
                        (*VAR7->VAR34)((VAR35)VAR33, VAR7);
                        VAR7->VAR49 = VAR33;
                    }
                    else
                        VAR13 = FUN7(VAR33, VAR13, VAR18);
                }
            }
            else
            {
                if (VAR7->VAR27 != VAR50)
                {
                    int VAR47 = 1 << ((VAR3 >> 4) & (VAR2->VAR23[0] == '' ? 1 : 3));
                    int VAR51;
                    VAR7->VAR27 = VAR52;
                    VAR7->VAR53 |= VAR54;
                    if (VAR2->VAR39 == VAR40)
                        VAR51 = 4;
                    else if (VAR2->VAR39 == VAR41)
                    {
                        const struct VAR42 *VAR43 = FUN5((VAR3 >> 12) & 15, VAR18->VAR44);
                        if (VAR43 == NULL)
                            VAR51 = 4;
                        else
                            VAR51 = VAR43->VAR46;
                    }
                    else
                        VAR51 = VAR47;
                    VAR7->VAR55 = VAR51;
                }
                *VAR13++ = '';
                if (VAR8 && ((VAR3 & 0x400) == 0 || VAR8->VAR24 != VAR56))
                {
                    if (VAR3 & 0x400)
                    {
                        VAR13 = FUN4(VAR18, VAR3 & 15, VAR13, VAR11);
                        *VAR13++ = '';
                    }
                    switch (VAR8->VAR24)
                    {
                    case VAR56:
                        if ((VAR9 & 0x400) && (VAR9 & 15) == 15)
                        {
                            unsigned long VAR33 = VAR10[2] + VAR10[3] * 256 + VAR10[4] * 65536 + VAR10[5] * 0x1000000;
                            VAR7->VAR49 = (VAR35)VAR33;
                            *VAR13 = 0;
                            VAR13 = VAR12;
                            if (VAR12[0])
                                (*VAR7->VAR20)(VAR7->VAR21, "", VAR12);
                            (*VAR7->VAR34)((VAR35)VAR33, VAR7);
                        }
                        else
                        {
                            VAR7->VAR53 |= (VAR57 | VAR58);
                            VAR7->VAR59 = VAR9 & 15;
                            *VAR13++ = '';
                            VAR13 = FUN4(VAR18, VAR9 & 15, VAR13, VAR11);
                            if (VAR9 & 0x400)
                                *VAR13++ = '';
                            *VAR13++ = '';
                        }
                        break;
                    case VAR37:
                    {
                        int VAR33;
                        VAR33 = VAR10[0];
                        if (VAR33 > 127)
                            VAR33 -= 256;
                        VAR13 = FUN4(VAR18, (VAR9 >> 12) & 15, VAR13, VAR11);
                        if (VAR33 >= 0)
                            *VAR13++ = '';
                        VAR13 = FUN6(VAR33, VAR13, 1);
                        VAR7->VAR53 |= VAR60;
                        VAR7->VAR49 = (VAR9 >> 12) & 15;
                        VAR7->VAR59 = (VAR35)VAR33;
                        break;
                    }
                    case VAR61:
                        VAR13 = FUN4(VAR18, VAR9 & 15, VAR13, VAR11);
                        *VAR13++ = '';
                        VAR13 = FUN4(VAR18, (VAR9 >> 12) & 15, VAR13, VAR11);
                        *VAR13++ = '';
                        *VAR13++ = VAR14[(VAR9 >> 4) & 3];
                        VAR7->VAR53 |= (VAR57 | VAR60 | ((VAR9 & 0x8000) ? VAR62 : ((VAR9 & 0x8000) ? VAR63 : 0)));
                        if (VAR3 == 0xf83f && (VAR9 & ~0xf000) == 0x55f)
                            VAR64 = VAR65;
                        break;
                    case VAR66:
                        VAR13 = FUN4(VAR18, (VAR9 >> 12) & 15, VAR13, VAR11);
                        if ((VAR9 & 0x400) && (VAR9 & 15) == 15)
                        {
                            long VAR33;
                            unsigned int VAR38;
                            int VAR47 = 1 << ((VAR9 >> 4) & 3);
                            if (VAR47 == 1)
                                VAR38 = 2;
                            else
                                VAR38 = VAR47;
                            switch (VAR38)
                            {
                            case 1:
                                VAR33 = VAR10[2];
                                if (VAR33 > 127)
                                    VAR33 -= 256;
                                break;
                            case 2:
                                VAR33 = VAR10[2] + VAR10[3] * 256;
                                if (VAR33 > 32767)
                                    VAR33 -= 65536;
                                break;
                            case 4:
                                VAR33 = VAR10[2] + VAR10[3] * 256 + VAR10[4] * 65536 + VAR10[5] * 0x1000000;
                                break;
                            default:
                                strcpy(VAR13, "");
                                VAR13 += 3;
                                VAR33 = 42;
                            }
                            VAR7->VAR53 |= VAR60;
                            VAR7->VAR59 = (VAR35)VAR33;
                            if (VAR38 == 4)
                            {
                                *VAR13++ = '';
                                *VAR13 = 0;
                                VAR13 = VAR12;
                                (*VAR7->VAR20)(VAR7->VAR21, "", VAR12);
                                (*VAR7->VAR34)((VAR35)VAR33, VAR7);
                            }
                            else
                            {
                                if (VAR33 >= 0)
                                    *VAR13++ = '';
                                VAR13 = FUN6(VAR33, VAR13, 1);
                            }
                        }
                        else
                        {
                            *VAR13++ = '';
                            *VAR13++ = '';
                            VAR13 = FUN4(VAR18, VAR9 & 15, VAR13, VAR11);
                            if (VAR9 & 0x400)
                                *VAR13++ = '';
                            *VAR13++ = '';
                            *VAR13++ = '';
                            *VAR13++ = VAR14[(VAR9 >> 4) & 3];
                            VAR7->VAR53 |= (VAR57 | VAR58 | VAR60 | (((VAR9 >> 4) == 2) ? 0 : (((VAR9 >> 4) & 3) == 1 ? VAR67 : VAR68)));
                        }
                        break;
                    default:
                        (*VAR7->VAR20)(VAR7->VAR21, "");
                    }
                    VAR8 = NULL;
                }
                else
                {
                    VAR13 = FUN4(VAR18, VAR3 & 15, VAR13, VAR11);
                    VAR7->VAR53 |= VAR60;
                    VAR7->VAR49 = VAR3 & 15;
                    if (VAR3 & 0x400)
                        *VAR13++ = '';
                }
                *VAR13++ = '';
            }
            break;
        case '':
            VAR13 = FUN4(VAR18, (VAR3 >> 12) & 15, VAR13, VAR11);
            *VAR13++ = '';
            *VAR13++ = VAR14[(VAR3 >> 4) & 3];
            break;
        case '':
            VAR13 = FUN6(VAR3 & 63, VAR13, 0);
            break;
        case '':
        {
            int VAR69 = VAR4[2] + VAR4[3] * 256;
            if (VAR69 > 32767)
                VAR69 -= 65536;
            VAR69 += VAR5 + ((VAR18->VAR44 == VAR45) ? 0 : 4);
            if (VAR3 == VAR70)
                VAR7->VAR27 = VAR29;
            else
                VAR7->VAR27 = VAR71;
            VAR7->VAR49 = (VAR35)VAR69;
            *VAR13 = 0;
            VAR13 = VAR12;
            (*VAR7->VAR20)(VAR7->VAR21, "", VAR12, VAR72[VAR3 >> 12]);
            (*VAR7->VAR34)((VAR35)VAR69, VAR7);
        }
        break;
        case '':
            VAR13 = FUN6(VAR3 & 31, VAR13, 0);
            break;
        case '':
            VAR13 = FUN6(VAR3 & 15, VAR13, 0);
            break;
        case '':
        {
            long VAR73 = VAR3 & 0xfe;
            bfd_vma VAR49;
            if (VAR3 & 1)
                VAR73 |= ~0xff;
            if (VAR2->VAR24 == VAR74)
                VAR7->VAR27 = VAR29;
            else
                VAR7->VAR27 = VAR71;
            VAR49 = VAR5 + ((VAR18->VAR44 == VAR45) ? 0 : 2) + VAR73;
            VAR7->VAR49 = VAR49;
            *VAR13 = 0;
            VAR13 = VAR12;
            (*VAR7->VAR20)(VAR7->VAR21, "", VAR12);
            (*VAR7->VAR34)(VAR49, VAR7);
        }
        break;
        case '':
        case '':
        {
            long VAR33 = VAR4[0];
            if (VAR33 > 127)
                VAR33 = VAR33 - 256;
            VAR13 = FUN6(VAR33, VAR13, 1);
            *VAR13++ = '';
            VAR13 = FUN4(VAR18, (VAR3 >> 12) & 15, VAR13, VAR11);
        }
        break;
        case '':
            VAR13 = FUN8(VAR18, VAR3, VAR13);
            break;
        case '':
            VAR13 = FUN6((VAR3 & 32) ? (VAR3 & 31) | ~31L : VAR3 & 31, VAR13, 1);
            break;
        case '':
        {
            const struct VAR42 *VAR43 = FUN5((VAR3 >> 12) & 15, VAR18->VAR44);
            if (VAR43 == NULL || VAR43->VAR22 == NULL)
                *VAR13++ = '';
            else
            {
                if (VAR11)
                    *VAR13++ = VAR32;
                strcpy(VAR13, VAR43->VAR22);
                VAR13 += strlen(VAR13);
            }
        }
        break;
        default:
            strcpy(VAR13, "");
            VAR13 += 3;
        }
    }
    *VAR13 = 0;
    if (VAR8)
        (*VAR7->VAR20)(VAR7->VAR21, ""%VAR15: %VAR15\"", VAR8->VAR22, VAR8->VAR23);
    (*VAR7->VAR20)(VAR7->VAR21, "", VAR12);
    if (VAR75 && VAR64 == 0)
    {
        if (FUN2(VAR2->VAR22, ""))
            VAR76 = VAR77;
        else if (FUN2(VAR2->VAR22, ""))
            VAR76 = -VAR77;
        else if (FUN2(VAR2->VAR22, ""))
            VAR65 = VAR77 + 1;
        else if (VAR7->VAR27 == VAR28 || VAR7->VAR27 == VAR29 || VAR7->VAR27 == VAR71)
            VAR76 = 0;
    }
}