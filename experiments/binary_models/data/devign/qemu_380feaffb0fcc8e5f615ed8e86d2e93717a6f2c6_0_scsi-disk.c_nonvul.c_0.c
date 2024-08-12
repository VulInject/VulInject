static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2(VAR6, VAR3, VAR3);
    VAR8 *VAR9 = FUN2(VAR8, VAR10, VAR3->VAR11);
    uint64_t VAR12;
    VAR4 *VAR13;
    int VAR14;
    switch (VAR3->VAR15.VAR5[0])
    {
    case VAR16:
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
        break;
    default:
        if (VAR9->VAR29 || !FUN3(VAR9->VAR10.VAR30.VAR31))
        {
            FUN4(VAR7, FUN5(VAR32));
            return 0;
        }
        break;
    }
    if (!VAR7->VAR33.VAR34)
    {
        if (VAR3->VAR15.VAR35 > 65536)
        {
            goto VAR36;
        }
        VAR7->VAR14 = FUN6(4096, VAR3->VAR15.VAR35);
        VAR7->VAR33.VAR34 = FUN7(VAR9->VAR10.VAR30.VAR31, VAR7->VAR14);
    }
    VAR14 = VAR3->VAR15.VAR35;
    VAR13 = VAR7->VAR33.VAR34;
    switch (VAR3->VAR15.VAR5[0])
    {
    case VAR37:
        assert(!VAR9->VAR29 && FUN3(VAR9->VAR10.VAR30.VAR31));
        break;
    case VAR16:
        VAR14 = FUN8(VAR3, VAR13);
        if (VAR14 < 0)
        {
            goto VAR36;
        }
        break;
    case VAR17:
    case VAR18:
        VAR14 = FUN9(VAR7, VAR13);
        if (VAR14 < 0)
        {
            goto VAR36;
        }
        break;
    case VAR38:
        VAR14 = FUN10(VAR3, VAR13);
        if (VAR14 < 0)
        {
            goto VAR36;
        }
        break;
    case VAR19:
        if (VAR3->VAR15.VAR5[1] & 1)
        {
            goto VAR36;
        }
        break;
    case VAR20:
        if (VAR3->VAR15.VAR5[1] & 3)
        {
            goto VAR36;
        }
        break;
    case VAR21:
        if (VAR3->VAR15.VAR5[1] & 1)
        {
            goto VAR36;
        }
        break;
    case VAR22:
        if (VAR3->VAR15.VAR5[1] & 3)
        {
            goto VAR36;
        }
        break;
    case VAR23:
        if (FUN11(VAR7) < 0)
        {
            return 0;
        }
        break;
    case VAR24:
        VAR9->VAR39 = VAR3->VAR15.VAR5[4] & 1;
        FUN12(VAR9->VAR10.VAR30.VAR31, VAR3->VAR15.VAR5[4] & 1);
        break;
    case VAR40:
        memset(VAR13, 0, 8);
        FUN13(VAR9->VAR10.VAR30.VAR31, &VAR12);
        if (!VAR12)
        {
            FUN4(VAR7, FUN5(VAR41));
            return -1;
        }
        if ((VAR3->VAR15.VAR5[8] & 1) == 0 && VAR3->VAR15.VAR42)
        {
            goto VAR36;
        }
        VAR12 /= VAR9->VAR10.VAR43 / 512;
        VAR12--;
        VAR9->VAR10.VAR44 = VAR12;
        if (VAR12 > VAR45)
        {
            VAR12 = VAR45;
        }
        VAR13[0] = (VAR12 >> 24) & 0xff;
        VAR13[1] = (VAR12 >> 16) & 0xff;
        VAR13[2] = (VAR12 >> 8) & 0xff;
        VAR13[3] = VAR12 & 0xff;
        VAR13[4] = 0;
        VAR13[5] = 0;
        VAR13[6] = VAR9->VAR10.VAR43 >> 8;
        VAR13[7] = 0;
        VAR14 = 8;
        break;
    case VAR28:
        VAR14 = FUN14(NULL, 0, VAR13, VAR7->VAR14, (VAR3->VAR15.VAR5[1] & 1) == 0);
        break;
    case VAR27:
        VAR14 = FUN15(VAR9, VAR13);
        if (VAR14 < 0)
        {
            goto VAR36;
        }
        break;
    case VAR25:
        VAR14 = FUN16(VAR9, VAR13);
        if (VAR14 < 0)
        {
            goto VAR36;
        }
        break;
    case VAR26:
        VAR14 = FUN17(VAR9, VAR7, VAR13);
        if (VAR14 < 0)
        {
            goto VAR36;
        }
        break;
    case VAR46:
        VAR14 = FUN18(VAR9, VAR7, VAR13);
        if (VAR14 < 0)
        {
            goto VAR36;
        }
        break;
    case VAR47:
        VAR14 = FUN19(VAR9, VAR7, VAR13);
        if (VAR14 < 0)
        {
            goto VAR36;
        }
        break;
    case VAR48:
        if ((VAR3->VAR15.VAR5[1] & 31) == VAR49)
        {
            FUN20("");
            memset(VAR13, 0, VAR3->VAR15.VAR35);
            FUN13(VAR9->VAR10.VAR30.VAR31, &VAR12);
            if (!VAR12)
            {
                FUN4(VAR7, FUN5(VAR41));
                return -1;
            }
            if ((VAR3->VAR15.VAR5[14] & 1) == 0 && VAR3->VAR15.VAR42)
            {
                goto VAR36;
            }
            VAR12 /= VAR9->VAR10.VAR43 / 512;
            VAR12--;
            VAR9->VAR10.VAR44 = VAR12;
            VAR13[0] = (VAR12 >> 56) & 0xff;
            VAR13[1] = (VAR12 >> 48) & 0xff;
            VAR13[2] = (VAR12 >> 40) & 0xff;
            VAR13[3] = (VAR12 >> 32) & 0xff;
            VAR13[4] = (VAR12 >> 24) & 0xff;
            VAR13[5] = (VAR12 >> 16) & 0xff;
            VAR13[6] = (VAR12 >> 8) & 0xff;
            VAR13[7] = VAR12 & 0xff;
            VAR13[8] = 0;
            VAR13[9] = 0;
            VAR13[10] = VAR9->VAR10.VAR43 >> 8;
            VAR13[11] = 0;
            VAR13[12] = 0;
            VAR13[13] = FUN21(&VAR9->VAR10.VAR30);
            if (VAR9->VAR10.VAR30.VAR50)
            {
                VAR13[14] = 0x80;
            }
            VAR14 = VAR3->VAR15.VAR35;
            break;
        }
        FUN20("");
        goto VAR36;
    case VAR51:
        FUN22(&VAR7->VAR3);
        FUN23(VAR9->VAR10.VAR30.VAR31, &VAR7->VAR52, 0, VAR53);
        VAR7->VAR3.VAR54 = FUN24(VAR9->VAR10.VAR30.VAR31, VAR55, VAR7);
        return 0;
    case VAR56:
        FUN20("" VAR57 "", VAR7->VAR3.VAR15.VAR42);
        if (VAR7->VAR3.VAR15.VAR42 > VAR9->VAR10.VAR44)
        {
            goto VAR58;
        }
        break;
    case VAR59:
        FUN20("", (long)VAR7->VAR3.VAR15.VAR35);
        break;
    case VAR60:
        FUN20("", (long)VAR7->VAR3.VAR15.VAR35);
        break;
    case VAR61:
        VAR12 = FUN25(&VAR3->VAR15.VAR5[7]);
        goto VAR62;
    case VAR63:
        VAR12 = FUN26(&VAR3->VAR15.VAR5[10]) & 0xffffffffULL;
    VAR62:
        if (VAR7->VAR3.VAR15.VAR42 > VAR9->VAR10.VAR44)
        {
            goto VAR58;
        }
        if (!(VAR3->VAR15.VAR5[1] & 0x8))
        {
            goto VAR36;
        }
        FUN22(&VAR7->VAR3);
        VAR7->VAR3.VAR54 = FUN27(VAR9->VAR10.VAR30.VAR31, VAR7->VAR3.VAR15.VAR42 * (VAR9->VAR10.VAR43 / 512), VAR12 * (VAR9->VAR10.VAR43 / 512), VAR55, VAR7);
        return 0;
    default:
        FUN20("", VAR5[0]);
        FUN4(VAR7, FUN5(VAR64));
        return 0;
    }
    assert(!VAR7->VAR3.VAR54);
    VAR7->VAR33.VAR65 = FUN28(VAR14, VAR3->VAR15.VAR35);
    if (VAR7->VAR33.VAR65 == 0)
    {
        FUN29(&VAR7->VAR3, VAR66);
    }
    if (VAR7->VAR3.VAR15.VAR67 == VAR68)
    {
        assert(VAR7->VAR33.VAR65 == VAR3->VAR15.VAR35);
        return -VAR7->VAR33.VAR65;
    }
    else
    {
        return VAR7->VAR33.VAR65;
    }
VAR36:
    if (VAR7->VAR3.VAR69 == -1)
    {
        FUN4(VAR7, FUN5(VAR70));
    }
    return 0;
VAR58:
    FUN4(VAR7, FUN5(VAR71));
    return 0;
}