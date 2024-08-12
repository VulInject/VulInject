static void FUN1(void *VAR1, int VAR2)
{
    struct VAR3 *VAR4 = VAR1;
    struct timeval VAR5;
    FUN2(&VAR5, NULL);
    if (VAR2 < 0)
    {
        FUN3("", strerror(-VAR2));
        goto VAR6;
    }
    if (VAR4->VAR7)
    {
        goto VAR6;
    }
    VAR5 = FUN4(VAR5, VAR4->VAR8);
    FUN5("", &VAR5, VAR4->VAR9, VAR4->VAR10.VAR11, VAR4->VAR10.VAR11, 1, VAR4->VAR12);
VAR6:
    FUN6(VAR4->VAR13);
    FUN7(VAR4);