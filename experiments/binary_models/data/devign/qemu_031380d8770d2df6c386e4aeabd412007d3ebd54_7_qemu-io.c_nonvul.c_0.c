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
        void *VAR8 = FUN4(VAR4->VAR9.VAR10);
        memset(VAR8, VAR4->VAR11, VAR4->VAR9.VAR10);
        if (memcmp(VAR4->VAR12, VAR8, VAR4->VAR9.VAR10))
        {
            FUN3("" VAR13 "", VAR4->VAR14, VAR4->VAR9.VAR10);
        }
        FUN5(VAR8);
    }
    if (VAR4->VAR15)
    {
        goto VAR6;
    }
    if (VAR4->VAR16)
    {
        FUN6(VAR4->VAR12, VAR4->VAR14, VAR4->VAR9.VAR10);
    }
    VAR5 = FUN7(VAR5, VAR4->VAR17);
    FUN8("", &VAR5, VAR4->VAR14, VAR4->VAR9.VAR10, VAR4->VAR9.VAR10, 1, VAR4->VAR18);
VAR6:
    FUN9(VAR4->VAR12);
    FUN5(VAR4);
}