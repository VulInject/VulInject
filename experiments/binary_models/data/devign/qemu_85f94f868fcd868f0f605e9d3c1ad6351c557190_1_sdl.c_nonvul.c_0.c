static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    if (!VAR6)
    {
        VAR5 = (VAR4->VAR7.VAR8.VAR9 & VAR10);
    }
    else
    {
        VAR5 = (VAR4->VAR7.VAR8.VAR9 & (VAR10 | VAR11));
    }
    if (!VAR5 && VAR12)
    {
        VAR12 = 0;
        if (VAR13 == 0)
        {
            if (!VAR14)
            {
                if (FUN2())
                {
                    FUN3();
                }
            }
            else if (!VAR15)
            {
                FUN4();
            }
            FUN5();
            return;
        }
        VAR13 = 0;
    }
    if (FUN2() && !VAR13)
    {
        FUN6(&VAR4->VAR7);
    }
}