FUN1(const char *VAR1, unsigned char *VAR2, unsigned char *VAR3, bfd_vma VAR4, VAR5 *VAR6)
{
    int VAR7 = 0;
    int VAR8 = VAR1[1];
    unsigned char *VAR9 = VAR3;
    int VAR10;
    const char *VAR11;
    unsigned char *VAR12;
    double VAR13;
    int VAR14;
    bfd_signed_vma VAR15;
    unsigned int VAR16;
    switch (*VAR1)
    {
    case '':
    {
        static const char *const VAR17[] = {"", "", "", ""};
        VAR7 = FUN2(VAR2, VAR8, 2, VAR6);
        (*VAR6->VAR18)(VAR6->VAR19, "", VAR17[VAR7]);
        break;
    }
    case '':
    {
        (*VAR6->VAR18)(VAR6->VAR19, "", VAR20[FUN2(VAR2, VAR8, 3, VAR6) + 8]);
        break;
    }
    case '':
    {
        VAR16 = FUN3(VAR9);
        (*VAR6->VAR21)(VAR16, VAR6);
        break;
    }
    case '':
        (*VAR6->VAR18)(VAR6->VAR19, "");
        break;
    case '':
        (*VAR6->VAR18)(VAR6->VAR19, "");
        break;
    case '':
        (*VAR6->VAR18)(VAR6->VAR19, "");
        break;
    case '':
        (*VAR6->VAR18)(VAR6->VAR19, "");
        break;
    case '':
        (*VAR6->VAR18)(VAR6->VAR19, "");
        break;
    case '':
        (*VAR6->VAR18)(VAR6->VAR19, "");
        break;
    case '':
    {
        static const struct
        {
            const char *VAR22;
            int VAR23;
        } VAR24[] = {{"", 0x000}, {"", 0x001}, {"", 0x002}, {"", 0x003}, {"", 0x004}, {"", 0x005}, {"", 0x006}, {"", 0x007}, {"", 0x008}, {"", 0x800}, {"", 0x801}, {"", 0x802}, {"", 0x803}, {"", 0x804}, {"", 0xc04}, {"", 0xc05}, {"", 0x805}, {"", 0x806}, {"", 0x807}, {"", 0x808}};
        VAR7 = FUN2(VAR2, VAR8, 12, VAR6);
        for (VAR10 = sizeof VAR24 / sizeof VAR24[0] - 1; VAR10 >= 0; VAR10--)
            if (VAR24[VAR10].VAR23 == VAR7)
            {
                (*VAR6->VAR18)(VAR6->VAR19, "", VAR24[VAR10].VAR22);
                break;
            }
        if (VAR10 < 0)
            (*VAR6->VAR18)(VAR6->VAR19, "", VAR7);
    }
    break;
    case '':
        VAR7 = FUN2(VAR2, VAR8, 3, VAR6);
        if (VAR7 == 0 && VAR1[1] != '')
            VAR7 = 8;
        (*VAR6->VAR18)(VAR6->VAR19, "", VAR7);
        break;
    case '':
        VAR7 = FUN2(VAR2, VAR8, 3, VAR6);
        if (VAR7 == 0)
            VAR7 = -1;
        (*VAR6->VAR18)(VAR6->VAR19, "", VAR7);
        break;
    case '':
        if (VAR8 == '')
        {
            static const char *const VAR25[] = {"", ""};
            VAR7 = FUN2(VAR2, VAR8, 1, VAR6);
            (*VAR6->VAR18)(VAR6->VAR19, "", VAR25[VAR7]);
        }
        else
        {
            VAR7 = FUN2(VAR2, VAR8, 8, VAR6);
            if (VAR7 & 0x80)
                VAR7 = VAR7 - 0x100;
            (*VAR6->VAR18)(VAR6->VAR19, "", VAR7);
        }
        break;
    case '':
        VAR7 = FUN2(VAR2, VAR8, 4, VAR6);
        (*VAR6->VAR18)(VAR6->VAR19, "", VAR7);
        break;
    case '':
        (*VAR6->VAR18)(VAR6->VAR19, "", VAR20[FUN2(VAR2, VAR8, 3, VAR6)]);
        break;
    case '':
        (*VAR6->VAR18)(VAR6->VAR19, "", VAR20[FUN2(VAR2, VAR8, 3, VAR6) + 010]);
        break;
    case '':
        (*VAR6->VAR18)(VAR6->VAR19, "", VAR20[FUN2(VAR2, VAR8, 4, VAR6)]);
        break;
    case '':
        VAR10 = FUN2(VAR2, VAR8, 4, VAR6);
        if (VAR10 > 7)
            (*VAR6->VAR18)(VAR6->VAR19, "", VAR20[VAR10]);
        else
            (*VAR6->VAR18)(VAR6->VAR19, "", VAR20[VAR10]);
        break;
    case '':
        (*VAR6->VAR18)(VAR6->VAR19, "", FUN2(VAR2, VAR8, 3, VAR6));
        break;
    case '':
        VAR7 = FUN2(VAR2, VAR8, 6, VAR6);
        if (VAR7 & 0x20)
            (*VAR6->VAR18)(VAR6->VAR19, "", VAR20[VAR7 & 7]);
        else
            (*VAR6->VAR18)(VAR6->VAR19, "", VAR7);
        break;
    case '':
        (*VAR6->VAR18)(VAR6->VAR19, "", VAR20[FUN2(VAR2, VAR8, 3, VAR6) + 8]);
        break;
    case '':
        (*VAR6->VAR18)(VAR6->VAR19, "", VAR20[FUN2(VAR2, VAR8, 3, VAR6) + 8]);
        break;
    case '':
        if (VAR8 == '')
            (*VAR6->VAR18)(VAR6->VAR19, "", VAR20[FUN2(VAR2, VAR8, 3, VAR6)]);
        else if (VAR8 == '')
        {
            VAR7 = FUN2(VAR2, VAR8, 7, VAR6);
            if (VAR7 > 63)
                VAR7 -= 128;
            (*VAR6->VAR18)(VAR6->VAR19, "", VAR7);
        }
        else
            return -2;
        break;
    case '':
    case '':
        VAR12 = VAR2 + (*VAR1 == '' ? 2 : 4);
        if (VAR8 == '')
            VAR7 = FUN2(VAR2, VAR8, 4, VAR6);
        else if (VAR8 == '')
            VAR7 = FUN2(VAR2, VAR8, 7, VAR6);
        else if (VAR8 == '')
            VAR7 = FUN2(VAR2, VAR8, 3, VAR6);
        else if (VAR8 == '')
            VAR7 = FUN2(VAR2, VAR8, 8, VAR6);
        else if (VAR8 == '')
            VAR7 = FUN4(VAR12);
        else if (VAR8 == '' || VAR8 == '')
            VAR7 = FUN5(VAR12);
        else if (VAR8 == '')
            VAR7 = FUN6(VAR12);
        else
            return -2;
        (*VAR6->VAR18)(VAR6->VAR19, "", VAR7);
        break;
    case '':
        if (VAR8 == '')
            VAR15 = FUN4(VAR9);
        else if (VAR8 == '')
            VAR15 = FUN7(VAR2[1]);
        else if (VAR8 == '' || VAR8 == '')
            VAR15 = FUN5(VAR9);
        else if (VAR8 == '' || VAR8 == '' || VAR8 == '')
            VAR15 = FUN6(VAR9);
        else if (VAR8 == '')
        {
            VAR15 = FUN4(VAR2);
            if (VAR15 == 0)
                VAR15 = FUN5(VAR9);
            else if (VAR15 == -1)
                VAR15 = FUN6(VAR9);
        }
        else if (VAR8 == '')
        {
            if (VAR2[1] & 0x40)
                VAR15 = FUN6(VAR9);
            else
                VAR15 = FUN5(VAR9);
        }
        else
            return -2;
        (*VAR6->VAR21)(VAR4 + VAR15, VAR6);
        break;
    case '':
        VAR7 = FUN5(VAR9);
        (*VAR6->VAR18)(VAR6->VAR19, "", VAR20[FUN2(VAR2, VAR8, 3, VAR6) + 8], VAR7);
        break;
    case '':
        (*VAR6->VAR18)(VAR6->VAR19, "", VAR26[FUN2(VAR2, VAR8, 3, VAR6)]);
        break;
    case '':
        VAR7 = FUN2(VAR2, VAR8, 2, VAR6);
        (*VAR6->VAR18)(VAR6->VAR19, "", VAR7);
        break;
    case '':
        VAR7 = FUN2(VAR2, VAR8, 1, VAR6);
        (*VAR6->VAR18)(VAR6->VAR19, "", VAR7 == 0 ? "" : "");
        break;
    case '':
        VAR7 = FUN2(VAR2, VAR8, 2, VAR6);
        if (VAR7 == 1)
            (*VAR6->VAR18)(VAR6->VAR19, "");
        else if (VAR7 == 3)
            (*VAR6->VAR18)(VAR6->VAR19, "");
        else
            return -1;
        break;
    case '':
        VAR7 = FUN2(VAR2, '', 3, VAR6);
        if (VAR7 != 1)
            (*VAR6->VAR18)(VAR6->VAR19, "", VAR7);
        break;
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
        if (VAR8 == '')
        {
            VAR7 = FUN2(VAR2, '', 6, VAR6);
            VAR7 = ((VAR7 & 7) << 3) + ((VAR7 >> 3) & 7);
        }
        else
            VAR7 = FUN2(VAR2, '', 6, VAR6);
        if (!FUN8(*VAR1, VAR7))
            return -1;
        VAR10 = (VAR7 & 7) + 8;
        VAR11 = VAR20[VAR10];
        switch (VAR7 >> 3)
        {
        case 0:
            (*VAR6->VAR18)(VAR6->VAR19, "", VAR20[VAR7]);
            break;
        case 1:
            (*VAR6->VAR18)(VAR6->VAR19, "", VAR11);
            break;
        case 2:
            (*VAR6->VAR18)(VAR6->VAR19, "", VAR11);
            break;
        case 3:
            (*VAR6->VAR18)(VAR6->VAR19, "", VAR11);
            break;
        case 4:
            (*VAR6->VAR18)(VAR6->VAR19, "", VAR11);
            break;
        case 5:
            VAR7 = FUN5(VAR9);
            (*VAR6->VAR18)(VAR6->VAR19, "", VAR11, VAR7);
            break;
        case 6:
            VAR9 = FUN9(VAR10, VAR9, VAR4, VAR6);
            break;
        case 7:
            switch (VAR7 & 7)
            {
            case 0:
                VAR7 = FUN5(VAR9);
                (*VAR6->VAR21)(VAR7, VAR6);
                break;
            case 1:
                VAR16 = FUN3(VAR9);
                (*VAR6->VAR21)(VAR16, VAR6);
                break;
            case 2:
                VAR7 = FUN5(VAR9);
                (*VAR6->VAR18)(VAR6->VAR19, "");
                (*VAR6->VAR21)(VAR4 + VAR7, VAR6);
                (*VAR6->VAR18)(VAR6->VAR19, "");
                break;
            case 3:
                VAR9 = FUN9(-1, VAR9, VAR4, VAR6);
                break;
            case 4:
                VAR14 = 1;
                switch (VAR8)
                {
                case '':
                    VAR7 = FUN4(VAR9);
                    VAR14 = 0;
                    break;
                case '':
                    VAR7 = FUN5(VAR9);
                    VAR14 = 0;
                    break;
                case '':
                    VAR7 = FUN6(VAR9);
                    VAR14 = 0;
                    break;
                case '':
                    FUN10(VAR13, VAR9);
                    break;
                case '':
                    FUN11(VAR13, VAR9);
                    break;
                case '':
                    FUN12(VAR13, VAR9);
                    break;
                case '':
                    VAR13 = FUN13(VAR9);
                    break;
                default:
                    return -1;
                }
                if (VAR14)
                    (*VAR6->VAR18)(VAR6->VAR19, "", VAR13);
                else
                    (*VAR6->VAR18)(VAR6->VAR19, "", VAR7);
                break;
            default:
                return -1;
            }
        }
        if (VAR8 == '')
        {
            VAR7 = FUN2(VAR2, VAR8, 1, VAR6);
            if (VAR7)
                VAR6->FUN14(VAR6->VAR19, "");
        }
        break;
    case '':
    case '':
        if (VAR8 == '')
        {
            char VAR27;
            VAR12 = VAR2 + 2;
            VAR7 = FUN5(VAR12);
            VAR9 = VAR12 > VAR9 ? VAR12 : VAR9;
            if (VAR7 == 0)
            {
                (*VAR6->VAR18)(VAR6->VAR19, "");
                break;
            }
            if (*VAR1 == '')
            {
                int VAR28 = 0;
                for (VAR10 = 0; VAR10 < 16; ++VAR10)
                    if (VAR7 & (0x8000 >> VAR10))
                        VAR28 |= 1 << VAR10;
                VAR7 = VAR28;
            }
            VAR7 &= 0xffff;
            VAR27 = 0;
            for (VAR10 = 0; VAR10 < 16; ++VAR10)
                if (VAR7 & (1 << VAR10))
                {
                    int VAR29;
                    if (VAR27)
                        (*VAR6->VAR18)(VAR6->VAR19, "");
                    VAR27 = 1;
                    (*VAR6->VAR18)(VAR6->VAR19, "", VAR20[VAR10]);
                    VAR29 = VAR10;
                    while (VAR7 & (1 << (VAR10 + 1)))
                        ++VAR10;
                    if (VAR10 > VAR29)
                        (*VAR6->VAR18)(VAR6->VAR19, "", VAR20[VAR10]);
                }
        }
        else if (VAR8 == '')
        {
            char VAR27;
            VAR7 = FUN2(VAR2, VAR8, 8, VAR6);
            if (VAR7 == 0)
            {
                (*VAR6->VAR18)(VAR6->VAR19, "");
                break;
            }
            if (*VAR1 == '')
            {
                int VAR28 = 0;
                for (VAR10 = 0; VAR10 < 8; ++VAR10)
                    if (VAR7 & (0x80 >> VAR10))
                        VAR28 |= 1 << VAR10;
                VAR7 = VAR28;
            }
            VAR7 &= 0xff;
            VAR27 = 0;
            for (VAR10 = 0; VAR10 < 8; ++VAR10)
                if (VAR7 & (1 << VAR10))
                {
                    int VAR29;
                    if (VAR27)
                        (*VAR6->VAR18)(VAR6->VAR19, "");
                    VAR27 = 1;
                    (*VAR6->VAR18)(VAR6->VAR19, "", VAR10);
                    VAR29 = VAR10;
                    while (VAR7 & (1 << (VAR10 + 1)))
                        ++VAR10;
                    if (VAR10 > VAR29)
                        (*VAR6->VAR18)(VAR6->VAR19, "", VAR10);
                }
        }
        else if (VAR8 == '')
        {
            (*VAR6->VAR18)(VAR6->VAR19, "", VAR26[FUN2(VAR2, VAR8, 3, VAR6)]);
        }
        else
            return -2;
        break;
    case '':
        VAR8 = '';
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    case '':
    {
        int VAR7 = FUN2(VAR2, VAR8, 5, VAR6);
        const char *VAR22 = 0;
        switch (VAR7)
        {
        case 2:
            VAR22 = "";
            break;
        case 3:
            VAR22 = "";
            break;
        case 0x10:
            VAR22 = "";
            break;
        case 0x11:
            VAR22 = "";
            break;
        case 0x12:
            VAR22 = "";
            break;
        case 0x13:
            VAR22 = "";
            break;
        case 0x14:
            VAR22 = "";
            break;
        case 0x15:
            VAR22 = "";
            break;
        case 0x16:
            VAR22 = "";
            break;
        case 0x17:
            VAR22 = "";
            break;
        case 0x18:
            VAR22 = "";
            break;
        case 0x19:
            VAR22 = "";
            break;
        case 0x1c:
        case 0x1d:
        {
            int VAR30 = ((VAR2[3] >> 2) & 7);
            (*VAR6->VAR18)(VAR6->VAR19, VAR7 == 0x1c ? "" : "", VAR30);
        }
        break;
        default:
            (*VAR6->VAR18)(VAR6->VAR19, "", VAR7);
        }
        if (VAR22)
            (*VAR6->VAR18)(VAR6->VAR19, "", VAR22);
    }
    break;
    case '':
    {
        int VAR31 = FUN2(VAR2, VAR8, 5, VAR6);
        if (VAR31 == 1)
            (*VAR6->VAR18)(VAR6->VAR19, "");
        else if (VAR31 == 0)
            (*VAR6->VAR18)(VAR6->VAR19, "");
        else
            (*VAR6->VAR18)(VAR6->VAR19, FUN15(""), VAR31);
    }
    break;
    case '':
        (*VAR6->VAR18)(VAR6->VAR19, "");
        break;
    case '':
    {
        int VAR32 = FUN2(VAR2, VAR8, 3, VAR6);
        (*VAR6->VAR18)(VAR6->VAR19, "", VAR32);
    }
    break;
    case '':
    {
        short VAR33 = 0;
        int VAR34 = FUN2(VAR2, VAR8, 5, VAR6);
        if (VAR34 & 0x10)
        {
            VAR33 = 1;
            VAR34 &= 0xf;
        }
        (*VAR6->VAR18)(VAR6->VAR19, "", VAR35[VAR34], VAR33 ? "" : "");
    }
    break;
    default:
        return -2;
    }
    return VAR9 - VAR3;
}