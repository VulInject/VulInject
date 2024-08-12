void FUN1(char *VAR1, int VAR2, VAR3 *VAR4, int VAR5)
{
    const char *VAR6;
    VAR7 *VAR8;
    char VAR9[32];
    int VAR10;
    AVRational VAR11;
    if (VAR5)
        VAR8 = FUN2(VAR4->VAR12);
    else
        VAR8 = FUN3(VAR4->VAR12);
    if (VAR8)
    {
        VAR6 = VAR8->VAR13;
    }
    else if (VAR4->VAR12 == VAR14)
    {
        VAR6 = "";
    }
    else if (VAR4->VAR6[0] != '')
    {
        VAR6 = VAR4->VAR6;
    }
    else
    {
        if (FUN4(VAR4->VAR15 & 0xFF) && FUN4((VAR4->VAR15 >> 8) & 0xFF) && FUN4((VAR4->VAR15 >> 16) & 0xFF) && FUN4((VAR4->VAR15 >> 24) & 0xFF))
        {
            snprintf(VAR9, sizeof(VAR9), "", VAR4->VAR15 & 0xff, (VAR4->VAR15 >> 8) & 0xff, (VAR4->VAR15 >> 16) & 0xff, (VAR4->VAR15 >> 24) & 0xff, VAR4->VAR15);
        }
        else
        {
            snprintf(VAR9, sizeof(VAR9), "", VAR4->VAR15);
        }
        VAR6 = VAR9;
    }
    switch (VAR4->VAR16)
    {
    case VAR17:
        snprintf(VAR1, VAR2, "", VAR6, VAR4->VAR18 ? "" : "");
        if (VAR4->VAR19 != VAR20)
        {
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", FUN5(VAR4->VAR19));
        }
        if (VAR4->VAR21)
        {
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR4->VAR21, VAR4->VAR22);
            if (VAR4->VAR23.VAR24)
            {
                FUN6(&VAR11.VAR24, &VAR11.VAR25, VAR4->VAR21 * VAR4->VAR23.VAR24, VAR4->VAR22 * VAR4->VAR23.VAR25, 1024 * 1024);
                snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR4->VAR23.VAR24, VAR4->VAR23.VAR25, VAR11.VAR24, VAR11.VAR25);
            }
            if (FUN7() >= VAR26)
            {
                int VAR27 = FUN8(VAR4->VAR28.VAR24, VAR4->VAR28.VAR25);
                snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR4->VAR28.VAR24 / VAR27, VAR4->VAR28.VAR25 / VAR27);
            }
        }
        if (VAR5)
        {
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR4->VAR29, VAR4->VAR30);
        }
        VAR10 = VAR4->VAR31;
        break;
    case VAR32:
        snprintf(VAR1, VAR2, "", VAR6);
        if (VAR4->VAR33)
        {
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR4->VAR33);
        }
        FUN9(VAR1, "", VAR2);
        FUN10(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), VAR4->VAR34, VAR4->VAR35);
        if (VAR4->VAR36 != VAR37)
        {
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", FUN11(VAR4->VAR36));
        }
        switch (VAR4->VAR12)
        {
        case VAR38:
        case VAR39:
            VAR10 = VAR4->VAR33 * VAR4->VAR34 * 64;
            break;
        case VAR40:
        case VAR41:
        case VAR42:
        case VAR43:
        case VAR44:
        case VAR45:
            VAR10 = VAR4->VAR33 * VAR4->VAR34 * 32;
            break;
        case VAR46:
        case VAR47:
        case VAR48:
        case VAR49:
        case VAR50:
            VAR10 = VAR4->VAR33 * VAR4->VAR34 * 24;
            break;
        case VAR51:
        case VAR52:
        case VAR53:
        case VAR54:
        case VAR55:
            VAR10 = VAR4->VAR33 * VAR4->VAR34 * 16;
            break;
        case VAR56:
        case VAR57:
        case VAR58:
        case VAR59:
        case VAR60:
            VAR10 = VAR4->VAR33 * VAR4->VAR34 * 8;
            break;
        default:
            VAR10 = VAR4->VAR31;
            break;
        }
        break;
    case VAR61:
        snprintf(VAR1, VAR2, "", VAR6);
        VAR10 = VAR4->VAR31;
        break;
    case VAR62:
        snprintf(VAR1, VAR2, "", VAR6);
        VAR10 = VAR4->VAR31;
        break;
    case VAR63:
        snprintf(VAR1, VAR2, "", VAR6);
        VAR10 = VAR4->VAR31;
        break;
    default:
        snprintf(VAR1, VAR2, "", VAR4->VAR16);
        return;
    }
    if (VAR5)
    {
        if (VAR4->VAR64 & VAR65)
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "");
        if (VAR4->VAR64 & VAR66)
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "");
    }
    if (VAR10 != 0)
    {
        snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR10 / 1000);
    }
}