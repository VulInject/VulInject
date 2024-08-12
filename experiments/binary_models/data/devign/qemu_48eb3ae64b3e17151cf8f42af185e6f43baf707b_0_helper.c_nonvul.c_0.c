static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4, VAR5;
    ARMCPRegInfo VAR6 = {
        .VAR7 = "",
        .VAR8 = 14,
        .VAR9 = 0,
        .VAR10 = 0,
        .VAR11 = 0,
        .VAR12 = 0,
        .VAR13 = VAR14,
        .VAR15 = VAR16,
        .VAR17 = VAR2->VAR6,
    };
    VAR5 = FUN2(VAR2->VAR6, 24, 4);
    VAR4 = FUN2(VAR2->VAR6, 28, 4);
    if (FUN3(&VAR2->VAR18, VAR19))
    {
        assert(FUN2(VAR2->VAR20, 12, 4) == VAR5);
        assert(FUN2(VAR2->VAR20, 20, 4) == VAR4);
    }
    FUN4(VAR2, &VAR6);
    FUN5(VAR2, VAR21);
    if (FUN3(&VAR2->VAR18, VAR22))
    {
        FUN5(VAR2, VAR23);
    }
    for (VAR3 = 0; VAR3 < VAR5 + 1; VAR3++)
    {
        ARMCPRegInfo VAR24[] = {{.VAR7 = "", .VAR25 = VAR26, .VAR8 = 14, .VAR27 = 2, .VAR11 = 0, .VAR9 = 0, .VAR10 = VAR3, .VAR12 = 4, .VAR13 = VAR28, .VAR29 = FUN6(VAR30, VAR31.VAR32[VAR3])}, {.VAR7 = "", .VAR25 = VAR26, .VAR8 = 14, .VAR27 = 2, .VAR11 = 0, .VAR9 = 0, .VAR10 = VAR3, .VAR12 = 5, .VAR13 = VAR28, .VAR29 = FUN6(VAR30, VAR31.VAR33[VAR3])}, VAR34};
        FUN5(VAR2, VAR24);
    }
    for (VAR3 = 0; VAR3 < VAR4 + 1; VAR3++)
    {
        ARMCPRegInfo VAR24[] = {{.VAR7 = "", .VAR25 = VAR26, .VAR8 = 14, .VAR27 = 2, .VAR11 = 0, .VAR9 = 0, .VAR10 = VAR3, .VAR12 = 6, .VAR13 = VAR28, .VAR29 = FUN6(VAR30, VAR31.VAR35[VAR3])}, {.VAR7 = "", .VAR25 = VAR26, .VAR8 = 14, .VAR27 = 2, .VAR11 = 0, .VAR9 = 0, .VAR10 = VAR3, .VAR12 = 7, .VAR13 = VAR28, .VAR29 = FUN6(VAR30, VAR31.VAR36[VAR3])}, VAR34};
        FUN5(VAR2, VAR24);
    }
}