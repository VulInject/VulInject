int FUN1(int VAR1, VAR2 *VAR3, VAR2 *VAR4, VAR5 *VAR6, void *VAR7)
{
    VAR8 *VAR9;
    VAR9 = FUN2(VAR1);
    if (!VAR3 && !VAR4)
    {
        if (VAR9)
        {
            if (VAR10)
                VAR9->VAR11 = 1;
            else
            {
                FUN3(VAR9, VAR9);
                FUN4(VAR9);
            }
        }
    }
    else
    {
        if (VAR9 == NULL)
        {
            VAR9 = FUN5(sizeof(VAR8));
            VAR9->VAR1 = VAR1;
            FUN6(&VAR12, VAR9, VAR9);
        }
        VAR9->VAR3 = VAR3;
        VAR9->VAR4 = VAR4;
        VAR9->VAR6 = VAR6;
        VAR9->VAR7 = VAR7;
    }
    FUN7(VAR1, NULL, VAR3, VAR4, VAR7);
    return 0;
}