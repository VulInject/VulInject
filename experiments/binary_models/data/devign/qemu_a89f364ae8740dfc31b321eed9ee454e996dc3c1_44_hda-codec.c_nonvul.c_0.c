static void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8;
    const VAR9 *VAR10 = NULL;
    const VAR11 *VAR12;
    uint32_t VAR13, VAR14, VAR15, VAR16, VAR17;
    if ((VAR4 & 0x70000) == 0x70000)
    {
        VAR13 = (VAR4 >> 8) & 0xfff;
        VAR14 = VAR4 & 0x00ff;
    }
    else
    {
        VAR13 = (VAR4 >> 8) & 0xf00;
        VAR14 = VAR4 & 0xffff;
    }
    VAR10 = FUN3(VAR6->VAR18, VAR3);
    if (VAR10 == NULL)
    {
        goto VAR19;
    }
    FUN4(VAR6, 2, "", VAR20, VAR3, VAR10->VAR21, VAR13, VAR14);
    switch (VAR13)
    {
    case VAR22:
        VAR12 = FUN5(VAR10, VAR14);
        if (VAR12 == NULL)
        {
            goto VAR19;
        }
        FUN6(VAR2, true, VAR12->VAR23);
        break;
    case VAR24:
        FUN6(VAR2, true, VAR6->VAR18->VAR25);
        break;
    case VAR26:
        VAR12 = FUN5(VAR10, VAR27);
        VAR16 = VAR12 ? VAR12->VAR23 : 0;
        VAR15 = 0;
        VAR17 = 0;
        while (VAR14 < VAR16 && VAR17 < 32)
        {
            VAR15 |= VAR10->VAR28[VAR14] << VAR17;
            VAR14++;
            VAR17 += 8;
        }
        FUN6(VAR2, true, VAR15);
        break;
    case VAR29:
        FUN6(VAR2, true, VAR10->VAR30);
        break;
    case VAR31:
        FUN6(VAR2, true, VAR10->VAR32);
        break;
    case VAR33:
        if (VAR10->VAR32 != VAR14)
        {
            FUN4(VAR6, 1, "");
        }
        FUN6(VAR2, true, 0);
        break;
    case VAR34:
        VAR8 = VAR6->VAR8 + VAR10->VAR35;
        if (VAR8->VAR10 == NULL)
        {
            goto VAR19;
        }
        FUN7(VAR8, false);
        VAR8->VAR36 = (VAR14 >> 4) & 0x0f;
        VAR8->VAR37 = VAR14 & 0x0f;
        FUN4(VAR6, 2, "", VAR8->VAR10->VAR21, VAR8->VAR36, VAR8->VAR37);
        FUN7(VAR8, VAR6->VAR38[VAR8->VAR39 * 16 + VAR8->VAR36]);
        FUN6(VAR2, true, 0);
        break;
    case VAR40:
        VAR8 = VAR6->VAR8 + VAR10->VAR35;
        if (VAR8->VAR10 == NULL)
        {
            goto VAR19;
        }
        VAR15 = VAR8->VAR36 << 4 | VAR8->VAR37;
        FUN6(VAR2, true, VAR15);
        break;
    case VAR41:
        VAR8 = VAR6->VAR8 + VAR10->VAR35;
        if (VAR8->VAR10 == NULL)
        {
            goto VAR19;
        }
        VAR8->VAR42 = VAR14;
        FUN8(VAR8->VAR42, &VAR8->VAR43);
        FUN9(VAR8);
        FUN6(VAR2, true, 0);
        break;
    case VAR44:
        VAR8 = VAR6->VAR8 + VAR10->VAR35;
        if (VAR8->VAR10 == NULL)
        {
            goto VAR19;
        }
        FUN6(VAR2, true, VAR8->VAR42);
        break;
    case VAR45:
        VAR8 = VAR6->VAR8 + VAR10->VAR35;
        if (VAR8->VAR10 == NULL)
        {
            goto VAR19;
        }
        if (VAR14 & VAR46)
        {
            VAR15 = VAR8->VAR47 | (VAR8->VAR48 ? VAR49 : 0);
        }
        else
        {
            VAR15 = VAR8->VAR50 | (VAR8->VAR51 ? VAR49 : 0);
        }
        FUN6(VAR2, true, VAR15);
        break;
    case VAR52:
        VAR8 = VAR6->VAR8 + VAR10->VAR35;
        if (VAR8->VAR10 == NULL)
        {
            goto VAR19;
        }
        FUN4(VAR6, 1, "", VAR8->VAR10->VAR21, (VAR14 & VAR53) ? "" : "", (VAR14 & VAR54) ? "" : "", (VAR14 & VAR55) ? "" : "", (VAR14 & VAR56) ? "" : "", (VAR14 & VAR57) >> VAR58, (VAR14 & VAR59), (VAR14 & VAR49) ? "" : "");
        if (VAR14 & VAR55)
        {
            VAR8->VAR47 = VAR14 & VAR59;
            VAR8->VAR48 = VAR14 & VAR49;
        }
        if (VAR14 & VAR56)
        {
            VAR8->VAR50 = VAR14 & VAR59;
            VAR8->VAR51 = VAR14 & VAR49;
        }
        FUN10(VAR8);
        FUN6(VAR2, true, 0);
        break;
    case VAR60:
    case VAR61:
    case VAR62:
        FUN6(VAR2, true, 0);
        break;
    default:
        goto VAR19;
    }
    return;
VAR19:
    FUN4(VAR6, 1, "", VAR20, VAR3, VAR10 ? VAR10->VAR21 : "", VAR13, VAR14);
    FUN6(VAR2, true, 0);
}