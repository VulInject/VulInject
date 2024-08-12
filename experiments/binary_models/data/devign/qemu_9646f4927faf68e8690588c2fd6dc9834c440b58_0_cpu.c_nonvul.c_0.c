void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, VAR5 *VAR6, VAR5 *VAR7, VAR5 *VAR8, VAR5 *VAR9)
{
    VAR10 *VAR11 = FUN2(VAR2);
    VAR12 *VAR13 = FUN3(VAR11);
    uint32_t VAR14;
    if (VAR3 & 0x80000000)
    {
        if (VAR3 > VAR2->VAR15)
        {
            if (VAR2->VAR16 > 0)
            {
                if (VAR3 > VAR2->VAR16)
                {
                    VAR3 = VAR2->VAR16;
                }
                else if (VAR3 < 0xC0000000)
                {
                    VAR3 = VAR2->VAR15;
                }
            }
            else
            {
                VAR3 = VAR2->VAR17;
            }
        }
    }
    else
    {
        if (VAR3 > VAR2->VAR17)
            VAR3 = VAR2->VAR17;
    }
    switch (VAR3)
    {
    case 0:
        *VAR6 = VAR2->VAR17;
        *VAR7 = VAR2->VAR18;
        *VAR9 = VAR2->VAR19;
        *VAR8 = VAR2->VAR20;
        break;
    case 1:
        *VAR6 = VAR2->VAR21;
        *VAR7 = (VAR11->VAR22 << 24) | 8 << 8;
        *VAR8 = VAR2->VAR23[VAR24];
        if ((*VAR8 & VAR25) && (VAR2->VAR26[4] & VAR27))
        {
            *VAR8 |= VAR28;
        }
        *VAR9 = VAR2->VAR23[VAR29];
        if (VAR13->VAR30 * VAR13->VAR31 > 1)
        {
            *VAR7 |= (VAR13->VAR30 * VAR13->VAR31) << 16;
            *VAR9 |= VAR32;
        }
        break;
    case 2:
        if (VAR11->VAR33)
        {
            FUN4(VAR3, 0, VAR6, VAR7, VAR8, VAR9);
            break;
        }
        *VAR6 = 1;
        *VAR7 = 0;
        if (!VAR11->VAR34)
        {
            *VAR8 = 0;
        }
        else
        {
            *VAR8 = VAR35;
        }
        *VAR9 = (VAR36 << 16) |
               (VAR37 << 8) |
               (VAR38);
        break;
    case 4:
        if (VAR11->VAR33)
        {
            FUN4(VAR3, VAR4, VAR6, VAR7, VAR8, VAR9);
            *VAR6 &= ~0xFC000000;
        }
        else
        {
            *VAR6 = 0;
            switch (VAR4)
            {
            case 0:
                *VAR6 |= VAR39 | FUN5(1) | VAR40;
                *VAR7 = (VAR41 - 1) |
                       ((VAR42 - 1) << 12) |
                       ((VAR43 - 1) << 22);
                *VAR8 = VAR44 - 1;
                *VAR9 = VAR45;
                break;
            case 1:
                *VAR6 |= VAR46 | FUN5(1) | VAR40;
                *VAR7 = (VAR47 - 1) |
                       ((VAR48 - 1) << 12) |
                       ((VAR49 - 1) << 22);
                *VAR8 = VAR50 - 1;
                *VAR9 = VAR45;
                break;
            case 2:
                *VAR6 |= VAR51 | FUN5(2) | VAR40;
                if (VAR13->VAR31 > 1)
                {
                    *VAR6 |= (VAR13->VAR31 - 1) << 14;
                }
                *VAR7 = (VAR52 - 1) |
                       ((VAR53 - 1) << 12) |
                       ((VAR54 - 1) << 22);
                *VAR8 = VAR55 - 1;
                *VAR9 = VAR45;
                break;
            case 3:
                if (!VAR11->VAR34)
                {
                    *VAR6 = 0;
                    *VAR7 = 0;
                    *VAR8 = 0;
                    *VAR9 = 0;
                    break;
                }
                *VAR6 |= VAR51 | FUN5(3) | VAR40;
                VAR14 = FUN6(VAR13->VAR30, VAR13->VAR31);
                *VAR6 |= ((1 << VAR14) - 1) << 14;
                *VAR7 = (VAR56 - 1) |
                       ((VAR57 - 1) << 12) |
                       ((VAR58 - 1) << 22);
                *VAR8 = VAR59 - 1;
                *VAR9 = VAR60 | VAR61;
                break;
            default:
                *VAR6 = 0;
                *VAR7 = 0;
                *VAR8 = 0;
                *VAR9 = 0;
                break;
            }
        }
        if ((*VAR6 & 31) && VAR13->VAR30 > 1)
        {
            *VAR6 |= (VAR13->VAR30 - 1) << 26;
        }
        break;
    case 5:
        *VAR6 = 0;
        *VAR7 = 0;
        *VAR8 = VAR62 | VAR63;
        *VAR9 = 0;
        break;
    case 6:
        *VAR6 = VAR2->VAR23[VAR64];
        *VAR7 = 0;
        *VAR8 = 0;
        *VAR9 = 0;
        break;
    case 7:
        if (VAR4 == 0)
        {
            *VAR6 = 0;
            *VAR7 = VAR2->VAR23[VAR65];
            *VAR8 = VAR2->VAR23[VAR66];
            if ((*VAR8 & VAR67) && VAR2->VAR26[4] & VAR68)
            {
                *VAR8 |= VAR69;
            }
            *VAR9 = 0;
        }
        else
        {
            *VAR6 = 0;
            *VAR7 = 0;
            *VAR8 = 0;
            *VAR9 = 0;
        }
        break;
    case 9:
        *VAR6 = 0;
        *VAR7 = 0;
        *VAR8 = 0;
        *VAR9 = 0;
        break;
    case 0xA:
        if (FUN7() && VAR11->VAR70)
        {
            VAR71 *VAR72 = VAR13->VAR73;
            *VAR6 = FUN8(VAR72, 0xA, VAR4, VAR74);
            *VAR7 = FUN8(VAR72, 0xA, VAR4, VAR75);
            *VAR8 = FUN8(VAR72, 0xA, VAR4, VAR76);
            *VAR9 = FUN8(VAR72, 0xA, VAR4, VAR77);
        }
        else
        {
            *VAR6 = 0;
            *VAR7 = 0;
            *VAR8 = 0;
            *VAR9 = 0;
        }
        break;
    case 0xB:
        if (!VAR11->VAR78)
        {
            *VAR6 = *VAR7 = *VAR8 = *VAR9 = 0;
            break;
        }
        *VAR8 = VAR4 & 0xff;
        *VAR9 = VAR11->VAR22;
        switch (VAR4)
        {
        case 0:
            *VAR6 = FUN9(VAR13->VAR30, VAR13->VAR31);
            *VAR7 = VAR13->VAR31;
            *VAR8 |= VAR79;
            break;
        case 1:
            *VAR6 = FUN6(VAR13->VAR30, VAR13->VAR31);
            *VAR7 = VAR13->VAR30 * VAR13->VAR31;
            *VAR8 |= VAR80;
            break;
        default:
            *VAR6 = 0;
            *VAR7 = 0;
            *VAR8 |= VAR81;
        }
        assert(!(*VAR6 & ~0x1f));
        *VAR7 &= 0xffff;
        break;
    case 0xD:
    {
        VAR71 *VAR72 = VAR13->VAR73;
        uint64_t VAR82;
        int VAR83;
        *VAR6 = 0;
        *VAR7 = 0;
        *VAR8 = 0;
        *VAR9 = 0;
        if (!(VAR2->VAR23[VAR24] & VAR25))
        {
            break;
        }
        if (FUN7())
        {
            VAR82 = FUN8(VAR72, 0xd, 0, VAR77);
            VAR82 <<= 32;
            VAR82 |= FUN8(VAR72, 0xd, 0, VAR74);
        }
        else
        {
            VAR82 = -1;
        }
        if (VAR4 == 0)
        {
            *VAR8 = 0x240;
            for (VAR83 = 2; VAR83 < FUN10(VAR84); VAR83++)
            {
                const VAR85 *VAR86 = &VAR84[VAR83];
                if ((VAR2->VAR23[VAR86->VAR87] & VAR86->VAR88) && ((VAR82 >> VAR83) & 1) != 0)
                {
                    if (VAR83 < 32)
                    {
                        *VAR6 |= 1u << VAR83;
                    }
                    else
                    {
                        *VAR9 |= 1u << (VAR83 - 32);
                    }
                    *VAR8 = FUN11(*VAR8, VAR86->VAR89 + VAR86->VAR90);
                }
            }
            *VAR6 |= VAR82 & (VAR91 | VAR92);
            *VAR7 = *VAR8;
        }
        else if (VAR4 == 1)
        {
            *VAR6 = VAR2->VAR23[VAR93];
        }
        else if (VAR4 < FUN10(VAR84))
        {
            const VAR85 *VAR86 = &VAR84[VAR4];
            if ((VAR2->VAR23[VAR86->VAR87] & VAR86->VAR88) && ((VAR82 >> VAR4) & 1) != 0)
            {
                *VAR6 = VAR86->VAR90;
                *VAR7 = VAR86->VAR89;
            }
        }
        break;
    }
    case 0x80000000:
        *VAR6 = VAR2->VAR15;
        *VAR7 = VAR2->VAR18;
        *VAR9 = VAR2->VAR19;
        *VAR8 = VAR2->VAR20;
        break;
    case 0x80000001:
        *VAR6 = VAR2->VAR21;
        *VAR7 = 0;
        *VAR8 = VAR2->VAR23[VAR94];
        *VAR9 = VAR2->VAR23[VAR95];
        if (VAR13->VAR30 * VAR13->VAR31 > 1)
        {
            if (VAR2->VAR18 != VAR96 || VAR2->VAR19 != VAR97 || VAR2->VAR20 != VAR98)
            {
                *VAR8 |= 1 << 1;
            }
        }
        break;
    case 0x80000002:
    case 0x80000003:
    case 0x80000004:
        *VAR6 = VAR2->VAR99[(VAR3 - 0x80000002) * 4 + 0];
        *VAR7 = VAR2->VAR99[(VAR3 - 0x80000002) * 4 + 1];
        *VAR8 = VAR2->VAR99[(VAR3 - 0x80000002) * 4 + 2];
        *VAR9 = VAR2->VAR99[(VAR3 - 0x80000002) * 4 + 3];
        break;
    case 0x80000005:
        if (VAR11->VAR33)
        {
            FUN4(VAR3, 0, VAR6, VAR7, VAR8, VAR9);
            break;
        }
        *VAR6 = (VAR100 << 24) | (VAR101 << 16) |
               (VAR102 << 8) | (VAR103);
        *VAR7 = (VAR104 << 24) | (VAR105 << 16) |
               (VAR106 << 8) | (VAR107);
        *VAR8 = (VAR108 << 24) | (VAR109 << 16) |
               (VAR110 << 8) | (VAR41);
        *VAR9 = (VAR111 << 24) | (VAR112 << 16) |
               (VAR113 << 8) | (VAR47);
        break;
    case 0x80000006:
        if (VAR11->VAR33)
        {
            FUN4(VAR3, 0, VAR6, VAR7, VAR8, VAR9);
            break;
        }
        *VAR6 = (FUN12(VAR114) << 28) |
               (VAR115 << 16) |
               (FUN12(VAR116) << 12) |
               (VAR117);
        *VAR7 = (FUN12(VAR118) << 28) |
               (VAR119 << 16) |
               (FUN12(VAR120) << 12) |
               (VAR121);
        *VAR8 = (VAR122 << 16) |
               (FUN12(VAR54) << 12) |
               (VAR123 << 8) | (VAR52);
        if (!VAR11->VAR34)
        {
            *VAR9 = ((VAR124 / 512) << 18) |
                   (FUN12(VAR125) << 12) |
                   (VAR126 << 8) | (VAR127);
        }
        else
        {
            *VAR9 = ((VAR128 / 512) << 18) |
                   (FUN12(VAR58) << 12) |
                   (VAR129 << 8) | (VAR56);
        }
        break;
    case 0x80000007:
        *VAR6 = 0;
        *VAR7 = 0;
        *VAR8 = 0;
        *VAR9 = VAR2->VAR23[VAR130];
        break;
    case 0x80000008:
        if (VAR2->VAR23[VAR95] & VAR131)
        {
            *VAR6 = 0x00003000 + VAR11->VAR132;
        }
        else
        {
            *VAR6 = VAR11->VAR132;
        }
        *VAR7 = 0;
        *VAR8 = 0;
        *VAR9 = 0;
        if (VAR13->VAR30 * VAR13->VAR31 > 1)
        {
            *VAR8 |= (VAR13->VAR30 * VAR13->VAR31) - 1;
        }
        break;
    case 0x8000000A:
        if (VAR2->VAR23[VAR94] & VAR133)
        {
            *VAR6 = 0x00000001;
            *VAR7 = 0x00000010;
            *VAR8 = 0;
            *VAR9 = VAR2->VAR23[VAR134];
        }
        else
        {
            *VAR6 = 0;
            *VAR7 = 0;
            *VAR8 = 0;
            *VAR9 = 0;
        }
        break;
    case 0xC0000000:
        *VAR6 = VAR2->VAR16;
        *VAR7 = 0;
        *VAR8 = 0;
        *VAR9 = 0;
        break;
    case 0xC0000001:
        *VAR6 = VAR2->VAR21;
        *VAR7 = 0;
        *VAR8 = 0;
        *VAR9 = VAR2->VAR23[VAR135];
        break;
    case 0xC0000002:
    case 0xC0000003:
    case 0xC0000004:
        *VAR6 = 0;
        *VAR7 = 0;
        *VAR8 = 0;
        *VAR9 = 0;
        break;
    default:
        *VAR6 = 0;
        *VAR7 = 0;
        *VAR8 = 0;
        *VAR9 = 0;
        break;
    }
}