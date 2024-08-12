static VAR1 FUN1(VAR2 *VAR3, struct VAR4 *VAR5)
{
    VAR6 *VAR7 = VAR3->VAR7;
    ssize_t VAR8;
    FUN2(FUN3());
    VAR7->VAR9 = FUN4();
    FUN5(VAR7);
    VAR8 = FUN6(VAR7->VAR10, VAR5);
    if (VAR8 < 0)
    {
        if (VAR8 != -VAR11)
        {
            VAR8 = -VAR12;
        }
        goto VAR13;
    }
    FUN7("");
    if (VAR5->VAR14 != VAR15)
    {
        VAR3->VAR16 = true;
    }
    if (VAR5->VAR14 == VAR17)
    {
        FUN7("");
        VAR8 = -VAR12;
        goto VAR13;
    }
    if ((VAR5->VAR18 + VAR5->VAR19) < VAR5->VAR18)
    {
        FUN8("");
        VAR8 = -VAR20;
        goto VAR13;
    }
    if (VAR5->VAR14 == VAR21 || VAR5->VAR14 == VAR15)
    {
        if (VAR5->VAR19 > VAR22)
        {
            FUN8("" VAR23 "", VAR5->VAR19, VAR22);
            VAR8 = -VAR20;
            goto VAR13;
        }
        VAR3->VAR24 = FUN9(VAR7->VAR25->VAR26, VAR5->VAR19);
        if (VAR3->VAR24 == NULL)
        {
            VAR8 = -VAR27;
            goto VAR13;
        }
    }
    if (VAR5->VAR14 == VAR15)
    {
        FUN7("" VAR23 "", VAR5->VAR19);
        if (FUN10(VAR7->VAR10, VAR3->VAR24, VAR5->VAR19) != VAR5->VAR19)
        {
            FUN8("");
            VAR8 = -VAR12;
            goto VAR13;
        }
        VAR3->VAR16 = true;
    }
    if (VAR5->VAR18 + VAR5->VAR19 > VAR7->VAR25->VAR28)
    {
        FUN8("" VAR29 "" VAR23 "" VAR29, VAR5->VAR18, VAR5->VAR19, (VAR30)VAR7->VAR25->VAR28);
        VAR8 = VAR5->VAR14 == VAR15 ? -VAR31 : -VAR20;
        goto VAR13;
    }
    if (VAR5->VAR32 & ~VAR33)
    {
        FUN8("", VAR5->VAR32);
        VAR8 = -VAR20;
        goto VAR13;
    }
    VAR8 = 0;
VAR13:
    VAR7->VAR9 = NULL;
    FUN5(VAR7);
    return VAR8;
}