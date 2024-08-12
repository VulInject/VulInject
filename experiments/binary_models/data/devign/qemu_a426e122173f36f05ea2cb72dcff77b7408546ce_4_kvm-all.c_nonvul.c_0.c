void FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4, *VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    VAR1 *VAR9;
    FUN2(VAR4, &VAR7->VAR10, VAR11, VAR5)
    {
        if (FUN3(VAR2, VAR4) != 0)
        {
            for (VAR9 = VAR12; VAR9 != NULL; VAR9 = VAR9->VAR13)
            {
                if (FUN3(VAR9, VAR4) == 0)
                {
                    break;
                }
            }
        }
    }
    FUN4();
    for (VAR9 = VAR12; VAR9 != NULL; VAR9 = VAR9->VAR13)
    {
        FUN5(VAR9, 0);
    }
}