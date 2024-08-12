static void FUN1(const char *VAR1)
{
    pid_t VAR2, VAR3;
    VAR2 = FUN2();
    if (VAR2 < 0)
    {
        FUN3(VAR4);
    }
    if (VAR2 > 0)
    {
        FUN3(VAR5);
    }
    if (VAR1)
    {
        if (!FUN4(VAR1))
        {
            FUN5("");
            FUN3(VAR4);
        }
    }
    FUN6(0);
    VAR3 = FUN7();
    if (VAR3 < 0)
    {
        goto VAR6;
    }
    if ((FUN8("")) < 0)
    {
        goto VAR6;
    }
    close(VAR7);
    close(VAR8);
    close(VAR9);
    return;
VAR6:
    unlink(VAR1);
    FUN5("");
    FUN3(VAR4);
}