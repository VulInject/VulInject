static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4, VAR5 *VAR6)
{
    ResourceProps VAR7;
    bool VAR8 = false;
    int VAR9, VAR10;
    char *VAR11 = NULL;
    uint32_t VAR12 = FUN2(VAR6, VAR2);
    if (FUN3(VAR2, VAR13, 1) == VAR14)
    {
        VAR8 = true;
    }
    FUN4(FUN5(VAR3, VAR4, "", FUN3(VAR2, VAR15, 2)));
    FUN4(FUN5(VAR3, VAR4, "", FUN3(VAR2, VAR16, 2)));
    FUN4(FUN5(VAR3, VAR4, "", FUN3(VAR2, VAR17, 1)));
    FUN4(FUN5(VAR3, VAR4, "", FUN3(VAR2, VAR18, 3)));
    if (FUN3(VAR2, VAR19, 1))
    {
        FUN4(FUN5(VAR3, VAR4, "", FUN3(VAR2, VAR19, 1)));
    }
    if (!VAR8)
    {
        FUN4(FUN5(VAR3, VAR4, "", FUN3(VAR2, VAR20, 1)));
        FUN4(FUN5(VAR3, VAR4, "", FUN3(VAR2, VAR21, 1)));
    }
    if (FUN3(VAR2, VAR22, 2))
    {
        FUN4(FUN5(VAR3, VAR4, "", FUN3(VAR2, VAR22, 2)));
    }
    if (FUN3(VAR2, VAR23, 2))
    {
        FUN4(FUN5(VAR3, VAR4, "", FUN3(VAR2, VAR23, 2)));
    }
    FUN4(FUN5(VAR3, VAR4, "", FUN3(VAR2, VAR24, 1)));
    VAR9 = FUN3(VAR2, VAR25, 2);
    FUN4(FUN5(VAR3, VAR4, "", VAR26 & VAR9));
    if (VAR9 & VAR27)
    {
        FUN4(FUN6(VAR3, VAR4, "", NULL, 0));
    }
    if (VAR9 & VAR28)
    {
        FUN4(FUN6(VAR3, VAR4, "", NULL, 0));
    }
    if (VAR9 & VAR29)
    {
        FUN4(FUN6(VAR3, VAR4, "", NULL, 0));
    }
    FUN4(FUN7(VAR3, VAR4, "", ""));
    VAR11 = FUN8(VAR6, VAR2);
    if (!VAR11)
    {
        FUN9("");
        return -1;
    }
    VAR10 = FUN7(VAR3, VAR4, "", VAR11);
    FUN10(VAR11);
    if (VAR10 < 0)
    {
        return VAR10;
    }
    if (VAR12)
    {
        FUN4(FUN5(VAR3, VAR4, "", VAR12));
    }
    FUN4(FUN5(VAR3, VAR4, "", VAR30));
    FUN4(FUN5(VAR3, VAR4, "", VAR31));
    FUN4(FUN5(VAR3, VAR4, "", VAR31));
    FUN11(VAR2, &VAR7);
    FUN4(FUN6(VAR3, VAR4, "", (VAR32 *)VAR7.VAR33, VAR7.VAR34));
    FUN4(FUN6(VAR3, VAR4, "", (VAR32 *)VAR7.VAR35, VAR7.VAR36));
    return 0;
}