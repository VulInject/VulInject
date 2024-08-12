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
    VAR9 = FUN2(VAR2, VAR4, VAR6);
    if ((VAR9 == VAR25) && (VAR9 != VAR26))
        return VAR9;
    if (FUN3(VAR4))
        return VAR27;
    if (FUN4(VAR4, VAR7, VAR8) != VAR8)
        return VAR28;
    VAR10 = FUN5(&VAR7[0]);
    VAR9 = FUN5(&VAR7[2]);
    FUN6("", VAR9, VAR10);
    switch (VAR9)
    {
    case VAR29:
        FUN6("");
        break;
    case VAR30:
        FUN6("");
        break;
    case VAR31:
        FUN6("");
        break;
    case VAR25:
        FUN6("");
        break;
    case VAR32:
        FUN6("");
        break;
    case VAR33:
        FUN6("");
        break;
    default:
        FUN6("");
        VAR9 = VAR28;
        break;
    }
    while ((VAR10 > 0) && (VAR9 != VAR28))
    {
        if (FUN3(VAR4))
        {
            VAR9 = VAR27;
            break;
        }
        if (FUN4(VAR4, VAR11, VAR8) != VAR8)
        {
            VAR9 = VAR28;
            break;
        }
        VAR15 = FUN5(&VAR11[0]);
        VAR13 = VAR11[2];
        VAR14 = VAR11[3];
        VAR10 -= VAR12;
        VAR10 -= VAR15;
        if (VAR10 < 0)
        {
            FUN6("");
            VAR9 = VAR28;
            break;
        }
        FUN6("", VAR13, VAR14, VAR15);
        switch (VAR13)
        {
        case VAR34:
            FUN6("");
            FUN7(VAR4, VAR15, VAR35);
            break;
        case VAR36:
            FUN6("");
            FUN7(VAR4, VAR15, VAR35);
            break;
        case VAR37:
            FUN6("");
            if ((VAR14 > 0) || (VAR15 > 6))
            {
                FUN6("");
                VAR9 = VAR28;
                break;
            }
            if (FUN4(VAR4, VAR16, VAR15) != VAR15)
            {
                VAR9 = VAR28;
                break;
            }
            VAR2->VAR38 = 1000000.0 / (FUN8(&VAR16[0]) * FUN5(&VAR16[4]));
            VAR2->VAR39 = 90000 / VAR2->VAR38;
            FUN6("", VAR2->VAR38, FUN8(&VAR16[0]), FUN5(&VAR16[4]));
            break;
        case VAR40:
            FUN6("");
            if ((VAR14 > 1) || (VAR15 > 10))
            {
                FUN6("");
                VAR9 = VAR28;
                break;
            }
            if (FUN4(VAR4, VAR16, VAR15) != VAR15)
            {
                VAR9 = VAR28;
                break;
            }
            VAR2->VAR41 = FUN5(&VAR16[4]);
            VAR21 = FUN5(&VAR16[2]);
            VAR2->VAR42 = (VAR21 & 1) + 1;
            VAR2->VAR43 = (((VAR21 >> 1) & 1) + 1) * 8;
            if ((VAR14 == 1) && (VAR21 & 0x4))
                VAR2->VAR44 = VAR45;
            else if (VAR2->VAR43 == 16)
                VAR2->VAR44 = VAR46;
            else
                VAR2->VAR44 = VAR47;
            FUN6("", VAR2->VAR43, VAR2->VAR41, (VAR2->VAR42 == 2) ? "" : "", (VAR2->VAR44 == VAR45) ? "" : "");
            break;
        case VAR48:
            FUN6("");
            FUN7(VAR4, VAR15, VAR35);
            break;
        case VAR49:
            FUN6("");
            if ((VAR14 > 2) || (VAR15 > 8))
            {
                FUN6("");
                VAR9 = VAR28;
                break;
            }
            if (FUN4(VAR4, VAR16, VAR15) != VAR15)
            {
                VAR9 = VAR28;
                break;
            }
            VAR2->VAR50 = FUN5(&VAR16[0]) * 8;
            VAR2->VAR51 = FUN5(&VAR16[2]) * 8;
            FUN6("", VAR2->VAR50, VAR2->VAR51);
            break;
        case VAR52:
        case VAR53:
        case VAR54:
        case VAR55:
        case VAR56:
        case VAR57:
        case VAR58:
            FUN6("", VAR13);
            FUN7(VAR4, VAR15, VAR35);
            break;
        case VAR59:
            FUN6("");
            FUN7(VAR4, VAR15, VAR35);
            break;
        case VAR60:
            FUN6("");
            VAR2->VAR61 = FUN9(VAR4);
            VAR2->VAR62 = VAR15;
            FUN7(VAR4, VAR15, VAR35);
            break;
        case VAR63:
            FUN6("");
            FUN7(VAR4, VAR15, VAR35);
            break;
        case VAR64:
            FUN6("");
            FUN7(VAR4, VAR15, VAR35);
            break;
        case VAR65:
            FUN6("");
            FUN7(VAR4, VAR15, VAR35);
            break;
        case VAR66:
            FUN6("");
            if (VAR15 > 0x304)
            {
                FUN6("");
                VAR9 = VAR28;
                break;
            }
            if (FUN4(VAR4, VAR16, VAR15) != VAR15)
            {
                VAR9 = VAR28;
                break;
            }
            VAR19 = FUN5(&VAR16[0]);
            VAR20 = VAR19 + FUN5(&VAR16[2]) - 1;
            if ((VAR19 > 0xFF) || (VAR20 > 0xFF))
            {
                FUN6("", VAR19, VAR20);
                VAR9 = VAR28;
                break;
            }
            VAR18 = 4;
            for (VAR17 = VAR19; VAR17 <= VAR20; VAR17++)
            {
                VAR22 = VAR16[VAR18++] * 4;
                VAR23 = VAR16[VAR18++] * 4;
                VAR24 = VAR16[VAR18++] * 4;
                VAR2->VAR67.VAR68[VAR17] = (VAR22 << 16) | (VAR23 << 8) | (VAR24);
            }
            VAR2->VAR67.VAR69 = 1;
            break;
        case VAR70:
            FUN6("");
            FUN7(VAR4, VAR15, VAR35);
            break;
        case VAR71:
            FUN6("");
            VAR2->VAR72 = FUN9(VAR4);
            VAR2->VAR73 = VAR15;
            FUN7(VAR4, VAR15, VAR35);
            break;
        case VAR74:
            FUN6("");
            VAR2->VAR75 = FUN9(VAR4);
            VAR2->VAR76 = VAR15;
            FUN7(VAR4, VAR15, VAR35);
            break;
        default:
            FUN6("");
            VAR9 = VAR28;
            break;
        }
    }
    VAR2->VAR77 = FUN9(VAR4);
    if ((VAR9 == VAR25) || (VAR9 == VAR30))
        VAR9 = FUN2(VAR2, VAR4, VAR6);
    return VAR9;
}