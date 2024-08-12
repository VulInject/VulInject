int FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, const VAR6 *VAR7, int *VAR8)
{
    VAR9 *VAR10 = VAR3->VAR11;
    int VAR12;
    if (VAR10->VAR13.VAR14)
    {
        VAR12 = FUN2(VAR10);
        if (VAR12)
            return VAR12;
    }
    if (VAR10->VAR15.VAR16 == 1 || VAR10->VAR17)
        FUN3(VAR10);
    FUN4(VAR10, (VAR18 **)VAR7->VAR19);
    FUN5(VAR10);
    if (VAR10->VAR20)
        FUN6(VAR10);
    FUN7(&VAR10->VAR21, VAR10->VAR22[0].VAR23[1], VAR24 * VAR10->VAR25 * VAR10->VAR26);
    VAR10->VAR27 = VAR10->VAR28;
    FUN8(VAR10);
    if (VAR10->VAR27)
        FUN9(VAR10);
    FUN10(VAR10);
    if (!VAR10->VAR20)
        FUN6(VAR10);
    FUN11(VAR10);
    FUN12(VAR10);
    VAR12 = FUN13(VAR10);
    if (VAR12)
    {
        FUN14(VAR3, VAR29, "");
        return VAR12;
    }
    FUN15(VAR10);
    FUN16(VAR10);
    if ((VAR12 = FUN17(VAR3, VAR5, VAR10->VAR30)) < 0)
        return VAR12;
    FUN18(VAR10, VAR5->VAR31);
    if (VAR7->VAR32 != VAR33)
        VAR5->VAR32 = VAR7->VAR32 - FUN19(VAR3, VAR3->VAR34);
    *VAR8 = 1;
    return 0;
}