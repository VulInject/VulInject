void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7;
    FUN2();
    FUN3(VAR6, &VAR8.VAR9, VAR10)
    {
        if (!VAR6->VAR11 || !VAR6->VAR11->VAR12)
        {
            continue;
        }
        VAR6->VAR11->FUN4(VAR4, VAR6->VAR13);
    }
    FUN3(VAR6, &VAR8.VAR9, VAR10)
    {
        if (!VAR6->VAR11 || !VAR6->VAR11->VAR14)
        {
            continue;
        }
        if (VAR6->VAR11 && VAR6->VAR11->VAR15)
        {
            if (!VAR6->VAR11->FUN5(VAR6->VAR13))
            {
                continue;
            }
        }
        FUN6(VAR2, VAR6, VAR16);
        VAR7 = VAR6->VAR11->FUN7(VAR2, VAR6->VAR13);
        if (VAR7 < 0)
        {
            FUN8(VAR2, VAR7);
            break;
        }
    }