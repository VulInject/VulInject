static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *const VAR5 = &VAR2->VAR5;
    VAR6 *const VAR7 = VAR5->VAR7;
    int VAR8 = 0;
    VAR5->VAR9 = 0;
    if (!VAR3 && !VAR5->VAR10)
        FUN2(&VAR5->VAR11->VAR12, (16 * VAR5->VAR13 >> VAR14) - 1, VAR5->VAR15 == VAR16);
    if (VAR17 && VAR5->VAR7->VAR18->VAR19 & VAR20)
        FUN3(VAR5);
    if (VAR3 || !(VAR7->VAR21 & VAR22))
    {
        if (!VAR5->VAR10)
        {
            VAR8 = FUN4(VAR2, VAR2->VAR23, VAR2->VAR24);
            VAR2->VAR25 = VAR2->VAR26;
            VAR2->VAR27 = VAR2->VAR28;
        }
        VAR2->VAR29 = VAR2->VAR30;
        VAR2->VAR31 = VAR2->VAR32;
        VAR2->VAR33 = VAR2->VAR34;
    }
    if (VAR7->VAR35)
    {
        if (VAR7->VAR35->FUN5(VAR7) < 0)
            FUN6(VAR7, VAR36, "");
    }
    if (VAR17 && VAR5->VAR7->VAR18->VAR19 & VAR20)
        FUN7(VAR5);
    if (!VAR14)
        FUN8(VAR5);
    FUN9(VAR5);
    VAR2->VAR37 = 0;
    return VAR8;
}