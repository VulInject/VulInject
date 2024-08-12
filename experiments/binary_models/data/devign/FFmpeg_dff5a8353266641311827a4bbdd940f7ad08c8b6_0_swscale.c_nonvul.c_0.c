FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, VAR11 *VAR12)
{
    enum PixelFormat VAR13 = VAR2->VAR13;
    if (VAR13 == VAR14 || VAR13 == VAR15)
    {
        *VAR6 = VAR16;
    }
    else if (FUN2(VAR13))
    {
        *VAR6 = FUN3(VAR13) ? VAR17 : VAR18;
    }
    else if (FUN4(VAR13))
    {
        if (VAR19[VAR13].VAR20[0].VAR21 == 8)
        {
            *VAR6 = FUN3(VAR13) ? VAR22 : VAR23;
        }
        else
        {
            *VAR6 = FUN3(VAR13) ? VAR24 : VAR25;
        }
    }
    else
    {
        *VAR4 = VAR26;
        *VAR6 = VAR27;
    }
    if (VAR2->VAR28 & VAR29)
    {
        switch (VAR13)
        {
        case VAR30:
            *VAR12 = VAR31;
            if (VAR2->VAR32)
            {
                *VAR12 = VAR31;
            }
            else
            {
                *VAR12 = VAR33;
            }
            break;
        case VAR34:
            *VAR12 = VAR35;
            if (VAR2->VAR32)
            {
                *VAR12 = VAR35;
            }
            else
            {
                *VAR12 = VAR36;
            }
            break;
        case VAR37:
            *VAR12 = VAR38;
            if (VAR2->VAR32)
            {
                *VAR12 = VAR38;
            }
            else
            {
                *VAR12 = VAR39;
            }
            break;
        case VAR40:
            *VAR12 = VAR41;
            if (VAR2->VAR32)
            {
                *VAR12 = VAR41;
            }
            else
            {
                *VAR12 = VAR42;
            }
            break;
        case VAR43:
            *VAR12 = VAR44;
            break;
        case VAR45:
            *VAR12 = VAR46;
            break;
        }
    }
    else
    {
        switch (VAR13)
        {
        case VAR47:
            *VAR8 = VAR48;
            *VAR10 = VAR49;
            *VAR12 = VAR50;
            break;
        case VAR51:
            *VAR8 = VAR52;
            *VAR10 = VAR53;
            *VAR12 = VAR54;
            break;
        case VAR55:
            *VAR8 = VAR56;
            *VAR10 = VAR57;
            *VAR12 = VAR58;
            break;
        case VAR59:
            *VAR8 = VAR60;
            *VAR10 = VAR61;
            *VAR12 = VAR62;
            break;
        case VAR63:
            *VAR8 = VAR64;
            *VAR10 = VAR65;
            *VAR12 = VAR66;
            break;
        case VAR67:
            *VAR8 = VAR68;
            *VAR10 = VAR69;
            *VAR12 = VAR70;
            break;
        case VAR71:
            /
            {
                *VAR8 = VAR72;
                *VAR10 = VAR73;
                *VAR12 = VAR74;
            }
            break;
        case VAR75:
        case VAR76:
            *VAR8 = VAR77;
            *VAR10 = VAR78;
            *VAR12 = VAR79;
            if (VAR2->VAR32)
            {
                *VAR8 = VAR80;
                *VAR10 = VAR81;
                *VAR12 = VAR82;
            }
            else
            {
                *VAR8 = VAR83;
                *VAR10 = VAR84;
                *VAR12 = VAR85;
            }
            break;
        case VAR43:
            *VAR8 = VAR86;
            *VAR10 = VAR87;
            *VAR12 = VAR88;
            break;
        case VAR45:
            *VAR8 = VAR89;
            *VAR10 = VAR90;
            *VAR12 = VAR91;
            break;
        case VAR92:
        case VAR93:
        case VAR94:
        case VAR95:
            *VAR8 = VAR96;
            *VAR10 = VAR97;
            *VAR12 = VAR98;
            break;
        case VAR99:
        case VAR100:
        case VAR101:
        case VAR102:
            *VAR8 = VAR103;
            *VAR10 = VAR104;
            *VAR12 = VAR105;
            break;
        case VAR106:
        case VAR107:
        case VAR108:
        case VAR109:
            *VAR8 = VAR110;
            *VAR10 = VAR111;
            *VAR12 = VAR112;
            break;
        case VAR113:
        case VAR114:
            *VAR8 = VAR115;
            *VAR10 = VAR116;
            *VAR12 = VAR117;
            break;
        case VAR118:
        case VAR119:
            *VAR8 = VAR120;
            *VAR10 = VAR121;
            *VAR12 = VAR122;
            break;
        case VAR123:
        case VAR124:
            *VAR8 = VAR125;
            *VAR10 = VAR126;
            *VAR12 = VAR127;
            break;
        }
    }
}