int FUN1(VAR1 *VAR2, int VAR3, const VAR1 *VAR4, int VAR5, int VAR6, int VAR7)
{
    static int VAR8;
    int VAR9, VAR10, VAR11, VAR12, VAR13;
    const VAR14 *VAR15, *VAR16;
    const VAR17 *VAR18;
    AVPicture VAR19, *VAR20 = &VAR19;
    if (VAR5 < 0 || VAR5 >= VAR21 || VAR3 < 0 || VAR3 >= VAR21)
        return -1;
    if (VAR6 <= 0 || VAR7 <= 0)
        return 0;
    if (!VAR8)
    {
        VAR8 = 1;
        FUN2();
    }
    VAR11 = VAR6;
    VAR12 = VAR7;
    VAR16 = &VAR22[VAR3];
    VAR15 = &VAR22[VAR5];
    if (VAR5 == VAR3)
    {
        FUN3(VAR2, VAR4, VAR3, VAR11, VAR12);
        return 0;
    }
    VAR18 = &VAR23[VAR5][VAR3];
    if (VAR18->VAR24)
    {
        VAR18->FUN4(VAR2, VAR4, VAR11, VAR12);
        return 0;
    }
    if (FUN5(VAR16) && VAR5 == VAR25)
    {
        int VAR26, VAR27, VAR28;
        VAR29 *VAR30;
        if (VAR16->VAR31 == VAR32)
        {
            FUN6(VAR2->VAR33[0], VAR2->VAR34[0], VAR4->VAR33[0], VAR4->VAR34[0], VAR11, VAR12);
        }
        else
        {
            FUN7(VAR2->VAR33[0], VAR2->VAR34[0], VAR4->VAR33[0], VAR4->VAR34[0], VAR11, VAR12, VAR35);
        }
        VAR26 = VAR11;
        VAR27 = VAR12;
        VAR26 >>= VAR16->VAR36;
        VAR27 >>= VAR16->VAR37;
        for (VAR9 = 1; VAR9 <= 2; VAR9++)
        {
            VAR30 = VAR2->VAR33[VAR9];
            for (VAR28 = 0; VAR28 < VAR27; VAR28++)
            {
                memset(VAR30, 128, VAR26);
                VAR30 += VAR2->VAR34[VAR9];
            }
        }
        return 0;
    }
    if (FUN5(VAR15) && VAR3 == VAR25)
    {
        if (VAR15->VAR31 == VAR32)
        {
            FUN6(VAR2->VAR33[0], VAR2->VAR34[0], VAR4->VAR33[0], VAR4->VAR34[0], VAR11, VAR12);
        }
        else
        {
            FUN7(VAR2->VAR33[0], VAR2->VAR34[0], VAR4->VAR33[0], VAR4->VAR34[0], VAR11, VAR12, VAR38);
        }
        return 0;
    }
    if (FUN5(VAR16) && FUN5(VAR15))
    {
        int VAR39, VAR40, VAR26, VAR27, VAR41;
        void (*VAR42)(VAR29 * VAR2, int VAR43, const VAR29 *VAR4, int VAR44, int VAR45, int VAR46);
        VAR26 = VAR11;
        VAR27 = VAR12;
        if (VAR16->VAR36 >= VAR15->VAR36)
            VAR26 >>= VAR16->VAR36;
        else
            VAR26 >>= VAR15->VAR36;
        if (VAR16->VAR37 >= VAR15->VAR37)
            VAR27 >>= VAR16->VAR37;
        else
            VAR27 >>= VAR15->VAR37;
        VAR39 = (VAR16->VAR36 - VAR15->VAR36);
        VAR40 = (VAR16->VAR37 - VAR15->VAR37);
        VAR41 = ((VAR39 & 0xf) << 4) | (VAR40 & 0xf);
        switch (VAR41)
        {
        case 0x00:
            VAR42 = VAR47;
            break;
        case 0x10:
            VAR42 = VAR48;
            break;
        case 0x20:
            VAR42 = VAR49;
            break;
        case 0x01:
            VAR42 = VAR50;
            break;
        case 0x11:
            VAR42 = VAR51;
            break;
        case 0x22:
            VAR42 = VAR52;
            break;
        case 0xf0:
            VAR42 = VAR53;
            break;
        case 0x0f:
            VAR42 = VAR54;
            break;
        case 0xe0:
            VAR42 = VAR55;
            break;
        case 0xff:
            VAR42 = VAR56;
            break;
        case 0xee:
            VAR42 = VAR57;
            break;
        case 0xf1:
            VAR42 = VAR58;
            break;
        default:
            goto VAR59;
        }
        FUN6(VAR2->VAR33[0], VAR2->VAR34[0], VAR4->VAR33[0], VAR4->VAR34[0], VAR11, VAR12);
        for (VAR9 = 1; VAR9 <= 2; VAR9++)
            FUN8(VAR2->VAR33[VAR9], VAR2->VAR34[VAR9], VAR4->VAR33[VAR9], VAR4->VAR34[VAR9], VAR11 >> VAR16->VAR36, VAR12 >> VAR16->VAR37);
        if (VAR16->VAR31 != VAR15->VAR31)
        {
            const VAR29 *VAR60, *VAR61;
            if (VAR16->VAR31 == VAR62)
            {
                VAR60 = VAR35;
                VAR61 = VAR63;
            }
            else
            {
                VAR60 = VAR38;
                VAR61 = VAR64;
            }
            FUN7(VAR2->VAR33[0], VAR2->VAR34[0], VAR2->VAR33[0], VAR2->VAR34[0], VAR11, VAR12, VAR60);
            for (VAR9 = 1; VAR9 <= 2; VAR9++)
                FUN7(VAR2->VAR33[VAR9], VAR2->VAR34[VAR9], VAR2->VAR33[VAR9], VAR2->VAR34[VAR9], VAR11 >> VAR16->VAR36, VAR12 >> VAR16->VAR37, VAR61);
        }
        return 0;
    }
VAR59:
    if (VAR5 == VAR65 || VAR3 == VAR65)
    {
        VAR13 = VAR66;
    }
    else if (VAR5 == VAR67 || VAR3 == VAR67)
    {
        VAR13 = VAR66;
    }
    else if (VAR5 == VAR68 || VAR3 == VAR68)
    {
        VAR13 = VAR69;
    }
    else if ((VAR15->VAR31 == VAR70 && VAR5 != VAR25) || (VAR16->VAR31 == VAR70 && VAR3 != VAR25))
    {
        VAR13 = VAR25;
    }
    else if ((FUN5(VAR15) && VAR5 != VAR71 && VAR5 != VAR72))
    {
        if (VAR15->VAR31 == VAR32)
            VAR13 = VAR72;
        else
            VAR13 = VAR71;
    }
    else if ((FUN5(VAR16) && VAR3 != VAR71 && VAR3 != VAR72))
    {
        if (VAR16->VAR31 == VAR32)
            VAR13 = VAR72;
        else
            VAR13 = VAR71;
    }
    else
    {
        if (VAR15->VAR73 && VAR16->VAR73)
            VAR13 = VAR74;
        else
            VAR13 = VAR75;
    }
    if (VAR5 == VAR13)
        return -1;
    if (FUN9(VAR20, VAR13, VAR11, VAR12) < 0)
        return -1;
    VAR10 = -1;
    if (FUN1(VAR20, VAR13, VAR4, VAR5, VAR6, VAR7) < 0)
        goto VAR76;
    if (FUN1(VAR2, VAR3, VAR20, VAR13, VAR11, VAR12) < 0)
        goto VAR76;
    VAR10 = 0;
VAR76:
    FUN10(VAR20);
    return VAR10;
}