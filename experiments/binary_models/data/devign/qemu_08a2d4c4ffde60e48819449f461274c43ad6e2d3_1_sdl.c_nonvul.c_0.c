static void FUN1(void)
{
    if (VAR1)
    {
        FUN2(VAR2);
        if (!FUN3() && !VAR3)
            FUN4(VAR4, VAR5);
    }
    else
        FUN5();
    if (FUN6(VAR6) == VAR6)
    {
        VAR7 = 1;
        FUN7();
    }
    else
        FUN8();
}