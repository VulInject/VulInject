static void FUN1(void)
{
    if (!(FUN2() & VAR1))
    {
        return;
    }
    if (VAR2)
    {
        FUN3(VAR3);
        if (!FUN4() && !VAR4)
            FUN5(VAR5, VAR6);
    }
    else
        FUN6();
    if (FUN7(VAR7) == VAR7)
    {
        VAR8 = 1;
        FUN8();
    }
    else
        FUN9();
}