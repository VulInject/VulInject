static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    unsigned char VAR7[VAR8];
    int VAR9;
    int VAR10;
    unsigned char VAR11[VAR12];
    unsigned char VAR13;
    unsigned char VAR14;
    int VAR15;
    unsigned char VAR16[1024];
    int VAR17, VAR18;
    int VAR19, VAR20;
    int VAR21;
    unsigned char VAR22, VAR23, VAR24;
    unsigned int VAR25, VAR26;
    VAR9 = FUN2(VAR2, VAR4, VAR6);
    if (VAR9 != VAR27)
        return VAR9;
    if (FUN3(VAR4))
        return VAR28;
    if (FUN4(VAR4, VAR7, VAR8) != VAR8)
        return VAR29;
    VAR10 = FUN5(&VAR7[0]);
    VAR9 = FUN5(&VAR7[2]);
    FUN6(VAR2->VAR30, VAR31, "", VAR9, VAR10);
    switch (VAR9)
    {
    case VAR32:
        FUN6(VAR2->VAR30, VAR31, "");
        break;
    case VAR33:
        FUN6(VAR2->VAR30, VAR31, "");
        break;
    case VAR34:
        FUN6(VAR2->VAR30, VAR31, "");
        break;
    case VAR35:
        FUN6(VAR2->VAR30, VAR31, "");
        break;
    case VAR36:
        FUN6(VAR2->VAR30, VAR31, "");
        break;
    case VAR37:
        FUN6(VAR2->VAR30, VAR31, "");
        break;
    default:
        FUN6(VAR2->VAR30, VAR31, "");
        VAR9 = VAR29;
        break;
    }
    while ((VAR10 > 0) && (VAR9 != VAR29))
    {
        if (FUN3(VAR4))
        {
            VAR9 = VAR28;
            break;
        }
        if (FUN4(VAR4, VAR11, VAR8) != VAR8)
        {
            VAR9 = VAR29;
            break;
        }
        VAR15 = FUN5(&VAR11[0]);
        VAR13 = VAR11[2];
        VAR14 = VAR11[3];
        VAR10 -= VAR12;
        VAR10 -= VAR15;
        if (VAR10 < 0)
        {
            FUN6(VAR2->VAR30, VAR31, "");
            VAR9 = VAR29;
            break;
        }
        FUN6(VAR2->VAR30, VAR31, "", VAR13, VAR14, VAR15);
        switch (VAR13)
        {
        case VAR38:
            FUN6(VAR2->VAR30, VAR31, "");
            FUN7(VAR4, VAR15);
            break;
        case VAR39:
            FUN6(VAR2->VAR30, VAR31, "");
            FUN7(VAR4, VAR15);
            break;
        case VAR40:
            FUN6(VAR2->VAR30, VAR31, "");
            if ((VAR14 > 0) || (VAR15 != 6))
            {
                FUN6(VAR2->VAR30, VAR31, "");
                VAR9 = VAR29;
                break;
            }
            if (FUN4(VAR4, VAR16, VAR15) != VAR15)
            {
                VAR9 = VAR29;
                break;
            }
            VAR2->VAR41 = ((VAR42)FUN8(&VAR16[0])) * FUN5(&VAR16[4]);
            break;
        case VAR43:
            FUN6(VAR2->VAR30, VAR31, "");
            if (VAR14 > 1 || VAR15 > 10 || VAR15 < 6)
            {
                FUN6(VAR2->VAR30, VAR31, "");
                VAR9 = VAR29;
                break;
            }
            if (FUN4(VAR4, VAR16, VAR15) != VAR15)
            {
                VAR9 = VAR29;
                break;
            }
            VAR2->VAR44 = FUN5(&VAR16[4]);
            VAR21 = FUN5(&VAR16[2]);
            VAR2->VAR45 = (VAR21 & 1) + 1;
            VAR2->VAR46 = (((VAR21 >> 1) & 1) + 1) * 8;
            if ((VAR14 == 1) && (VAR21 & 0x4))
                VAR2->VAR47 = VAR48;
            else if (VAR2->VAR46 == 16)
                VAR2->VAR47 = VAR49;
            else
                VAR2->VAR47 = VAR50;
            FUN6(VAR2->VAR30, VAR31, "", VAR2->VAR46, VAR2->VAR44, (VAR2->VAR45 == 2) ? "" : "", (VAR2->VAR47 == VAR48) ? "" : "");
            break;
        case VAR51:
            FUN6(VAR2->VAR30, VAR31, "");
            FUN7(VAR4, VAR15);
            break;
        case VAR52:
            FUN6(VAR2->VAR30, VAR31, "");
            if ((VAR14 > 2) || (VAR15 > 8) || VAR15 < 4 || VAR14 == 2 && VAR15 < 8)
            {
                FUN6(VAR2->VAR30, VAR31, "");
                VAR9 = VAR29;
                break;
            }
            if (FUN4(VAR4, VAR16, VAR15) != VAR15)
            {
                VAR9 = VAR29;
                break;
            }
            VAR25 = FUN5(&VAR16[0]) * 8;
            VAR26 = FUN5(&VAR16[2]) * 8;
            if (VAR25 != VAR2->VAR53)
            {
                VAR2->VAR53 = VAR25;
                VAR2->VAR54++;
            }
            if (VAR26 != VAR2->VAR55)
            {
                VAR2->VAR55 = VAR26;
                VAR2->VAR54++;
            }
            if (VAR14 < 2 || !FUN5(&VAR16[6]))
            {
                VAR2->VAR56 = 8;
            }
            else
            {
                VAR2->VAR56 = 16;
            }
            FUN6(VAR2->VAR30, VAR31, "", VAR2->VAR53, VAR2->VAR55);
            break;
        case VAR57:
        case VAR58:
        case VAR59:
        case VAR60:
        case VAR61:
        case VAR62:
            FUN6(VAR2->VAR30, VAR31, "", VAR13);
            FUN7(VAR4, VAR15);
            break;
        case VAR63:
            FUN6(VAR2->VAR30, VAR31, "");
            FUN7(VAR4, VAR15);
            VAR2->VAR64 = 1;
            break;
        case VAR65:
            FUN6(VAR2->VAR30, VAR31, "");
            VAR2->VAR66 = FUN9(VAR4);
            VAR2->VAR67 = VAR15;
            FUN7(VAR4, VAR15);
            break;
        case VAR68:
            FUN6(VAR2->VAR30, VAR31, "");
            FUN7(VAR4, VAR15);
            break;
        case VAR69:
            FUN6(VAR2->VAR30, VAR31, "");
            FUN7(VAR4, VAR15);
            break;
        case VAR70:
            FUN6(VAR2->VAR30, VAR31, "");
            FUN7(VAR4, VAR15);
            break;
        case VAR71:
            FUN6(VAR2->VAR30, VAR31, "");
            if (VAR15 > 0x304 || VAR15 < 4)
            {
                FUN6(VAR2->VAR30, VAR31, "");
                VAR9 = VAR29;
                break;
            }
            if (FUN4(VAR4, VAR16, VAR15) != VAR15)
            {
                VAR9 = VAR29;
                break;
            }
            VAR19 = FUN5(&VAR16[0]);
            VAR20 = VAR19 + FUN5(&VAR16[2]) - 1;
            if ((VAR19 > 0xFF) || (VAR20 > 0xFF) || (VAR20 - VAR19 + 1) * 3 + 4 > VAR15)
            {
                FUN6(VAR2->VAR30, VAR31, "", VAR19, VAR20);
                VAR9 = VAR29;
                break;
            }
            VAR18 = 4;
            for (VAR17 = VAR19; VAR17 <= VAR20; VAR17++)
            {
                VAR22 = VAR16[VAR18++] * 4;
                VAR23 = VAR16[VAR18++] * 4;
                VAR24 = VAR16[VAR18++] * 4;
                VAR2->VAR72[VAR17] = (0xFFU << 24) | (VAR22 << 16) | (VAR23 << 8) | (VAR24);
                VAR2->VAR72[VAR17] |= VAR2->VAR72[VAR17] >> 6 & 0x30303;
            }
            VAR2->VAR73 = 1;
            break;
        case VAR74:
            FUN6(VAR2->VAR30, VAR31, "");
            FUN7(VAR4, VAR15);
            break;
        case VAR75:
            FUN6(VAR2->VAR30, VAR31, "");
            VAR2->VAR76 = FUN9(VAR4);
            VAR2->VAR77 = VAR15;
            FUN7(VAR4, VAR15);
            break;
        case VAR78:
            FUN6(VAR2->VAR30, VAR31, "");
            VAR2->VAR79 = 0x06;
            VAR2->VAR80 = FUN9(VAR4);
            VAR2->VAR81 = VAR15;
            FUN7(VAR4, VAR15);
            break;
        case VAR82:
            FUN6(VAR2->VAR30, VAR31, "");
            VAR2->VAR79 = 0x11;
            VAR2->VAR80 = FUN9(VAR4);
            VAR2->VAR81 = VAR15;
            FUN7(VAR4, VAR15);
            break;
        default:
            FUN6(VAR2->VAR30, VAR31, "");
            VAR9 = VAR29;
            break;
        }
    }
    if (VAR2->VAR30->VAR83 == 1 && VAR2->VAR47)
        FUN10(VAR2->VAR30);
    VAR2->VAR84 = FUN9(VAR4);
    if ((VAR9 == VAR35) || (VAR9 == VAR33))
        VAR9 = FUN2(VAR2, VAR4, VAR6);
    return VAR9;
}