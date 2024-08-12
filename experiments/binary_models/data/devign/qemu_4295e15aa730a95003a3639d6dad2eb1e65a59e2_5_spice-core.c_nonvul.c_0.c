static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR3;
    if (FUN2(VAR5))
    {
        FUN3(VAR6);
    }
    else if (FUN4(VAR5))
    {
        FUN5(VAR6);
        FUN6(VAR6, true);
    }
    else if (FUN7(VAR5))
    {
        FUN6(VAR6, false);
    }
}