static void FUN1(VAR1 *VAR2)
{
    if (!VAR2)
        return;
    VAR2->VAR3 = false;
    VAR2->VAR4 = false;
    if (VAR2->VAR5 != NULL)
    {
        if (VAR2->VAR6)
        {
            FUN2(VAR2->VAR6);
        }
        FUN3(FUN4(VAR2->VAR5));
        VAR2->VAR5 = NULL;
    }
    VAR2->VAR7 = false;
    if (VAR2->VAR8 != NULL)
    {
        if (VAR2->VAR9)
        {
            FUN2(VAR2->VAR9);
        }
        FUN3(FUN4(VAR2->VAR8));
        VAR2->VAR8 = NULL;
    }
    VAR2->VAR10 = VAR11;
    VAR2->VAR12 = VAR11;
    if (VAR2->VAR13)
    {
        FUN5(FUN4(VAR2->VAR13));
    }
    FUN6(VAR2->VAR14);
    VAR2->VAR14 = NULL;