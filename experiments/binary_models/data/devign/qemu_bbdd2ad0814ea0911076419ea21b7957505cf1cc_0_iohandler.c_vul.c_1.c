int FUN1(int VAR1, VAR2 *VAR3, VAR4 *VAR5, VAR4 *VAR6, void *VAR7)
{
    VAR8 *VAR9;
    if (!VAR5 && !VAR6)
    {
        FUN2(VAR9, &VAR10, VAR11)
        {
            if (VAR9->VAR1 == VAR1)
            {
                VAR9->VAR12 = 1;
                break;
            }
        }
    }
    else
    {
        FUN2(VAR9, &VAR10, VAR11)
        {
            if (VAR9->VAR1 == VAR1)
                goto VAR13;
        }
        VAR9 = FUN3(sizeof(VAR8));
        FUN4(&VAR10, VAR9, VAR11);
    VAR13:
        VAR9->VAR1 = VAR1;
        VAR9->VAR3 = VAR3;
        VAR9->VAR5 = VAR5;
        VAR9->VAR6 = VAR6;
        VAR9->VAR7 = VAR7;
        VAR9->VAR12 = 0;
        FUN5();
    }
    return 0;