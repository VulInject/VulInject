static int FUN1(VAR1 *VAR2)
{
    AssignedIRQType VAR3;
    PCIINTxRoute VAR4;
    bool VAR5;
    int VAR6;
    if (FUN2(&VAR2->VAR2, VAR7) == 0)
    {
        FUN3(&VAR2->VAR2, NULL);
        return 0;
    }
    if (!FUN4())
    {
        return -VAR8;
    }
    FUN3(&VAR2->VAR2, VAR9);
    VAR4 = FUN5(&VAR2->VAR2, VAR2->VAR10);
    assert(VAR4.VAR11 != VAR12);
    if (!FUN6(&VAR2->VAR4, &VAR4))
    {
        return 0;
    }
    switch (VAR2->VAR13)
    {
    case VAR14:
    case VAR15:
        VAR5 = VAR2->VAR13 == VAR15;
        VAR6 = FUN7(VAR16, VAR2->VAR17, VAR5);
        break;
    case VAR18:
        VAR6 = FUN8(VAR16, VAR2->VAR17);
        break;
    case VAR19:
        VAR6 = FUN9(VAR16, VAR2->VAR17);
        break;
    default:
        VAR6 = 0;
        break;
    }
    if (VAR6)
    {
        FUN10("");
    }
    VAR2->VAR13 = VAR20;
    if (VAR4.VAR11 == VAR21)
    {
        VAR2->VAR4 = VAR4;
        return 0;
    }
VAR22:
    if (VAR2->VAR23 & VAR24 && VAR2->VAR25.VAR26 & VAR27)
    {
        VAR5 = true;
        VAR3 = VAR15;
    }
    else
    {
        VAR5 = false;
        VAR3 = VAR14;
    }
    VAR6 = FUN11(VAR16, VAR2->VAR17, VAR5, VAR4.VAR28);
    if (VAR6 < 0)
    {
        if (VAR6 == -VAR29 && !(VAR2->VAR23 & VAR24) && VAR2->VAR25.VAR26 & VAR27)
        {
            FUN12(""
                         "");
            FUN13("");
            VAR2->VAR23 |= VAR24;
            goto VAR22;
        }
        FUN12(""%VAR30\"", VAR2->VAR2.VAR31.VAR32, strerror(-VAR6));
        FUN12(""
                     "");
        return VAR6;
    }
    VAR2->VAR4 = VAR4;
    VAR2->VAR13 = VAR3;
    return VAR6;
}