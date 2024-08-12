static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = &VAR9->VAR12;
    int VAR13 = VAR14, VAR15, VAR16;
    VAR17 *VAR18 = VAR3;
    VAR5 *VAR19;
    VAR9->VAR12.VAR2 = VAR2;
    if (!VAR7)
        return 0;
    VAR15 = FUN2(VAR2->VAR20, VAR2->VAR21, VAR2->VAR22);
    VAR19 = (VAR5 *)FUN3(VAR15);
    FUN4((VAR23 *)VAR18, VAR19, VAR2->VAR20, VAR2->VAR21, VAR2->VAR22);
    if (VAR2->VAR24 == VAR25)
    {
        uint32_t VAR26 = 0;
        int VAR27 = 0, VAR28 = 0;
        while (VAR28 < VAR7)
        {
            for (; VAR28 < VAR7 && VAR26 != 0x000001; VAR28++)
                VAR26 = ((VAR26 << 8) | VAR6[VAR28]) & 0xffffff;
            if (VAR26 != 0x000001)
                break;
            VAR27 = VAR6[VAR28++];
            FUN5(VAR29, VAR6 + VAR28, (VAR7 - VAR28) * 8);
            switch (VAR27)
            {
            case 0x0A:
                return 0;
            case 0x0B:
                FUN6(VAR2, VAR30, "");
                return -1;
            case 0x0C:
                FUN6(VAR2, VAR30, "");
                return -1;
            case 0x0D:
                break;
            case 0x0E:
                if (VAR9->VAR31 <= VAR32)
                    FUN6(VAR2, VAR30, "", VAR9->VAR31);
                FUN7(VAR2, VAR29);
                break;
            case 0x0F:
                FUN8(VAR2, VAR29);
                break;
            default:
                FUN6(VAR2, VAR30, "", VAR27);
            }
            VAR28 += FUN9(VAR29) * 8;
        }
        FUN10();
    }
    else
        FUN5(&VAR9->VAR12.VAR29, VAR6, VAR7 * 8);
    VAR12->VAR33 = VAR2->VAR33;
    VAR12->VAR34 = VAR2->VAR34;
    if (VAR7 == 0)
    {
        if (VAR12->VAR35 == 0 && VAR12->VAR36)
        {
            *VAR18 = *(VAR17 *)VAR12->VAR36;
            VAR12->VAR36 = NULL;
            *VAR4 = sizeof(VAR17);
        }
        return 0;
    }
    VAR12->VAR37 = 0;
    if (!VAR12->VAR38)
    {
        if (FUN11(VAR12) < 0)
            return -1;
    }
    if (VAR12->VAR39 == NULL || VAR12->VAR39->VAR3[0])
    {
        VAR12->VAR39 = &VAR12->VAR40[FUN12(VAR12, 0)];
    }
    if (VAR9->VAR31 > VAR41)
        VAR13 = FUN13(VAR9);
    else
        VAR13 = FUN14(VAR9);
    if (VAR13 == VAR14)
        return VAR7;
    if (VAR13 < 0)
    {
        FUN6(VAR12->VAR2, VAR30, "");
        return -1;
    }
    if (VAR9->VAR31 <= VAR41 && VAR9->VAR42)
    {
    }
    VAR12->VAR43.VAR44 = VAR12->VAR44;
    VAR12->VAR43.VAR45 = VAR12->VAR44 == VAR46;
    if (VAR12->VAR47 == NULL && (VAR12->VAR44 == VAR48 || VAR12->VAR49))
        return VAR7;
    if (VAR2->VAR50 && VAR12->VAR44 == VAR48)
        return VAR7;
    if (VAR2->VAR50 >= 5)
        return VAR7;
    if (VAR12->VAR51)
    {
        if (VAR12->VAR44 == VAR48)
            return VAR7;
        else
            VAR12->VAR51 = 0;
    }
    if (FUN15(VAR12, VAR2) < 0)
        return -1;
    FUN16(VAR12);
    if (VAR9->VAR31 > VAR41)
        VAR13 = FUN17(VAR9);
    else
        VAR13 = FUN18(VAR9);
    if (VAR13 < 0)
        return VAR14;
    if (VAR9->VAR31 > VAR41)
    {
        switch (VAR12->VAR44)
        {
        case VAR46:
            VAR13 = FUN19(VAR9);
            break;
        case VAR52:
            VAR13 = FUN20(VAR9);
            break;
        case VAR48:
        case VAR53:
            VAR13 = FUN21(VAR9);
            break;
        default:
            VAR13 = VAR14;
        }
        if (VAR13 == VAR14)
            return VAR7;
    }
    else
    {
        switch (VAR12->VAR44)
        {
        case VAR46:
            VAR13 = FUN22(VAR9);
            break;
        case VAR52:
            VAR13 = FUN20(VAR9);
            break;
        case VAR48:
        case VAR53:
            VAR13 = FUN21(VAR9);
            break;
        default:
            VAR13 = VAR14;
        }
        if (VAR13 == VAR14)
            return VAR7;
    }
    FUN23(VAR12);
    FUN24(VAR12);
    assert(VAR12->VAR43.VAR44 == VAR12->VAR39->VAR44);
    assert(VAR12->VAR43.VAR44 == VAR12->VAR44);
    if (VAR12->VAR44 == VAR48 || VAR12->VAR35)
    {
        *VAR18 = *(VAR17 *)&VAR12->VAR43;
        FUN25(VAR12, VAR18);
    }
    else
    {
        *VAR18 = *(VAR17 *)&VAR12->VAR54;
        if (VAR18)
            FUN25(VAR12, VAR18);
    }
    VAR2->VAR55 = VAR12->VAR56 - 1;
    if (VAR12->VAR47 || VAR12->VAR35)
        *VAR4 = sizeof(VAR17);
    FUN6(VAR2, VAR57, "", FUN9(&VAR12->VAR29), VAR7 * 8);
    *VAR4 = VAR15;
    return VAR7;
}