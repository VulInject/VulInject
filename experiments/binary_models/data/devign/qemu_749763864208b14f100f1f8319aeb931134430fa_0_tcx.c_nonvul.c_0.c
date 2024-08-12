static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    ram_addr_t VAR9 = 0;
    int VAR10, VAR11;
    VAR12 *VAR13;
    char *VAR14;
    FUN4(&VAR8->VAR15, FUN5(VAR8), "", VAR8->VAR16 * (1 + 4 + 4), &VAR17);
    FUN6(&VAR8->VAR15);
    FUN7(&VAR8->VAR15, true, VAR18);
    VAR13 = FUN8(&VAR8->VAR15);
    FUN6(&VAR8->VAR19);
    VAR14 = FUN9(VAR20, VAR21);
    if (VAR14)
    {
        VAR11 = FUN10(VAR14, &VAR8->VAR19);
        FUN11(VAR14);
        if (VAR11 < 0 || VAR11 > VAR22)
        {
            FUN12("", VAR21);
        }
    }
    VAR8->VAR23 = VAR13;
    VAR10 = VAR8->VAR16;
    FUN13(&VAR8->VAR24, FUN5(VAR8), "", &VAR8->VAR15, VAR9, VAR10);
    FUN14(VAR6, &VAR8->VAR24);
    VAR9 += VAR10;
    VAR13 += VAR10;
    VAR10 = VAR8->VAR16 * 4;
    VAR8->VAR25 = (VAR26 *)VAR13;
    VAR8->VAR27 = VAR9;
    FUN13(&VAR8->VAR28, FUN5(VAR8), "", &VAR8->VAR15, VAR9, VAR10);
    FUN14(VAR6, &VAR8->VAR28);
    VAR9 += VAR10;
    VAR13 += VAR10;
    VAR10 = VAR8->VAR16 * 4;
    VAR8->VAR29 = (VAR26 *)VAR13;
    VAR8->VAR30 = VAR9;
    FUN13(&VAR8->VAR31, FUN5(VAR8), "", &VAR8->VAR15, VAR9, VAR10);
    FUN14(VAR6, &VAR8->VAR31);
    if (VAR8->VAR32 == 8)
    {
        FUN15(&VAR8->VAR33, FUN5(VAR8), &VAR34, VAR8, "", VAR35);
        FUN14(VAR6, &VAR8->VAR33);
    }
    FUN16(VAR6, &VAR8->VAR36);
    if (VAR8->VAR32 == 8)
    {
        VAR8->VAR37 = FUN17(FUN18(VAR2), 0, &VAR38, VAR8);
    }
    else
    {
        VAR8->VAR37 = FUN17(FUN18(VAR2), 0, &VAR39, VAR8);
    }
    VAR8->VAR40 = 0;
    FUN19(VAR8->VAR37, VAR8->VAR41, VAR8->VAR42);
}