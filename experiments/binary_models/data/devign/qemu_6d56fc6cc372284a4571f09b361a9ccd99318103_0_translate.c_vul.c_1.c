static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5)
{
    uint16_t VAR6[5];
    int VAR7, VAR8, VAR9;
    int VAR10, VAR11, VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    TCGv VAR17;
    uint32_t VAR18 = VAR2->VAR18;
    uint32_t VAR19 = VAR2->VAR20->VAR21;
    int VAR22 = FUN2(VAR2->VAR23, VAR24, 8);
    int VAR25 = (VAR19 - VAR18) / 2;
    int VAR26;
    if (VAR18 != VAR19 + VAR22 || VAR25 < 2)
    {
        VAR2->VAR27 &= ~VAR28;
        return 0;
    }
    if (VAR2->VAR23 & VAR29)
    {
        *VAR5 = VAR25;
        return 0;
    }
    if (VAR25 > FUN3(VAR6))
    {
        goto VAR30;
    }
    for (VAR26 = 0; VAR26 < VAR25; ++VAR26)
    {
        VAR6[VAR26] = FUN4(VAR4, VAR18 + VAR26 * 2);
    }
    VAR7 = VAR8 = VAR9 = -1;
    VAR13 = -1;
    VAR10 = VAR11 = VAR12 = -1;
    VAR14 = -1;
    VAR15 = VAR16 = -1;
    FUN5(VAR17);
    VAR26 = 0;
    do
    {
        if (VAR26 >= VAR25)
            goto VAR30;
        VAR2->VAR31 = VAR6[VAR26++];
    } while (0) VAR32;
    switch (VAR2->VAR31 & 0xf00f)
    {
    case 0x6000:
        VAR9 = VAR33;
        break;
    case 0x6001:
        VAR9 = VAR34;
        break;
    case 0x6002:
        VAR9 = VAR35;
        break;
    default:
        goto VAR30;
    }
    VAR7 = VAR36;
    VAR8 = VAR37;
    if (VAR7 == VAR8)
    {
        goto VAR30;
    }
    VAR10 = VAR8;
    VAR32;
    switch (VAR2->VAR31 & 0xf00f)
    {
    case 0x6003:
        VAR10 = VAR37;
        VAR13 = VAR36;
        if (VAR10 == VAR8)
        {
            goto VAR30;
        }
        if (VAR13 != VAR8)
        {
            VAR11 = VAR8;
        }
        break;
    default:
        --VAR26;
    }
    VAR32;
    switch (VAR2->VAR31 & 0xf00f)
    {
    case 0x300c:
        VAR12 = VAR38;
        goto VAR39;
    case 0x2009:
        VAR12 = VAR40;
        goto VAR39;
    case 0x200a:
        VAR12 = VAR41;
        goto VAR39;
    case 0x200b:
        VAR12 = VAR42;
    VAR39:
        if (VAR10 != VAR37)
        {
            goto VAR30;
        }
        if (VAR11 < 0)
        {
            VAR11 = VAR36;
        }
        else if (VAR11 == VAR36)
        {
            VAR11 = VAR13;
        }
        else
        {
            goto VAR30;
        }
        VAR17 = FUN6(VAR11);
        break;
    case 0x6007:
        if (VAR8 != VAR36 || VAR13 >= 0)
        {
            goto VAR30;
        }
        VAR10 = VAR37;
        VAR12 = VAR41;
        VAR17 = FUN7(-1);
        break;
    case 0x7000 ... 0x700f:
        if (VAR10 != VAR37 || VAR13 >= 0)
        {
            goto VAR30;
        }
        VAR12 = VAR38;
        VAR17 = FUN7(VAR43);
        break;
    case 0x3000:
        if ((VAR8 == VAR37) + (VAR8 == VAR36) != 1 || VAR13 >= 0)
        {
            goto VAR30;
        }
        VAR12 = VAR44;
        VAR11 = (VAR8 == VAR37 ? VAR36 : VAR37);
        VAR17 = FUN6(VAR11);
        VAR32;
        switch (VAR2->VAR31 & 0xff00)
        {
        case 0x8b00:
        case 0x8f00:
            if (VAR18 + (VAR26 + 1 + VAR43) * 2 != VAR19)
            {
                goto VAR30;
            }
            if ((VAR2->VAR31 & 0xff00) == 0x8b00)
            {
                break;
            }
            VAR32;
            if ((VAR2->VAR31 & 0xf0ff) == 0x0029)
            {
                VAR14 = VAR37;
            }
            else
            {
                goto VAR30;
            }
            break;
        default:
            goto VAR30;
        }
        break;
    case 0x2008:
        if (VAR8 != VAR37 || VAR8 != VAR36 || VAR13 >= 0)
        {
            goto VAR30;
        }
        VAR12 = VAR44;
        VAR17 = FUN7(0);
        VAR32;
        if ((VAR2->VAR31 & 0xff00) != 0x8900 || VAR18 + (VAR26 + 1 + VAR43) * 2 != VAR19)
        {
            goto VAR30;
        }
        break;
    default:
        --VAR26;
    }
    if (VAR26 != VAR25 - 1)
    {
        goto VAR30;
    }
    VAR32;
    switch (VAR2->VAR31 & 0xf00f)
    {
    case 0x2000:
        VAR16 = VAR45;
        break;
    case 0x2001:
        VAR16 = VAR46;
        break;
    case 0x2002:
        VAR16 = VAR47;
        break;
    default:
        goto VAR30;
    }
    if (VAR7 != VAR37 || VAR16 != (VAR9 & VAR48))
    {
        goto VAR30;
    }
    VAR15 = VAR36;
    FUN8(VAR18, VAR2->VAR27);
    switch (VAR12)
    {
    case -1:
        if (VAR15 == VAR8 || VAR13 >= 0)
        {
            goto VAR30;
        }
        FUN9(FUN6(VAR8), FUN6(VAR7), FUN6(VAR15), VAR2->VAR49, VAR9);
        break;
    case VAR38:
        if (VAR10 != VAR15)
        {
            goto VAR30;
        }
        if (VAR10 == VAR8 && VAR16 == VAR47)
        {
            FUN10(FUN6(VAR8), FUN6(VAR7), VAR17, VAR2->VAR49, VAR9);
        }
        else
        {
            FUN11(FUN6(VAR8), FUN6(VAR7), VAR17, VAR2->VAR49, VAR9);
            if (VAR10 != VAR8)
            {
                FUN12(FUN6(VAR10), FUN6(VAR8), VAR17);
            }
        }
        break;
    case VAR40:
        if (VAR10 != VAR15)
        {
            goto VAR30;
        }
        if (VAR10 == VAR8)
        {
            FUN13(FUN6(VAR8), FUN6(VAR7), VAR17, VAR2->VAR49, VAR9);
        }
        else
        {
            FUN14(FUN6(VAR8), FUN6(VAR7), VAR17, VAR2->VAR49, VAR9);
            FUN15(FUN6(VAR10), FUN6(VAR8), VAR17);
        }
        break;
    case VAR42:
        if (VAR10 != VAR15)
        {
            goto VAR30;
        }
        if (VAR10 == VAR8)
        {
            FUN16(FUN6(VAR8), FUN6(VAR7), VAR17, VAR2->VAR49, VAR9);
        }
        else
        {
            FUN17(FUN6(VAR8), FUN6(VAR7), VAR17, VAR2->VAR49, VAR9);
            FUN18(FUN6(VAR10), FUN6(VAR8), VAR17);
        }
        break;
    case VAR41:
        if (VAR10 != VAR15)
        {
            goto VAR30;
        }
        if (VAR10 == VAR8)
        {
            FUN19(FUN6(VAR8), FUN6(VAR7), VAR17, VAR2->VAR49, VAR9);
        }
        else
        {
            FUN20(FUN6(VAR8), FUN6(VAR7), VAR17, VAR2->VAR49, VAR9);
            FUN21(FUN6(VAR10), FUN6(VAR8), VAR17);
        }
        break;
    case VAR44:
        if (VAR15 == VAR8)
        {
            goto VAR30;
        }
        FUN22(FUN6(VAR8), FUN6(VAR7), VAR17, FUN6(VAR15), VAR2->VAR49, VAR9);
        FUN23(VAR50, VAR51, FUN6(VAR8), VAR17);
        if (VAR14 >= 0)
        {
            FUN24(FUN6(VAR14), VAR51);
        }
        break;
    default:
        FUN25();
    }
    if (VAR11 < 0)
    {
        FUN26(VAR17);
    }
    VAR2->VAR27 &= ~VAR28;
    VAR2->VAR18 = VAR19;
    return VAR25;
VAR30:
    FUN27(VAR52, "", VAR18, VAR19);
    FUN8(VAR18, VAR2->VAR27);
    VAR2->VAR27 |= VAR29;
    FUN28(VAR2, false);
    FUN29(VAR53);
    VAR2->VAR54 = VAR55;
    VAR2->VAR18 = VAR19;
    return 1;
}