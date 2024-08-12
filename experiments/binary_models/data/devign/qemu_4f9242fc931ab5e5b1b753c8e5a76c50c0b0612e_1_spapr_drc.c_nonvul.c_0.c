static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    FUN3(FUN4(VAR4));
    FUN5(VAR4->VAR5);
    VAR4->VAR5 = NULL;
    if (VAR4->VAR6)
    {
        FUN6(VAR4);
    }
    VAR4->VAR7 = false;
    if (VAR4->VAR8)
    {
        VAR4->VAR9 = VAR10;
        if (FUN7(VAR4) != VAR11)
        {
            VAR4->VAR12 = VAR13;
        }
    }
    else
    {
        VAR4->VAR9 = VAR14;
        if (FUN7(VAR4) != VAR11)
        {
            VAR4->VAR12 = VAR15;
        }
    }
}