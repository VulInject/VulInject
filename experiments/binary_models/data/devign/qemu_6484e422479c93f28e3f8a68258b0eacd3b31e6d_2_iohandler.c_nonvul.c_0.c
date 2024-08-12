int FUN1(int VAR1, VAR2 *VAR3, VAR2 *VAR4, void *VAR5)
{
    VAR6 *VAR7;
    assert(VAR1 >= 0);
    if (!VAR3 && !VAR4)
    {
        FUN2(VAR7, &VAR8, VAR9)
        {
            if (VAR7->VAR1 == VAR1)
            {
                VAR7->VAR10 = 1;
                break;
            }
        }
    }
    else
    {
        FUN2(VAR7, &VAR8, VAR9)
        {
            if (VAR7->VAR1 == VAR1)
                goto VAR11;
        }
        VAR7 = FUN3(sizeof(VAR6));
        FUN4(&VAR8, VAR7, VAR9);
    VAR11:
        VAR7->VAR1 = VAR1;
        VAR7->VAR3 = VAR3;
        VAR7->VAR4 = VAR4;
        VAR7->VAR5 = VAR5;
        VAR7->VAR12 = -1;
        VAR7->VAR10 = 0;
        FUN5();
    }
    return 0;
}