static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR4->VAR8);
    uint64_t VAR9;
    VAR10 *VAR11;
    int VAR12 = 0;
    if (!VAR2->VAR13.VAR14)
    {
        if (VAR4->VAR15.VAR16 > 65536)
        {
            goto VAR17;
        }
        VAR2->VAR12 = FUN3(4096, VAR4->VAR15.VAR16);
        VAR2->VAR13.VAR14 = FUN4(VAR6->VAR7.VAR18.VAR19, VAR2->VAR12);
    }
    VAR11 = VAR2->VAR13.VAR14;
    switch (VAR4->VAR15.VAR20[0])
    {
    case VAR21:
        assert(!VAR6->VAR22 && FUN5(VAR6->VAR7.VAR18.VAR19));
        break;
    case VAR23:
        VAR12 = FUN6(VAR4, VAR11);
        if (VAR12 < 0)
        {
            goto VAR17;
        }
        break;
    case VAR24:
    case VAR25:
        VAR12 = FUN7(VAR2, VAR11);
        if (VAR12 < 0)
        {
            goto VAR17;
        }
        break;
    case VAR26:
        VAR12 = FUN8(VAR4, VAR11);
        if (VAR12 < 0)
        {
            goto VAR17;
        }
        break;
    case VAR27:
        if (VAR4->VAR15.VAR20[1] & 1)
        {
            goto VAR17;
        }
        break;
    case VAR28:
        if (VAR4->VAR15.VAR20[1] & 3)
        {
            goto VAR17;
        }
        break;
    case VAR29:
        if (VAR4->VAR15.VAR20[1] & 1)
        {
            goto VAR17;
        }
        break;
    case VAR30:
        if (VAR4->VAR15.VAR20[1] & 3)
        {
            goto VAR17;
        }
        break;
    case VAR31:
        if (FUN9(VAR2) < 0)
        {
            return -1;
        }
        break;
    case VAR32:
        VAR6->VAR33 = VAR4->VAR15.VAR20[4] & 1;
        FUN10(VAR6->VAR7.VAR18.VAR19, VAR4->VAR15.VAR20[4] & 1);
        break;
    case VAR34:
        memset(VAR11, 0, 8);
        FUN11(VAR6->VAR7.VAR18.VAR19, &VAR9);
        if (!VAR9)
        {
            FUN12(VAR2, FUN13(VAR35));
            return -1;
        }
        if ((VAR4->VAR15.VAR20[8] & 1) == 0 && VAR4->VAR15.VAR36)
        {
            goto VAR17;
        }
        VAR9 /= VAR6->VAR7.VAR37 / 512;
        VAR9--;
        VAR6->VAR7.VAR38 = VAR9;
        if (VAR9 > VAR39)
        {
            VAR9 = VAR39;
        }
        VAR11[0] = (VAR9 >> 24) & 0xff;
        VAR11[1] = (VAR9 >> 16) & 0xff;
        VAR11[2] = (VAR9 >> 8) & 0xff;
        VAR11[3] = VAR9 & 0xff;
        VAR11[4] = 0;
        VAR11[5] = 0;
        VAR11[6] = VAR6->VAR7.VAR37 >> 8;
        VAR11[7] = 0;
        VAR12 = 8;
        break;
    case VAR40:
        VAR12 = FUN14(NULL, 0, VAR11, VAR2->VAR12, (VAR4->VAR15.VAR20[1] & 1) == 0);
        break;
    case VAR41:
        VAR12 = FUN15(VAR6, VAR11);
        if (VAR12 < 0)
        {
            goto VAR17;
        }
        break;
    case VAR42:
        VAR12 = FUN16(VAR6, VAR11);
        if (VAR12 < 0)
        {
            goto VAR17;
        }
        break;
    case VAR43:
        VAR12 = FUN17(VAR6, VAR2, VAR11);
        if (VAR12 < 0)
        {
            goto VAR17;
        }
        break;
    case VAR44:
        VAR12 = FUN18(VAR6, VAR2, VAR11);
        if (VAR12 < 0)
        {
            goto VAR17;
        }
        break;
    case VAR45:
        if ((VAR4->VAR15.VAR20[1] & 31) == VAR46)
        {
            FUN19("");
            memset(VAR11, 0, VAR4->VAR15.VAR16);
            FUN11(VAR6->VAR7.VAR18.VAR19, &VAR9);
            if (!VAR9)
            {
                FUN12(VAR2, FUN13(VAR35));
                return -1;
            }
            if ((VAR4->VAR15.VAR20[14] & 1) == 0 && VAR4->VAR15.VAR36)
            {
                goto VAR17;
            }
            VAR9 /= VAR6->VAR7.VAR37 / 512;
            VAR9--;
            VAR6->VAR7.VAR38 = VAR9;
            VAR11[0] = (VAR9 >> 56) & 0xff;
            VAR11[1] = (VAR9 >> 48) & 0xff;
            VAR11[2] = (VAR9 >> 40) & 0xff;
            VAR11[3] = (VAR9 >> 32) & 0xff;
            VAR11[4] = (VAR9 >> 24) & 0xff;
            VAR11[5] = (VAR9 >> 16) & 0xff;
            VAR11[6] = (VAR9 >> 8) & 0xff;
            VAR11[7] = VAR9 & 0xff;
            VAR11[8] = 0;
            VAR11[9] = 0;
            VAR11[10] = VAR6->VAR7.VAR37 >> 8;
            VAR11[11] = 0;
            VAR11[12] = 0;
            VAR11[13] = FUN20(&VAR6->VAR7.VAR18);
            if (VAR6->VAR7.VAR18.VAR47)
            {
                VAR11[14] = 0x80;
            }
            VAR12 = VAR4->VAR15.VAR16;
            break;
        }
        FUN19("");
        goto VAR17;
    case VAR48:
        break;
    default:
        FUN12(VAR2, FUN13(VAR49));
        return -1;
    }
    VAR12 = FUN21(VAR12, VAR4->VAR15.VAR16);
    return VAR12;
VAR17:
    if (VAR2->VAR4.VAR50 == -1)
    {
        FUN12(VAR2, FUN13(VAR51));
    }
    return -1;
}