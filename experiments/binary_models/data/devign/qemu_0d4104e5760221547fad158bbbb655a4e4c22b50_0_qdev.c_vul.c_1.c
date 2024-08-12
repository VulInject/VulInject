void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    assert(!VAR2->VAR5);
    FUN2(FUN3(VAR2), true, "", &VAR4);
    if (VAR4)
    {
        FUN4(VAR4, "", FUN5(FUN3(VAR2)));
        FUN6(1);
    }