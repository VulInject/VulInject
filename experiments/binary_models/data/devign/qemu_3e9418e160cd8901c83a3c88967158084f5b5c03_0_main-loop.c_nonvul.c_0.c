static int FUN1(void)
{
    int VAR1;
    sigset_t VAR2;
    FUN2(&VAR2);
    FUN3(&VAR2, VAR3);
    FUN3(&VAR2, VAR4);
    FUN3(&VAR2, VAR5);
    FUN3(&VAR2, VAR6);
    FUN4(VAR7, &VAR2, NULL);
    FUN5(&VAR2, VAR3);
    VAR1 = FUN6(&VAR2);
    if (VAR1 == -1)
    {
        fprintf(VAR8, "");
        return -VAR9;
    }
    FUN7(VAR1, VAR10);
    FUN8(VAR1, NULL, VAR11, NULL, (void *)(VAR12)VAR1);
    return 0;
}