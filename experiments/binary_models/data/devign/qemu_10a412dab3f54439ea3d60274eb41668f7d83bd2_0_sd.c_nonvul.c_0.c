int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    sd_rsp_type_t VAR8;
    int VAR9;
    if (!VAR2->VAR10 || !FUN2(VAR2->VAR10) || !VAR2->VAR11)
    {
        return 0;
    }
    if (FUN3(VAR4))
    {
        VAR2->VAR12 |= VAR13;
        VAR8 = VAR14;
        goto VAR15;
    }
    if (VAR2->VAR12 & VAR16)
    {
        if (!FUN4(VAR2, VAR4))
        {
            VAR2->VAR12 |= VAR17;
            fprintf(VAR18, "");
            VAR8 = VAR14;
            goto VAR15;
        }
    }
    VAR7 = VAR2->VAR19;
    FUN5(VAR2);
    if (VAR2->VAR12 & VAR20)
    {
        VAR8 = FUN6(VAR2, *VAR4);
        VAR2->VAR12 &= ~VAR20;
    }
    else
        VAR8 = FUN7(VAR2, *VAR4);
    if (VAR8 == VAR14)
    {
        VAR2->VAR12 |= VAR17;
    }
    else
    {
        VAR2->VAR21 = VAR4->VAR22;
        VAR2->VAR12 &= ~VAR23;
        VAR2->VAR12 |= (VAR7 << 9);
    }
VAR15:
    switch (VAR8)
    {
    case VAR24:
    case VAR25:
        FUN8(VAR2, VAR6);
        VAR9 = 4;
        break;
    case VAR26:
        memcpy(VAR6, VAR2->VAR27, sizeof(VAR2->VAR27));
        VAR9 = 16;
        break;
    case VAR28:
        memcpy(VAR6, VAR2->VAR29, sizeof(VAR2->VAR29));
        VAR9 = 16;
        break;
    case VAR30:
        FUN9(VAR2, VAR6);
        VAR9 = 4;
        break;
    case VAR31:
        FUN10(VAR2, VAR6);
        VAR9 = 4;
        break;
    case VAR32:
        FUN11(VAR2, VAR6);
        VAR9 = 4;
        break;
    case VAR33:
    case VAR14:
    default:
        VAR9 = 0;
        break;
    }
    if (VAR8 != VAR14)
    {
        VAR2->VAR12 &= ~VAR34;
    }
    if (VAR9)
    {
        int VAR35;
        FUN12("");
        for (VAR35 = 0; VAR35 < VAR9; VAR35++)
            FUN13("", VAR6[VAR35]);
        FUN13("", VAR2->VAR19);
    }
    else
    {
        FUN12("", VAR2->VAR19);
    }
    return VAR9;
}