void FUN1(VAR1 *VAR2)
{
    FUN2(FUN3(VAR2));
    FUN4(VAR2->VAR3);
    VAR2->VAR3 = NULL;
    if (VAR2->VAR4)
    {
        FUN5(VAR2);
    }
    VAR2->VAR5 = false;
    if (VAR2->VAR6)
    {
        VAR2->VAR7 = VAR8;
        if (FUN6(VAR2) != VAR9)
        {
            VAR2->VAR10 = VAR11;
        }
        VAR2->VAR12 = VAR13;
    }
    else
    {
        VAR2->VAR7 = VAR14;
        if (FUN6(VAR2) != VAR9)
        {
            VAR2->VAR10 = VAR15;
        }
        VAR2->VAR12 = VAR16;
    }
}