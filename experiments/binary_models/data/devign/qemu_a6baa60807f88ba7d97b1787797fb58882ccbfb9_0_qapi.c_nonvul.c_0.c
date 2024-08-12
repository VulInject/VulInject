VAR1 *FUN1(bool VAR2, bool VAR3, VAR4 **VAR5)
{
    VAR1 *VAR6 = NULL, **VAR7 = &VAR6;
    VAR8 *VAR9;
    VAR10 *VAR11;
    if (VAR2 && VAR3)
    {
        for (VAR11 = FUN2(NULL); VAR11; VAR11 = FUN2(VAR11))
        {
            VAR1 *VAR12 = FUN3(sizeof(*VAR12));
            VAR13 *VAR14 = FUN4(VAR11);
            FUN5(VAR14);
            VAR12->VAR15 = FUN6(VAR11, false);
            FUN7(VAR14);
            *VAR7 = VAR12;
            VAR7 = &VAR12->VAR16;
        }
    }
    else
    {
        for (VAR9 = FUN8(NULL); VAR9; VAR9 = FUN8(VAR9))
        {
            VAR1 *VAR12 = FUN3(sizeof(*VAR12));
            VAR13 *VAR14 = FUN9(VAR9);
            VAR17 *VAR18;
            FUN5(VAR14);
            VAR18 = FUN6(FUN10(VAR9), true);
            VAR18->VAR19 = true;
            VAR18->VAR20 = FUN11(FUN12(VAR9));
            FUN13(VAR18->VAR21, VAR9);
            FUN7(VAR14);
            VAR12->VAR15 = VAR18;
            *VAR7 = VAR12;
            VAR7 = &VAR12->VAR16;
        }
    }
    return VAR6;
}