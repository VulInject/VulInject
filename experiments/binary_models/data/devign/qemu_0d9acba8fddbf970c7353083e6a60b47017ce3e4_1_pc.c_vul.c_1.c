static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6;
    int VAR7 = 0;
    for (VAR6 = VAR5; !VAR7 && VAR6->VAR8; ++VAR6)
    {
        VAR7 = VAR6->VAR9;
    }
    if (VAR7)
    {
        VAR10 *VAR11;
        VAR11 = FUN2();
        if (VAR11)
        {
            for (VAR6 = VAR5; VAR6->VAR8; ++VAR6)
            {
                if (VAR6->VAR9)
                {
                    if (VAR6->VAR12)
                    {
                        VAR6->VAR13.FUN3(VAR11, VAR4);
                    }
                    else
                    {
                        if (VAR2)
                        {
                            VAR6->VAR13.FUN4(VAR2, VAR11);
                        }
                    }
                }
            }
        }
    }
}