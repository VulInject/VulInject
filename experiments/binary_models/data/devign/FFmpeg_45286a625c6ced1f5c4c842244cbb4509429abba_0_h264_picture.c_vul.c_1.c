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
            VAR8 = FUN3(VAR2);
            VAR2->VAR18.VAR19 = VAR2->VAR18.VAR20;
            VAR2->VAR18.VAR21 = VAR2->VAR18.VAR22;
        }
        VAR2->VAR18.VAR23 = VAR2->VAR18.VAR24;
        VAR2->VAR18.VAR25 = VAR2->VAR18.VAR26;
    }
    if (VAR7->VAR27)
    {
        if (VAR7->VAR27->FUN4(VAR7) < 0)
            FUN5(VAR7, VAR28, "");
    }
    if (!FUN6(VAR2) && VAR2->VAR29)
    {
        FUN7(&VAR4->VAR30.VAR31, VAR2->VAR11);
        FUN7(&VAR4->VAR30.VAR32, VAR4->VAR33[0] ? VAR4->VAR34[0][0].VAR35 : NULL);
        FUN7(&VAR4->VAR30.VAR36, VAR4->VAR33[1] ? VAR4->VAR34[1][0].VAR35 : NULL);
        FUN8(&VAR4->VAR30);
    }
    FUN9();
    VAR2->VAR37 = 0;
    return VAR8;