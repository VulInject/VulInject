static void FUN1(const char *VAR1, const char *VAR2, VAR3 **VAR4)
{
    pid_t VAR5;
    char *VAR6;
    VAR6 = FUN2(VAR1);
    VAR5 = FUN3();
    if (VAR5 == 0)
    {
        int VAR7;
        FUN4();
        FUN5(0);
        FUN5(1);
        FUN5(2);
        if (VAR6)
        {
            execle(VAR6, VAR1, NULL, VAR8);
        }
        if (!VAR2)
        {
            FUN6(VAR9);
        }
        VAR7 = open(VAR10, VAR11);
        if (VAR7 < 0)
        {
            FUN6(VAR9);
        }
        if (write(VAR7, VAR2, strlen(VAR2)) < 0)
        {
            FUN6(VAR9);
        }
        FUN6(VAR12);
    }
    FUN7(VAR6);
    if (VAR5 < 0)
    {
        FUN8(VAR4, VAR13);
        return;
    }
}