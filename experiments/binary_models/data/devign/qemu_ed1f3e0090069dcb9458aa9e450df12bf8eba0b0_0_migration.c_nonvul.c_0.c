static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = NULL;
    int VAR6;
    FUN2(VAR3);
    FUN3(VAR7);
    VAR6 = FUN4(VAR3);
    FUN5(VAR3);
    FUN6();
    FUN7();
    if (VAR6 < 0)
    {
        FUN3(VAR8);
        FUN8("", strerror(-VAR6));
        FUN9();
        FUN10(VAR9);
    }
    FUN11();
    FUN12(&VAR5);
    if (VAR5)
    {
        FUN3(VAR8);
        FUN13(VAR5);
        FUN9();
        FUN10(VAR9);
    }
    if (!FUN14() || FUN15() == VAR10)
    {
        if (VAR11)
        {
            FUN16();
        }
        else
        {
            FUN17(VAR12);
        }
    }
    else
    {
        FUN17(FUN15());
    }
    FUN9();
    FUN3(VAR13);
}