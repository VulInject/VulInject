static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4, VAR5 *VAR6)
{
    ResourceProps VAR7;
    bool VAR8 = false;
    int VAR9, VAR10;
    char *VAR11 = NULL;
    uint32_t VAR12 = FUN2(VAR6, VAR2);
    uint32_t VAR13 = FUN3(VAR2, VAR14, 3);
    uint32_t VAR15, VAR16;
    if (FUN3(VAR2, VAR17, 1) == VAR18)
    {
        VAR8 = true;
    }
    FUN4(FUN5(VAR3, VAR4, "", FUN3(VAR2, VAR19, 2)));
    FUN4(FUN5(VAR3, VAR4, "", FUN3(VAR2, VAR20, 2)));
    FUN4(FUN5(VAR3, VAR4, "", FUN3(VAR2, VAR21, 1)));
    FUN4(FUN5(VAR3, VAR4, "", VAR13));
    if (FUN3(VAR2, VAR22, 1))
    {
        FUN4(FUN5(VAR3, VAR4, "", FUN3(VAR2, VAR22, 1)));
    }
    if (!VAR8)
    {
        FUN4(FUN5(VAR3, VAR4, "", FUN3(VAR2, VAR23, 1)));
        FUN4(FUN5(VAR3, VAR4, "", FUN3(VAR2, VAR24, 1)));
    }
    if (FUN3(VAR2, VAR25, 2))
    {
        FUN4(FUN5(VAR3, VAR4, "", FUN3(VAR2, VAR25, 2)));
    }
    if (FUN3(VAR2, VAR26, 2))
    {
        FUN4(FUN5(VAR3, VAR4, "", FUN3(VAR2, VAR26, 2)));
    }
    FUN4(FUN5(VAR3, VAR4, "", FUN3(VAR2, VAR27, 1)));
    VAR9 = FUN3(VAR2, VAR28, 2);
    FUN4(FUN5(VAR3, VAR4, "", VAR29 & VAR9));
    if (VAR9 & VAR30)
    {
        FUN4(FUN6(VAR3, VAR4, "", NULL, 0));
    }
    if (VAR9 & VAR31)
    {
        FUN4(FUN6(VAR3, VAR4, "", NULL, 0));
    }
    if (VAR9 & VAR32)
    {
        FUN4(FUN6(VAR3, VAR4, "", NULL, 0));
    }
    FUN4(FUN7(VAR3, VAR4, "", FUN8((VAR13 >> 16) & 0xff, (VAR13 >> 8) & 0xff, VAR13 & 0xff)));
    VAR11 = FUN9(VAR6, VAR2);
    if (!VAR11)
    {
        FUN10("");
        return -1;
    }
    VAR10 = FUN7(VAR3, VAR4, "", VAR11);
    FUN11(VAR11);
    if (VAR10 < 0)
    {
        return VAR10;
    }
    if (VAR12)
    {
        FUN4(FUN5(VAR3, VAR4, "", VAR12));
    }
    FUN4(FUN5(VAR3, VAR4, "", VAR33));
    FUN4(FUN5(VAR3, VAR4, "", VAR34));
    VAR15 = FUN12(VAR2);
    if (VAR15)
    {
        FUN4(FUN5(VAR3, VAR4, "", VAR15));
    }
    VAR16 = VAR2->VAR35;
    if (VAR16)
    {
        FUN4(FUN5(VAR3, VAR4, "", VAR16));
    }
    FUN13(VAR2, &VAR7);
    FUN4(FUN6(VAR3, VAR4, "", (VAR36 *)VAR7.VAR37, VAR7.VAR38));
    FUN4(FUN6(VAR3, VAR4, "", (VAR36 *)VAR7.VAR39, VAR7.VAR40));
    if (VAR6->VAR41 && FUN14(VAR2))
    {
        FUN4(FUN5(VAR3, VAR4, "", 0x1));
    }
    return 0;
}