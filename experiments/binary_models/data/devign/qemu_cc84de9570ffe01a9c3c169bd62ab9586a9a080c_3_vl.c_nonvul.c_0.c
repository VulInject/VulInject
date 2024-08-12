static void FUN1(void)
{
    sigset_t VAR1;
    FUN2(&VAR1);
    FUN3(&VAR1, VAR2);
    FUN3(&VAR1, VAR3);
    FUN3(&VAR1, VAR4);
    FUN4(VAR5, &VAR1, NULL);
    FUN2(&VAR1);
    FUN3(&VAR1, VAR6);
    FUN4(VAR7, &VAR1, NULL);
}