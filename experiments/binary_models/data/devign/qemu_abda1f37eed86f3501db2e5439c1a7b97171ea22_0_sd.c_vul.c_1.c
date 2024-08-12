int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    uint32_t VAR7 = VAR2->VAR8;
    sd_rsp_type_t VAR9;
    int VAR10;
    if (!VAR2->VAR11 || !FUN2(VAR2->VAR11) || !VAR2->VAR12)
    {
        return 0;
    }
    if (FUN3(VAR4))
    {
        VAR2->VAR8 &= ~VAR13;
        return 0;
    }
    VAR2->VAR8 &= ~VAR14;
    FUN4(VAR2);
    if (VAR7 & VAR15)
    {
        if (!FUN5(VAR2, VAR4))
        {
            VAR2->VAR8 |= VAR16;
            fprintf(VAR17, "");
            return 0;
        }
    }
    if (VAR7 & VAR18)
    {
        VAR9 = FUN6(VAR2, *VAR4);
        VAR2->VAR8 &= ~VAR18;
    }
    else
        VAR9 = FUN7(VAR2, *VAR4);
    VAR2->VAR19 = VAR4->VAR20;
    switch (VAR9)
    {
    case VAR21:
    case VAR22:
        FUN8(VAR2, VAR6, VAR7);
        VAR10 = 4;
        break;
    case VAR23:
        memcpy(VAR6, VAR2->VAR24, sizeof(VAR2->VAR24));
        VAR10 = 16;
        break;
    case VAR25:
        memcpy(VAR6, VAR2->VAR26, sizeof(VAR2->VAR26));
        VAR10 = 16;
        break;
    case VAR27:
        FUN9(VAR2, VAR6);
        VAR10 = 4;
        break;
    case VAR28:
        FUN10(VAR2, VAR6);
        VAR10 = 4;
        break;
    case VAR29:
        FUN11(VAR2, VAR6);
        VAR10 = 4;
        break;
    case VAR30:
    default:
        VAR10 = 0;
        break;
    }
    if (VAR2->VAR8 & VAR16)
        VAR10 = 0;
    if (VAR10)
    {
        int VAR31;
        FUN12("");
        for (VAR31 = 0; VAR31 < VAR10; VAR31++)
            FUN13("", VAR6[VAR31]);
        FUN13("", VAR2->VAR32);
    }
    else
    {
        FUN12("", VAR2->VAR32);
    }
    return VAR10;
}