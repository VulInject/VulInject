static void *FUN1(void *VAR1)
{
    pid_t VAR2;
    sigset_t VAR3;
    VAR2 = FUN2();
    if (FUN3(&VAR3))
        FUN4("");
    if (FUN5(VAR4, &VAR3, NULL))
        FUN4("");
    while (1)
    {
        struct VAR5 *VAR6;
        size_t VAR7 = 0;
        qemu_timeval VAR8;
        struct timespec VAR9;
        FUN6(&VAR8);
        VAR9.VAR10 = VAR8.VAR10 + 10;
        VAR9.VAR11 = 0;
        FUN7(&VAR12);
        while (FUN8(&VAR13) && !(VAR7 == VAR14))
        {
            VAR7 = FUN9(&VAR15, &VAR12, &VAR9);
        }
        if (FUN8(&VAR13))
            break;
        VAR6 = FUN10(&VAR13);
        FUN11(&VAR13, VAR6, VAR16);
        VAR6->VAR17 = 1;
        VAR18--;
        FUN12(&VAR12);
        switch (VAR6->VAR19 & VAR20)
        {
        case VAR21:
        case VAR22:
            VAR7 = FUN13(VAR6);
            break;
        case VAR23:
            VAR7 = FUN14(VAR6);
            break;
        default:
            fprintf(VAR24, "", VAR6->VAR19);
            VAR7 = -VAR25;
            break;
        }
        FUN7(&VAR12);
        VAR6->VAR7 = VAR7;
        VAR18++;
        FUN12(&VAR12);
        if (FUN15(VAR2, VAR6->VAR26))
            FUN4("");
    }
    VAR18--;
    VAR27--;
    FUN12(&VAR12);
    return NULL;
}