static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = NULL;
    VAR4 *VAR5 = VAR1;
    FUN2(&VAR3);
    if (VAR3)
    {
        FUN3(VAR3);
        VAR3 = NULL;
        VAR6 = false;
    }
    FUN4();
    if (!FUN5() || FUN6() == VAR7)
    {
        if (VAR6)
        {
            FUN7();
        }
        else
        {
            FUN8(VAR8);
        }
    }
    else
    {
        FUN8(FUN6());
    }
    FUN9();
    FUN10(&VAR5->VAR9, VAR10, VAR11);
    FUN11(VAR5->VAR12);
    FUN12();
}