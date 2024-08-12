void FUN1(VAR1 **VAR2)
{
    VAR1 *VAR3 = NULL;
    if (FUN2(VAR4))
    {
        FUN3(VAR2, VAR5);
        return;
    }
    else if (FUN2(VAR6) || FUN2(VAR7))
    {
        FUN3(VAR2, VAR8);
        return;
    }
    else if (FUN2(VAR9))
    {
        return;
    }
    FUN4(VAR10, NULL);
    FUN4(VAR11, &VAR3);
    if (VAR3)
    {
        FUN5(VAR2, VAR3);
        return;
    }
    FUN6();
}