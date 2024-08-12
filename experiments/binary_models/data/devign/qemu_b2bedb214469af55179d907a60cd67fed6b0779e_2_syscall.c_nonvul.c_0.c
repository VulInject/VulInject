static VAR1 FUN1(int VAR2, int VAR3, int VAR4, abi_ulong VAR5, socklen_t VAR6)
{
    abi_long VAR7;
    int VAR8;
    struct VAR9 *VAR10;
    struct VAR11 *VAR11;
    switch (VAR3)
    {
    case VAR12:
        if (VAR6 < sizeof(VAR13))
            return -VAR14;
        if (FUN2(VAR8, VAR5))
            return -VAR15;
        VAR7 = FUN3(FUN4(VAR2, VAR3, VAR4, &VAR8, sizeof(VAR8)));
        break;
    case VAR16:
        switch (VAR4)
        {
        case VAR17:
        case VAR18:
        case VAR19:
        case VAR20:
        case VAR21:
        case VAR22:
        case VAR23:
        case VAR24:
        case VAR25:
        case VAR26:
        case VAR27:
        case VAR28:
        case VAR29:
            VAR8 = 0;
            if (VAR6 >= sizeof(VAR13))
            {
                if (FUN2(VAR8, VAR5))
                    return -VAR15;
            }
            else if (VAR6 >= 1)
            {
                if (FUN5(VAR8, VAR5))
                    return -VAR15;
            }
            VAR7 = FUN3(FUN4(VAR2, VAR3, VAR4, &VAR8, sizeof(VAR8)));
            break;
        case VAR30:
        case VAR31:
            if (VAR6 < sizeof(struct VAR32) || VAR6 > sizeof(struct VAR33))
                return -VAR14;
            VAR10 = (struct VAR9 *)alloca(VAR6);
            FUN6(VAR10, VAR5, VAR6);
            VAR7 = FUN3(FUN4(VAR2, VAR3, VAR4, VAR10, VAR6));
            break;
        case VAR34:
        case VAR35:
        case VAR36:
        case VAR37:
            if (VAR6 != sizeof(struct VAR38))
                return -VAR14;
            VAR11 = FUN7(VAR39, VAR5, VAR6, 1);
            VAR7 = FUN3(FUN4(VAR2, VAR3, VAR4, VAR11, VAR6));
            FUN8(VAR11, VAR5, 0);
            break;
        default:
            goto VAR40;
        }
        break;
    case VAR41:
        switch (VAR4)
        {
        case VAR42:
            VAR4 = VAR43;
            break;
        case VAR44:
            VAR4 = VAR45;
            break;
        case VAR46:
            VAR4 = VAR47;
            break;
        case VAR48:
            VAR4 = VAR49;
            break;
        case VAR50:
            VAR4 = VAR51;
            break;
        case VAR52:
            VAR4 = VAR53;
            break;
        case VAR54:
            VAR4 = VAR55;
            break;
        case VAR56:
            VAR4 = VAR57;
            break;
        case VAR58:
            VAR4 = VAR59;
            break;
        case VAR60:
            VAR4 = VAR61;
            break;
        case VAR62:
            VAR4 = VAR63;
            break;
        case VAR64:
            VAR4 = VAR65;
            break;
        case VAR66:
            VAR4 = VAR67;
            break;
        case VAR68:
            VAR4 = VAR69;
            break;
        case VAR70:
            VAR4 = VAR71;
            break;
        case VAR72:
            VAR4 = VAR73;
            break;
        case VAR74:
            VAR4 = VAR75;
            break;
        case VAR76:
            VAR4 = VAR77;
            break;
            break;
        default:
            goto VAR40;
        }
        if (VAR6 < sizeof(VAR13))
            return -VAR14;
        if (FUN2(VAR8, VAR5))
            return -VAR15;
        VAR7 = FUN3(FUN4(VAR2, VAR78, VAR4, &VAR8, sizeof(VAR8)));
        break;
    default:
    VAR40:
        FUN9("", VAR3, VAR4);
        VAR7 = -VAR79;
    }
    return VAR7;
}