static void FUN1(void)
{
    VAR1 *VAR2 = FUN2(VAR1, 1);
    VAR1 *VAR3 = FUN2(VAR1, 1);
    VAR4 *VAR5, *VAR6;
    int VAR7;
    int VAR8[3];
    int *VAR9 = NULL;
    size_t VAR10 = 0;
    size_t VAR11;
    char VAR12[12], VAR13[12];
    struct iovec VAR14[1], VAR15[1];
    VAR7 = open(VAR16, VAR17 | VAR18 | VAR19, 0700);
    FUN3(VAR7 != -1);
    VAR8[0] = VAR7;
    VAR8[1] = VAR7;
    VAR8[2] = VAR7;
    VAR2->VAR20 = VAR21;
    VAR2->VAR22.VAR23.VAR24 = FUN2(VAR25, 1);
    VAR2->VAR22.VAR23.VAR24->VAR26 = FUN4(VAR27);
    VAR3->VAR20 = VAR21;
    VAR3->VAR22.VAR23.VAR24 = FUN2(VAR25, 1);
    VAR3->VAR22.VAR23.VAR24->VAR26 = FUN4(VAR27);
    FUN5(VAR2, VAR3, &VAR5, &VAR6);
    memcpy(VAR12, "", FUN6(VAR12));
    VAR14[0].VAR28 = VAR12;
    VAR14[0].VAR29 = FUN6(VAR12);
    VAR15[0].VAR28 = VAR13;
    VAR15[0].VAR29 = FUN6(VAR13);
    FUN3(FUN7(VAR5, VAR30));
    FUN3(FUN7(VAR6, VAR30));
    FUN8(VAR5, VAR14, FUN6(VAR14), VAR8, FUN6(VAR8), &VAR31);
    FUN9(VAR6, VAR15, FUN6(VAR15), &VAR9, &VAR10, &VAR31);
    FUN3(VAR10 == FUN6(VAR8));
    for (VAR11 = 0; VAR11 < VAR10; VAR11++)
    {
        FUN10(VAR9[VAR11], !=, VAR7);
    }
    FUN10(VAR9[0], !=, VAR9[1]);
    FUN10(VAR9[0], !=, VAR9[2]);
    FUN10(VAR9[1], !=, VAR9[2]);
    FUN3(memcmp(VAR12, VAR13, FUN6(VAR12)) == 0);
    FUN3(write(VAR9[0], VAR12, FUN6(VAR12)) == FUN6(VAR12));
    memset(VAR13, 0, FUN6(VAR13));
    FUN3(FUN11(VAR7, 0, VAR32) == 0);
    FUN3(read(VAR7, VAR13, FUN6(VAR13)) == FUN6(VAR13));
    FUN3(memcmp(VAR12, VAR13, FUN6(VAR12)) == 0);
    FUN12(FUN13(VAR5));
    FUN12(FUN13(VAR6));
    FUN14(VAR2);
    FUN14(VAR3);
    unlink(VAR27);
    unlink(VAR16);
    close(VAR7);
    for (VAR11 = 0; VAR11 < VAR10; VAR11++)
    {
        close(VAR9[VAR11]);
    }
    FUN15(VAR9);
}