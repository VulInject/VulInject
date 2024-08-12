static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR9->VAR12;
    VAR13 *VAR14 = VAR9->VAR14;
    VAR15 *VAR16 = VAR9->VAR16;
    int VAR17 = 0;
    int VAR18, VAR19;
    VAR5 *VAR20;
    switch (VAR2->VAR21)
    {
    case VAR22:
    case VAR23:
    case VAR24:
        VAR17 = FUN2(VAR2, VAR6, VAR14);
        break;
    case VAR25:
        VAR17 = FUN3(VAR2, VAR6, VAR14);
        break;
    case VAR26:
    case VAR27:
        VAR17 = FUN4(VAR2, VAR6, VAR14);
        break;
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
        VAR20 = FUN5();
        FUN6(VAR20, VAR6);
        VAR20->VAR34[0] = VAR6->VAR34[2];
        VAR20->VAR34[1] = VAR6->VAR34[0];
        VAR20->VAR34[2] = VAR6->VAR34[1];
        VAR20->VAR35[0] = VAR6->VAR35[2];
        VAR20->VAR35[1] = VAR6->VAR35[0];
        VAR20->VAR35[2] = VAR6->VAR35[1];
        if (VAR2->VAR21 == VAR28)
        {
            VAR17 = FUN7(VAR2, VAR20, VAR14);
        }
        else
        {
            VAR17 = FUN8(VAR2, VAR20, VAR14);
        }
        FUN9(&VAR20);
        break;
    case VAR36:
    case VAR37:
    case VAR38:
    case VAR39:
    case VAR40:
    case VAR41:
    case VAR42:
    case VAR43:
    case VAR44:
    case VAR45:
        VAR17 = FUN7(VAR2, VAR6, VAR14);
        break;
    case VAR46:
    case VAR47:
    case VAR48:
    case VAR49:
    case VAR50:
    case VAR51:
    case VAR52:
    case VAR53:
    case VAR54:
    case VAR55:
    case VAR56:
    case VAR57:
    case VAR58:
    case VAR59:
    case VAR60:
    case VAR61:
    case VAR62:
    case VAR63:
    case VAR64:
    case VAR65:
    case VAR66:
    case VAR67:
    case VAR68:
    case VAR69:
    case VAR70:
        VAR17 = FUN8(VAR2, VAR6, VAR14);
        break;
    default:
        FUN10(VAR2, VAR71, "", FUN11(VAR2->VAR21));
        return FUN12(VAR72);
        break;
    }
    if (!VAR17)
    {
        FUN10(VAR2, VAR71, "");
        return -1;
    }
    FUN13(VAR16, 0);
    if (!FUN14(VAR12, VAR16, VAR14, NULL))
    {
        FUN10(VAR2, VAR71, "");
        return -1;
    }
    VAR19 = FUN15(VAR16);
    if ((VAR18 = FUN16(VAR2, VAR4, VAR19)) < 0)
    {
        return VAR18;
    }
    memcpy(VAR4->VAR34, VAR16->VAR73, VAR19);
    VAR4->VAR74 |= VAR75;
    *VAR7 = 1;
    return 0;