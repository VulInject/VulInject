void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, VAR5 *VAR6, VAR5 *VAR7, VAR5 *VAR8, VAR5 *VAR9)
{
    VAR10 *VAR11 = FUN2(VAR2);
    VAR12 *VAR13 = FUN3(VAR11);
    if (VAR3 & 0x80000000)
    {
        if (VAR3 > VAR2->VAR14)
        {
            if (VAR2->VAR15 > 0)
            {
                if (VAR3 > VAR2->VAR15)
                {
                    VAR3 = VAR2->VAR15;
                }
                else if (VAR3 < 0xC0000000)
                {
                    VAR3 = VAR2->VAR14;
                }
                else
                {
                    VAR3 = VAR2->VAR16;
                }
                else
                {
                    if (VAR3 > VAR2->VAR16)
                        VAR3 = VAR2->VAR16;
                    switch (VAR3)
                    {
                    case 0:
                        *VAR6 = VAR2->VAR16;
                        FUN4(VAR2, VAR7, VAR8, VAR9);
                    case 1:
                        *VAR6 = VAR2->VAR17;
                        *VAR7 = (VAR2->VAR18 << 24) | 8 << 8;
                        *VAR8 = VAR2->VAR19[VAR20];
                        *VAR9 = VAR2->VAR19[VAR21];
                        if (VAR13->VAR22 * VAR13->VAR23 > 1)
                        {
                            *VAR7 |= (VAR13->VAR22 * VAR13->VAR23) << 16;
                            *VAR9 |= 1 << 28;
                        case 2:
                            FUN5(VAR3, 0, VAR6, VAR7, VAR8, VAR9);
                            *VAR6 = 1;
                            *VAR7 = 0;
                            *VAR8 = 0;
                            *VAR9 = (VAR24 << 16) | (VAR25 << 8) | (VAR26);
                        case 4:
                            if (VAR13->VAR22 > 1)
                            {
                                *VAR6 = (VAR13->VAR22 - 1) << 26;
                            }
                            else
                            {
                                *VAR6 = 0;
                                switch (VAR4)
                                {
                                case 0:
                                    *VAR6 |= VAR27 | FUN6(1) | VAR28;
                                    *VAR7 = (VAR29 - 1) | ((VAR30 - 1) << 12) | ((VAR31 - 1) << 22);
                                    *VAR8 = VAR32 - 1;
                                    *VAR9 = VAR33;
                                case 1:
                                    *VAR6 |= VAR34 | FUN6(1) | VAR28;
                                    *VAR7 = (VAR35 - 1) | ((VAR36 - 1) << 12) | ((VAR37 - 1) << 22);
                                    *VAR8 = VAR38 - 1;
                                    *VAR9 = VAR33;
                                case 2:
                                    *VAR6 |= VAR39 | FUN6(2) | VAR28;
                                    if (VAR13->VAR23 > 1)
                                    {
                                        *VAR6 |= (VAR13->VAR23 - 1) << 14;
                                        *VAR7 = (VAR40 - 1) | ((VAR41 - 1) << 12) | ((VAR42 - 1) << 22);
                                        *VAR8 = VAR43 - 1;
                                        *VAR9 = VAR33;
                                    default:
                                        *VAR6 = 0;
                                        *VAR7 = 0;
                                        *VAR8 = 0;
                                        *VAR9 = 0;
                                    case 5:
                                        *VAR6 = 0;
                                        *VAR7 = 0;
                                        *VAR8 = VAR44 | VAR45;
                                        *VAR9 = 0;
                                    case 6:
                                        *VAR6 = 0;
                                        *VAR7 = 0;
                                        *VAR8 = 0;
                                        *VAR9 = 0;
                                    case 7:
                                        if (VAR4 == 0)
                                        {
                                            *VAR6 = 0;
                                            *VAR7 = VAR2->VAR19[VAR46];
                                            *VAR8 = 0;
                                            *VAR9 = 0;
                                        }
                                        else
                                        {
                                            *VAR6 = 0;
                                            *VAR7 = 0;
                                            *VAR8 = 0;
                                            *VAR9 = 0;
                                        case 9:
                                            *VAR6 = 0;
                                            *VAR7 = 0;
                                            *VAR8 = 0;
                                            *VAR9 = 0;
                                        case 0xA:
                                            if (FUN7() && VAR11->VAR47)
                                            {
                                                VAR48 *VAR49 = VAR13->VAR50;
                                                *VAR6 = FUN8(VAR49, 0xA, VAR4, VAR51);
                                                *VAR7 = FUN8(VAR49, 0xA, VAR4, VAR52);
                                                *VAR8 = FUN8(VAR49, 0xA, VAR4, VAR53);
                                                *VAR9 = FUN8(VAR49, 0xA, VAR4, VAR54);
                                            }
                                            else
                                            {
                                                *VAR6 = 0;
                                                *VAR7 = 0;
                                                *VAR8 = 0;
                                                *VAR9 = 0;
                                            case 0xD:
                                                if (!(VAR2->VAR19[VAR20] & VAR55))
                                                {
                                                    *VAR6 = 0;
                                                    *VAR7 = 0;
                                                    *VAR8 = 0;
                                                    *VAR9 = 0;
                                                    if (FUN7())
                                                    {
                                                        VAR48 *VAR49 = VAR13->VAR50;
                                                        *VAR6 = FUN8(VAR49, 0xd, VAR4, VAR51);
                                                        *VAR7 = FUN8(VAR49, 0xd, VAR4, VAR52);
                                                        *VAR8 = FUN8(VAR49, 0xd, VAR4, VAR53);
                                                        *VAR9 = FUN8(VAR49, 0xd, VAR4, VAR54);
                                                    }
                                                    else
                                                    {
                                                        *VAR6 = 0;
                                                        *VAR7 = 0;
                                                        *VAR8 = 0;
                                                        *VAR9 = 0;
                                                    case 0x80000000:
                                                        *VAR6 = VAR2->VAR14;
                                                        *VAR7 = VAR2->VAR56;
                                                        *VAR9 = VAR2->VAR57;
                                                        *VAR8 = VAR2->VAR58;
                                                    case 0x80000001:
                                                        *VAR6 = VAR2->VAR17;
                                                        *VAR7 = 0;
                                                        *VAR8 = VAR2->VAR19[VAR59];
                                                        *VAR9 = VAR2->VAR19[VAR60];
                                                        if (VAR13->VAR22 * VAR13->VAR23 > 1)
                                                        {
                                                            uint32_t VAR61, VAR62, VAR63;
                                                            FUN4(VAR2, &VAR61, &VAR62, &VAR63);
                                                            if (VAR61 != VAR64 || VAR63 != VAR65 || VAR62 != VAR66)
                                                            {
                                                                *VAR8 |= 1 << 1;
                                                            case 0x80000002:
                                                            case 0x80000003:
                                                            case 0x80000004:
                                                                *VAR6 = VAR2->VAR67[(VAR3 - 0x80000002) * 4 + 0];
                                                                *VAR7 = VAR2->VAR67[(VAR3 - 0x80000002) * 4 + 1];
                                                                *VAR8 = VAR2->VAR67[(VAR3 - 0x80000002) * 4 + 2];
                                                                *VAR9 = VAR2->VAR67[(VAR3 - 0x80000002) * 4 + 3];
                                                            case 0x80000005:
                                                                FUN5(VAR3, 0, VAR6, VAR7, VAR8, VAR9);
                                                                *VAR6 = (VAR68 << 24) | (VAR69 << 16) | (VAR70 << 8) | (VAR71);
                                                                *VAR7 = (VAR72 << 24) | (VAR73 << 16) | (VAR74 << 8) | (VAR75);
                                                                *VAR8 = (VAR76 << 24) | (VAR77 << 16) | (VAR78 << 8) | (VAR29);
                                                                *VAR9 = (VAR79 << 24) | (VAR80 << 16) | (VAR81 << 8) | (VAR35);
                                                            case 0x80000006:
                                                                FUN5(VAR3, 0, VAR6, VAR7, VAR8, VAR9);
                                                                *VAR6 = (FUN9(VAR82) << 28) | (VAR83 << 16) | (FUN9(VAR84) << 12) | (VAR85);
                                                                *VAR7 = (FUN9(VAR86) << 28) | (VAR87 << 16) | (FUN9(VAR88) << 12) | (VAR89);
                                                                *VAR8 = (VAR90 << 16) | (FUN9(VAR42) << 12) | (VAR91 << 8) | (VAR40);
                                                                *VAR9 = ((VAR92 / 512) << 18) | (FUN9(VAR93) << 12) | (VAR94 << 8) | (VAR95);
                                                            case 0x80000008:
                                                                if (VAR2->VAR19[VAR60] & VAR96)
                                                                {
                                                                    *VAR6 = 0x00003028;
                                                                }
                                                                else
                                                                {
                                                                    if (VAR2->VAR19[VAR21] & VAR97)
                                                                    {
                                                                        *VAR6 = 0x00000024;
                                                                    }
                                                                    else
                                                                    {
                                                                        *VAR6 = 0x00000020;
                                                                        *VAR7 = 0;
                                                                        *VAR8 = 0;
                                                                        *VAR9 = 0;
                                                                        if (VAR13->VAR22 * VAR13->VAR23 > 1)
                                                                        {
                                                                            *VAR8 |= (VAR13->VAR22 * VAR13->VAR23) - 1;
                                                                        case 0x8000000A:
                                                                            if (VAR2->VAR19[VAR59] & VAR98)
                                                                            {
                                                                                *VAR6 = 0x00000001;
                                                                                *VAR7 = 0x00000010;
                                                                                *VAR8 = 0;
                                                                                *VAR9 = VAR2->VAR19[VAR99];
                                                                            }
                                                                            else
                                                                            {
                                                                                *VAR6 = 0;
                                                                                *VAR7 = 0;
                                                                                *VAR8 = 0;
                                                                                *VAR9 = 0;
                                                                            case 0xC0000000:
                                                                                *VAR6 = VAR2->VAR15;
                                                                                *VAR7 = 0;
                                                                                *VAR8 = 0;
                                                                                *VAR9 = 0;
                                                                            case 0xC0000001:
                                                                                *VAR6 = VAR2->VAR17;
                                                                                *VAR7 = 0;
                                                                                *VAR8 = 0;
                                                                                *VAR9 = VAR2->VAR19[VAR100];
                                                                            case 0xC0000002:
                                                                            case 0xC0000003:
                                                                            case 0xC0000004:
                                                                                *VAR6 = 0;
                                                                                *VAR7 = 0;
                                                                                *VAR8 = 0;
                                                                                *VAR9 = 0;
                                                                            default:
                                                                                *VAR6 = 0;
                                                                                *VAR7 = 0;
                                                                                *VAR8 = 0;
                                                                                *VAR9 = 0;