static void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3.VAR4)
    {
        FUN2(VAR2->VAR3.VAR4);
        VAR2->VAR3.VAR4 = NULL;
    }
    if (VAR2->VAR5.VAR4)
    {
        FUN2(VAR2->VAR5.VAR4);
        VAR2->VAR5.VAR4 = NULL;
    }
    FUN3(VAR2);
    FUN4(VAR2);
    FUN5(VAR2);
    VAR1 *VAR6, *VAR7 = NULL;
    for (VAR6 = VAR2->VAR8->VAR9; VAR6 != NULL; VAR6 = VAR6->VAR10)
    {
        if (VAR6 == VAR2)
        {
            if (VAR7)
                VAR7->VAR10 = VAR6->VAR10;
            else
                VAR2->VAR8->VAR9 = VAR6->VAR10;
            break;
        }
        VAR7 = VAR6;
    }
    if (!VAR2->VAR8->VAR9)
        VAR11->VAR12 = 1;
    FUN6(VAR2->VAR8);
    FUN2(VAR2);
}