int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *const VAR7 = VAR2->VAR7;
    int VAR8 = 0;
    VAR2->VAR9 = 0;
    if (!VAR5 && !VAR2->VAR10)
        FUN2(&VAR2->VAR11->VAR12, VAR13, VAR2->VAR14 == VAR15);
    if (VAR5 || !(VAR7->VAR16 & VAR17))
    {
        if (!VAR2->VAR10)
        {
            VAR8 = FUN3(VAR2, VAR2->VAR18, VAR2->VAR19);
            VAR2->VAR20.VAR21 = VAR2->VAR20.VAR22;
            VAR2->VAR20.VAR23 = VAR2->VAR20.VAR24;
        }
        VAR2->VAR20.VAR25 = VAR2->VAR20.VAR26;
        VAR2->VAR20.VAR27 = VAR2->VAR20.VAR28;
    }
    if (VAR7->VAR29)
    {
        if (VAR7->VAR29->FUN4(VAR7) < 0)
            FUN5(VAR7, VAR30, "");
    }
    if (!FUN6(VAR2) && VAR2->VAR31)
    {
        FUN7(&VAR4->VAR32.VAR33, VAR2->VAR11);
        FUN7(&VAR4->VAR32.VAR34, VAR4->VAR35[0] ? VAR4->VAR36[0][0].VAR37 : NULL);
        FUN7(&VAR4->VAR32.VAR38, VAR4->VAR35[1] ? VAR4->VAR36[1][0].VAR37 : NULL);
        FUN8(&VAR4->VAR32);
    }
    FUN9();
    VAR2->VAR39 = 0;
    return VAR8;
}