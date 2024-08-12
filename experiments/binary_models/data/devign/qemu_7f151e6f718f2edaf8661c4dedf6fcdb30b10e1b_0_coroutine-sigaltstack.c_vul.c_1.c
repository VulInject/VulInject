VAR1 *FUN1(void)
{
    const size_t VAR2 = 1 << 20;
    VAR3 *VAR4;
    VAR5 *VAR6;
    struct sigaction VAR7;
    struct sigaction VAR8;
    stack_t VAR9;
    stack_t VAR10;
    sigset_t VAR11;
    sigset_t VAR12;
    jmp_buf VAR13;
    VAR4 = FUN2(sizeof(*VAR4));
    VAR4->VAR14 = FUN3(VAR2);
    VAR4->VAR15.VAR16 = &VAR13;
    VAR6 = FUN4();
    VAR6->VAR17 = VAR4;
    FUN5(&VAR11);
    FUN6(&VAR11, VAR18);
    FUN7(VAR19, &VAR11, &VAR12);
    VAR7.VAR20 = VAR21;
    FUN8(&VAR7.VAR22);
    VAR7.VAR23 = VAR24;
    if (FUN9(VAR18, &VAR7, &VAR8) != 0)
    {
        FUN10();
    }
    VAR9.VAR25 = VAR4->VAR14;
    VAR9.VAR26 = VAR2;
    VAR9.VAR27 = 0;
    if (FUN11(&VAR9, &VAR10) < 0)
    {
        FUN10();
    }
    VAR6->VAR28 = 0;
    FUN12(FUN13(), VAR18);
    FUN8(&VAR11);
    FUN14(&VAR11, VAR18);
    while (!VAR6->VAR28)
    {
        FUN15(&VAR11);
    }
    FUN11(NULL, &VAR9);
    VAR9.VAR27 = VAR29;
    if (FUN11(&VAR9, NULL) < 0)
    {
        FUN10();
    }
    FUN11(NULL, &VAR9);
    if (!(VAR10.VAR27 & VAR29))
    {
        FUN11(&VAR10, NULL);
    }
    FUN9(VAR18, &VAR8, NULL);
    FUN7(VAR30, &VAR12, NULL);
    if (!FUN16(VAR13, 0))
    {
        FUN17(VAR6->VAR31, 1);
    }
    return &VAR4->VAR15;
}