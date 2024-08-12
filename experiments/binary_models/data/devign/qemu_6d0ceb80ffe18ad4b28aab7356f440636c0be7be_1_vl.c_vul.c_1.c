void FUN1(void)
{
    RunState VAR1;
    FUN2(&VAR1);
    if (FUN3() && VAR1 == VAR2)
    {
        return;
    }
    if (FUN3())
    {
        FUN4(&VAR3);
    }
    else
    {
        FUN5();
        FUN6(VAR4);
        FUN7(1, VAR4);
        FUN8();
    }
    FUN9(&VAR3);