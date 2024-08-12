static int FUN1(void)
{
    int VAR1;
    sigset_t VAR2;
    FUN2(&VAR2);
    FUN3(&VAR2, VAR3);
    FUN4(VAR4, &VAR2, NULL);
    FUN2(&VAR2);
    FUN3(&VAR2, VAR5);
    FUN4(VAR6, &VAR2, NULL);
    FUN2(&VAR2);
    FUN3(&VAR2, VAR7);
    FUN3(&VAR2, VAR8);
    FUN3(&VAR2, VAR9);
    FUN2(&VAR2);
    FUN3(&VAR2, VAR9);
    if (FUN5())
    {
        FUN3(&VAR2, VAR7);
        FUN3(&VAR2, VAR8);
    }
    FUN4(VAR6, &VAR2, NULL);
    VAR1 = FUN6(&VAR2);
    if (VAR1 == -1)
    {
        fprintf(VAR10, "");
        return -VAR11;
    }
    FUN7(VAR1, VAR12);
    FUN8(VAR1, NULL, VAR13, NULL, (void *)(VAR14)VAR1);
    return 0;
}