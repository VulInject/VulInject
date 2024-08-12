static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    VAR7 *VAR8 = FUN2(VAR7, VAR9, VAR6->VAR10);
    uint64_t VAR11;
    int VAR12 = 0;
    int VAR13;
    switch (VAR6->VAR14.VAR15[0])
    {
    case VAR16:
        if (!FUN3(VAR8->VAR17))
            goto VAR18;
        break;
    case VAR19:
        if (VAR6->VAR14.VAR20 < 4)
            goto VAR21;
        VAR12 = FUN4(&VAR8->VAR9, VAR4, VAR6->VAR14.VAR20, (VAR6->VAR14.VAR15[1] & 1) == 0);
        break;
    case VAR22:
        VAR12 = FUN5(VAR6, VAR4);
        if (VAR12 < 0)
            goto VAR21;
        break;
    case VAR23:
    case VAR24:
        VAR12 = FUN6(VAR6, VAR4);
        if (VAR12 < 0)
            goto VAR21;
        break;
    case VAR25:
        VAR12 = FUN7(VAR6, VAR4);
        if (VAR12 < 0)
            goto VAR21;
        break;
    case VAR26:
        if (VAR6->VAR14.VAR15[1] & 1)
            goto VAR21;
        break;
    case VAR27:
        if (VAR6->VAR14.VAR15[1] & 3)
            goto VAR21;
        break;
    case VAR28:
        if (VAR6->VAR14.VAR15[1] & 1)
            goto VAR21;
        break;
    case VAR29:
        if (VAR6->VAR14.VAR15[1] & 3)
            goto VAR21;
        break;
    case VAR30:
        if (VAR8->VAR9.VAR31 == VAR32 && (VAR6->VAR14.VAR15[4] & 2))
        {
            FUN8(VAR8->VAR17, !(VAR6->VAR14.VAR15[4] & 1));
        }
        break;
    case VAR33:
        FUN9(VAR8->VAR17, VAR6->VAR14.VAR15[4] & 1);
        break;
    case VAR34:
        memset(VAR4, 0, 8);
        FUN10(VAR8->VAR17, &VAR11);
        if (!VAR11)
            goto VAR18;
        VAR11 /= VAR8->VAR35;
        VAR11--;
        VAR8->VAR36 = VAR11;
        if (VAR11 > VAR37)
            VAR11 = VAR37;
        VAR4[0] = (VAR11 >> 24) & 0xff;
        VAR4[1] = (VAR11 >> 16) & 0xff;
        VAR4[2] = (VAR11 >> 8) & 0xff;
        VAR4[3] = VAR11 & 0xff;
        VAR4[4] = 0;
        VAR4[5] = 0;
        VAR4[6] = VAR8->VAR35 * 2;
        VAR4[7] = 0;
        VAR12 = 8;
        break;
    case VAR38:
        VAR13 = FUN11(VAR8->VAR17);
        if (VAR13 < 0)
        {
            if (FUN12(VAR2, -VAR13, VAR39))
            {
                return -1;
            }
        }
        break;
    case VAR40:
        memset(VAR4, 0, 8);
        VAR4[7] = 8;
        VAR12 = 8;
        break;
    case VAR41:
        if ((VAR6->VAR14.VAR15[1] & 31) == 0x10)
        {
            FUN13("");
            memset(VAR4, 0, VAR6->VAR14.VAR20);
            FUN10(VAR8->VAR17, &VAR11);
            if (!VAR11)
                goto VAR18;
            VAR11 /= VAR8->VAR35;
            VAR11--;
            VAR8->VAR36 = VAR11;
            VAR4[0] = (VAR11 >> 56) & 0xff;
            VAR4[1] = (VAR11 >> 48) & 0xff;
            VAR4[2] = (VAR11 >> 40) & 0xff;
            VAR4[3] = (VAR11 >> 32) & 0xff;
            VAR4[4] = (VAR11 >> 24) & 0xff;
            VAR4[5] = (VAR11 >> 16) & 0xff;
            VAR4[6] = (VAR11 >> 8) & 0xff;
            VAR4[7] = VAR11 & 0xff;
            VAR4[8] = 0;
            VAR4[9] = 0;
            VAR4[10] = VAR8->VAR35 * 2;
            VAR4[11] = 0;
            VAR4[12] = 0;
            VAR4[13] = FUN14(&VAR8->VAR9.VAR42);
            if (VAR8->VAR9.VAR42.VAR43)
            {
                VAR4[14] = 0x80;
            }
            VAR12 = VAR6->VAR14.VAR20;
            break;
        }
        FUN13("");
        goto VAR21;
    case VAR44:
        break;
    default:
        FUN15(VAR2, FUN16(VAR45));
        return -1;
    }
    return VAR12;
VAR18:
    if (!FUN3(VAR8->VAR17))
    {
        FUN15(VAR2, FUN16(VAR46));
    }
    else
    {
        FUN15(VAR2, FUN16(VAR47));
    }
    return -1;
VAR21:
    FUN15(VAR2, FUN16(VAR48));
    return -1;
}