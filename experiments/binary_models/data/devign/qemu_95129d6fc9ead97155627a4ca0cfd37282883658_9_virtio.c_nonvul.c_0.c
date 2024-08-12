void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR2->VAR4 = VAR3;
    if (FUN2(VAR2->VAR5, VAR6))
    {
        FUN3(VAR2, FUN4(VAR2));
    }
    else if (VAR3)
    {
        FUN5(VAR2, VAR7);
    }
    else
    {
        FUN6(VAR2, VAR7);
    }
    if (VAR3)
    {
        FUN7();
    }
}