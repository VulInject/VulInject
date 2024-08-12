static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    uint32_t VAR9, VAR10;
    size_t VAR11 = sizeof(struct VAR12);
    if (!VAR8->VAR13.VAR14)
    {
        FUN4(VAR4, "");
        return;
    }
    VAR10 = VAR15 / 2 - 1;
    if (VAR8->VAR13.VAR14 > VAR10)
    {
        FUN4(VAR4, "", VAR10);
        return;
    }
    if (!FUN5(VAR8->VAR16, VAR17))
    {
        VAR11 = FUN6(struct VAR12, VAR18);
    }
    FUN7(VAR6, "", VAR19, VAR11);
    FUN8(&VAR8->VAR20, sizeof(VAR8->VAR20), VAR21, VAR2, VAR6->VAR22);
    FUN9(FUN10(&VAR8->VAR20), FUN11(VAR8), VAR4);
    VAR8->VAR20.VAR8 = VAR8;
    FUN12(&VAR8->VAR23);
    VAR8->VAR20.VAR24 = VAR8->VAR13.VAR14;
    VAR8->VAR25 = FUN13(VAR8->VAR13.VAR14 * sizeof(VAR26 *));
    VAR8->VAR27 = FUN13(VAR8->VAR13.VAR14 * sizeof(VAR26 *));
    VAR8->VAR25[0] = FUN14(VAR6, 128, VAR28);
    VAR8->VAR27[0] = FUN14(VAR6, 128, VAR29);
    VAR8->VAR30 = FUN14(VAR6, 32, VAR31);
    VAR8->VAR32 = FUN14(VAR6, 32, VAR33);
    for (VAR9 = 1; VAR9 < VAR8->VAR20.VAR24; VAR9++)
    {
        VAR8->VAR25[VAR9] = FUN14(VAR6, 128, VAR28);
        VAR8->VAR27[VAR9] = FUN14(VAR6, 128, VAR29);
    }
    VAR8->VAR34 = FUN15(((VAR8->VAR13.VAR14 + 31) / 32) * sizeof(VAR8->VAR34[0]));
    FUN16(VAR8, 0);
    VAR8->VAR35 = NULL;
    FUN17(&VAR36.VAR37, VAR8, VAR38);
}