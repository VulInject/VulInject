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
        memset(VAR4, 0, 4);
        VAR12 = 4;
        if (VAR8->VAR22.VAR23 == VAR24 && VAR6->VAR14.VAR20 >= 18)
        {
            memset(VAR4, 0, 18);
            VAR12 = 18;
            VAR4[7] = 10;
            VAR4[12] = 0x3a;
            VAR4[13] = 0;
        }
        VAR4[0] = 0xf0;
        VAR4[1] = 0;
        VAR4[2] = VAR8->VAR22.VAR23;
        FUN4(VAR8);
        break;
    case VAR25:
        VAR12 = FUN5(VAR6, VAR4);
        if (VAR12 < 0)
            goto VAR21;
        break;
    case VAR26:
    case VAR27:
        VAR12 = FUN6(VAR6, VAR4);
        if (VAR12 < 0)
            goto VAR21;
        break;
    case VAR28:
        VAR12 = FUN7(VAR6, VAR4);
        if (VAR12 < 0)
            goto VAR21;
        break;
    case VAR29:
        if (VAR6->VAR14.VAR15[1] & 1)
            goto VAR21;
        break;
    case VAR30:
        if (VAR6->VAR14.VAR15[1] & 3)
            goto VAR21;
        break;
    case VAR31:
        if (VAR6->VAR14.VAR15[1] & 1)
            goto VAR21;
        break;
    case VAR32:
        if (VAR6->VAR14.VAR15[1] & 3)
            goto VAR21;
        break;
    case VAR33:
        if (VAR8->VAR34 == VAR35 && (VAR6->VAR14.VAR15[4] & 2))
        {
            FUN8(VAR8->VAR17, !(VAR6->VAR14.VAR15[4] & 1));
        }
        break;
    case VAR36:
        FUN9(VAR8->VAR17, VAR6->VAR14.VAR15[4] & 1);
        break;
    case VAR37:
        memset(VAR4, 0, 8);
        FUN10(VAR8->VAR17, &VAR11);
        if (!VAR11)
            goto VAR18;
        VAR11 /= VAR8->VAR38;
        VAR11--;
        VAR8->VAR39 = VAR11;
        if (VAR11 > VAR40)
            VAR11 = VAR40;
        VAR4[0] = (VAR11 >> 24) & 0xff;
        VAR4[1] = (VAR11 >> 16) & 0xff;
        VAR4[2] = (VAR11 >> 8) & 0xff;
        VAR4[3] = VAR11 & 0xff;
        VAR4[4] = 0;
        VAR4[5] = 0;
        VAR4[6] = VAR8->VAR38 * 2;
        VAR4[7] = 0;
        VAR12 = 8;
        break;
    case VAR41:
        VAR13 = FUN11(VAR8->VAR17);
        if (VAR13 < 0)
        {
            if (FUN12(VAR2, -VAR13, VAR42))
            {
                return -1;
            }
        }
        break;
    case VAR43:
        memset(VAR4, 0, 8);
        VAR4[7] = 8;
        VAR12 = 8;
        break;
    case VAR44:
        if ((VAR6->VAR14.VAR15[1] & 31) == 0x10)
        {
            FUN13("");
            memset(VAR4, 0, VAR6->VAR14.VAR20);
            FUN10(VAR8->VAR17, &VAR11);
            if (!VAR11)
                goto VAR18;
            VAR11 /= VAR8->VAR38;
            VAR11--;
            VAR8->VAR39 = VAR11;
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
            VAR4[10] = VAR8->VAR38 * 2;
            VAR4[11] = 0;
            VAR4[12] = 0;
            VAR4[13] = FUN14(&VAR8->VAR9.VAR45);
            if (VAR8->VAR9.VAR45.VAR46)
            {
                VAR4[14] = 0x80;
            }
            VAR12 = VAR6->VAR14.VAR20;
            break;
        }
        FUN13("");
        goto VAR21;
    case VAR47:
        if (VAR6->VAR14.VAR20 < 16)
            goto VAR21;
        memset(VAR4, 0, 16);
        VAR4[3] = 8;
        VAR12 = 16;
        break;
    case VAR48:
        break;
    case VAR49:
        FUN13("");
        if (!FUN3(VAR8->VAR17))
        {
            goto VAR18;
        }
        break;
    default:
        goto VAR21;
    }
    FUN15(VAR2, VAR50, VAR51);
    return VAR12;
VAR18:
    FUN16(VAR2, VAR52, VAR24);
    return -1;
VAR21:
    FUN16(VAR2, VAR52, VAR53);
    return -1;
}