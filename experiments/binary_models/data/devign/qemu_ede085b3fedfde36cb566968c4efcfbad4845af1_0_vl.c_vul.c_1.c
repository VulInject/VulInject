static bool FUN1(void)
{
    RunState VAR1;
    if (FUN2())
    {
        FUN3(VAR2);
    }
    if (FUN4())
    {
        FUN5();
    }
    if (FUN6())
    {
        FUN7();
        FUN8(VAR3, NULL);
        if (VAR4)
        {
            FUN3(VAR5);
        }
        else
        {
            return true;
        }
    }
    if (FUN9())
    {
        FUN10();
        FUN11();
        FUN12(VAR6);
        FUN13();
        if (FUN14(VAR7) || FUN14(VAR5))
        {
            FUN15(VAR8);
        }
    }
    if (FUN16())
    {
        FUN10();
        FUN11();
        FUN12(VAR9);
        FUN13();
        FUN8(VAR10, NULL);
    }
    if (FUN17())
    {
        FUN18();
    }
    if (FUN19(&VAR1))
    {
        FUN3(VAR1);
    }
    return false;
}