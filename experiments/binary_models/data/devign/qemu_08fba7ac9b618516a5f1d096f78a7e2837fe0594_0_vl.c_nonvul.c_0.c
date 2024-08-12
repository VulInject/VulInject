static bool FUN1(void)
{
    RunState VAR1;
    ShutdownCause VAR2;
    if (FUN2())
    {
        FUN3(VAR3);
    }
    if (FUN4())
    {
        FUN5();
    }
    VAR2 = FUN6();
    if (VAR2)
    {
        FUN7();
        FUN8(FUN9(VAR2), &VAR4);
        if (VAR5)
        {
            FUN3(VAR6);
        }
        else
        {
            return true;
        }
    }
    VAR2 = FUN10();
    if (VAR2)
    {
        FUN11();
        FUN12(VAR2);
        FUN13();
        if (!FUN14(VAR7) && !FUN14(VAR8))
        {
            FUN15(VAR9);
        }
    }
    if (FUN16())
    {
        FUN11();
        FUN12(VAR10);
        FUN17(&VAR11, &VAR12);
        VAR12 = VAR13;
        FUN13();
        FUN18(&VAR4);
    }
    if (FUN19())
    {
        FUN20();
    }
    if (FUN21(&VAR1))
    {
        FUN3(VAR1);
    }
    return false;
}