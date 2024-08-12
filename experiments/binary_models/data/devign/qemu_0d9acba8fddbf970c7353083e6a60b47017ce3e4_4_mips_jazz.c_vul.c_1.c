static void FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    int VAR5 = 0;
    for (VAR4 = VAR3; !VAR5 && VAR4->VAR6; ++VAR4)
    {
        VAR5 = VAR4->VAR7;
    }
    if (VAR5)
    {
        VAR8 *VAR9;
        VAR9 = FUN2();
        if (VAR9)
        {
            for (VAR4 = VAR3; VAR4->VAR6; ++VAR4)
            {
                if (VAR4->VAR7)
                {
                    if (VAR4->VAR10)
                    {
                        VAR4->VAR11.FUN3(VAR9, VAR2);
                    }
                }
            }
        }
    }
}