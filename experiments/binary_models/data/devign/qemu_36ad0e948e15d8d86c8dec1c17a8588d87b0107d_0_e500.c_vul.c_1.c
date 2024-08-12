static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR1 **VAR6)
{
    VAR7 *VAR8;
    VAR1 *VAR9;
    VAR10 *VAR11 = NULL;
    VAR12 *VAR13;
    int VAR14;
    VAR9 = FUN2(VAR1, 256);
    if (FUN3())
    {
        bool VAR15 = true, VAR16 = false;
        VAR8 = FUN4("");
        if (!FUN5(&VAR8->VAR17))
        {
            VAR15 = FUN6(FUN7(&VAR8->VAR17), "", true);
            VAR16 = FUN6(FUN7(&VAR8->VAR17), "", false);
        }
        if (VAR15)
        {
            VAR11 = FUN8(VAR3, VAR6);
        }
        if (VAR16 && !VAR11)
        {
            fprintf(VAR18, "", VAR19);
            FUN9();
        }
    }
    if (!VAR11)
    {
        VAR11 = FUN10(VAR3, VAR6);
    }
    for (VAR14 = 0; VAR14 < 256; VAR14++)
    {
        VAR9[VAR14] = FUN11(VAR11, VAR14);
    }
    VAR13 = FUN12(VAR11);
    FUN13(VAR5, VAR20, VAR13->VAR21[0].VAR22);
    return VAR9;
}