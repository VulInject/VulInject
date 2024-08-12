void FUN1(int VAR1, char *VAR2, size_t VAR3)
{
    int VAR4;
    struct sigaction VAR5, VAR6;
    sigset_t VAR7, VAR8;
    memset(&VAR5, 0, sizeof(VAR5));
    VAR5.VAR9 = &VAR10;
    VAR5.VAR11 = 0;
    VAR4 = FUN2(VAR12, &VAR5, &VAR6);
    if (VAR4)
    {
        FUN3("");
        FUN4(1);
    }
    FUN5(&VAR7);
    FUN6(&VAR7, VAR12);
    FUN7(VAR13, &VAR7, &VAR8);
    if (FUN8(VAR14, 1))
    {
        fprintf(VAR15, ""
                        "");
        FUN4(1);
    }
    else
    {
        int VAR16;
        size_t VAR17 = FUN9(VAR1);
        size_t VAR18 = FUN10(VAR3, VAR17);
        for (VAR16 = 0; VAR16 < VAR18; VAR16++)
        {
            memset(VAR2 + (VAR17 * VAR16), 0, 1);
        }
        VAR4 = FUN2(VAR12, &VAR6, NULL);
        if (VAR4)
        {
            FUN3("");
            FUN4(1);
        }
        FUN7(VAR19, &VAR8, NULL);
    }
}