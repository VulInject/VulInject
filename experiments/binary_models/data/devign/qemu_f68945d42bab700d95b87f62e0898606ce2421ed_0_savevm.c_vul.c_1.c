int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5 = 1;
    FUN2();
    FUN3(VAR4, &VAR6.VAR7, VAR8)
    {
        if (!VAR4->VAR9 || !VAR4->VAR9->VAR10)
        {
            continue;
        }
        if (VAR4->VAR9 && VAR4->VAR9->VAR11)
        {
            if (!VAR4->VAR9->FUN4(VAR4->VAR12))
            {
                continue;
            }
        }
        if (FUN5(VAR2))
        {
            return 0;
        }
        FUN6(VAR4->VAR13, VAR4->VAR14);
        FUN7(VAR2, VAR4, VAR15);
        VAR5 = VAR4->VAR9->FUN8(VAR2, VAR4->VAR12);
        FUN9(VAR4->VAR13, VAR4->VAR14, VAR5);
        if (VAR5 < 0)
        {
            FUN10(VAR2, VAR5);
        }
        if (VAR5 <= 0)
        {
            break;
        }
    }
    return VAR5;