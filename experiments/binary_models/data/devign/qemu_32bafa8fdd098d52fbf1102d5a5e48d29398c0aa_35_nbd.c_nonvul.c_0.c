static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, char **export, VAR6 **VAR7)
{
    VAR1 *VAR8;
    if (FUN2(VAR5, "") == FUN2(VAR5, ""))
    {
        if (FUN2(VAR5, ""))
        {
            FUN3(VAR7, "");
        }
        else
        {
            FUN3(VAR7, "");
        }
        return NULL;
    }
    VAR8 = FUN4(VAR1, 1);
    if (FUN2(VAR5, ""))
    {
        VAR9 *VAR10;
        VAR8->VAR11 = VAR12;
        VAR10 = VAR8->VAR13.VAR10.VAR14 = FUN4(VAR9, 1);
        VAR10->VAR15 = FUN5(FUN6(VAR5, ""));
        FUN7(VAR5, "");
    }
    else
    {
        VAR16 *VAR17;
        VAR8->VAR11 = VAR18;
        VAR17 = VAR8->VAR13.VAR17.VAR14 = FUN4(VAR16, 1);
        VAR17->VAR19 = FUN5(FUN6(VAR5, ""));
        if (!FUN8(VAR5, ""))
        {
            VAR17->VAR20 = FUN9("", VAR21);
        }
        else
        {
            VAR17->VAR20 = FUN5(FUN6(VAR5, ""));
        }
        FUN7(VAR5, "");
        FUN7(VAR5, "");
    }
    VAR3->VAR22.VAR23 = VAR8->VAR11 == VAR12;
    *export = FUN5(FUN8(VAR5, ""));
    if (*export)
    {
        FUN7(VAR5, "");
    }
    return VAR8;
}