static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR7 *VAR8 = FUN4(VAR2);
    uint32_t VAR9;
    const char VAR10[] = "";
    const char VAR11[] = "";
    char VAR12[sizeof(VAR10) + 3];
    char VAR13[sizeof(VAR10) + 3];
    VAR7 *VAR14;
    VAR6->VAR15 = FUN5(NULL, "");
    FUN6(VAR6->VAR15, "", VAR6->VAR16);
    FUN6(VAR6->VAR15, "", VAR17);
    FUN7(VAR6->VAR15);
    VAR14 = FUN4(VAR6->VAR15);
    FUN8(VAR8, VAR14);
    FUN9(VAR4, VAR18, VAR17 - 32);
    FUN10(&VAR6->VAR19, VAR2, "", VAR20);
    FUN10(&VAR6->VAR21, VAR2, "", VAR22);
    for (VAR9 = 0; VAR9 < VAR6->VAR16; VAR9++)
    {
        sprintf(VAR12, "", VAR10, VAR9);
        FUN11(&VAR6->VAR23[VAR9], VAR2, VAR12, FUN12(VAR14, 1), 0, VAR24);
        FUN13(&VAR6->VAR19, FUN14(VAR9), &VAR6->VAR23[VAR9]);
        sprintf(VAR13, "", VAR11, VAR9);
        FUN11(&VAR6->VAR25[VAR9], VAR2, VAR13, FUN12(VAR14, 0), 0, VAR26);
        FUN13(&VAR6->VAR21, FUN15(VAR9), &VAR6->VAR25[VAR9]);
    }
    FUN16(VAR8, &VAR6->VAR19);
    FUN16(VAR8, &VAR6->VAR21);
}