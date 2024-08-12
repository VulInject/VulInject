static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    AssignedIRQType VAR5;
    PCIINTxRoute VAR6;
    bool VAR7;
    int VAR8;
    VAR3 *VAR9 = NULL;
    if (FUN2(&VAR2->VAR2, VAR10) == 0)
    {
        FUN3(&VAR2->VAR2, NULL);
        return 0;
    }
    FUN4(&VAR9);
    if (VAR9)
    {
        FUN5(VAR4, VAR9);
        return -VAR11;
    }
    FUN3(&VAR2->VAR2, VAR12);
    VAR6 = FUN6(&VAR2->VAR2, VAR2->VAR13);
    assert(VAR6.VAR14 != VAR15);
    if (!FUN7(&VAR2->VAR6, &VAR6))
    {
        return 0;
    }
    switch (VAR2->VAR16)
    {
    case VAR17:
    case VAR18:
        VAR7 = VAR2->VAR16 == VAR18;
        VAR8 = FUN8(VAR19, VAR2->VAR20, VAR7);
        break;
    case VAR21:
        VAR8 = FUN9(VAR19, VAR2->VAR20);
        break;
    case VAR22:
        VAR8 = FUN10(VAR19, VAR2->VAR20);
        break;
    default:
        VAR8 = 0;
        break;
    }
    if (VAR8)
    {
        FUN11("");
    }
    VAR2->VAR16 = VAR23;
    if (VAR6.VAR14 == VAR24)
    {
        VAR2->VAR6 = VAR6;
        return 0;
    }
VAR25:
    if (VAR2->VAR26 & VAR27 && VAR2->VAR28.VAR29 & VAR30)
    {
        VAR7 = true;
        VAR5 = VAR18;
    }
    else
    {
        VAR7 = false;
        VAR5 = VAR17;
    }
    VAR8 = FUN12(VAR19, VAR2->VAR20, VAR7, VAR6.VAR31);
    if (VAR8 < 0)
    {
        if (VAR8 == -VAR32 && !(VAR2->VAR26 & VAR27) && VAR2->VAR28.VAR29 & VAR30)
        {
            FUN13(""
                         "");
            FUN14("");
            VAR2->VAR26 |= VAR27;
            goto VAR25;
        }
        FUN15(VAR4, -VAR8, ""%VAR33\"", VAR2->VAR2.VAR34.VAR35);
        FUN16(VAR4, ""
                                "");
        return VAR8;
    }
    VAR2->VAR6 = VAR6;
    VAR2->VAR16 = VAR5;
    return VAR8;
}