static int FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    struct VAR4 *VAR5, **VAR6;
    int VAR7;
    int VAR8 = 0;
    for (;;)
    {
        VAR6 = &VAR3->VAR9;
        for (;;)
        {
            VAR5 = *VAR6;
            if (!VAR5)
                return VAR8;
            VAR7 = FUN2(VAR5);
            if (VAR7 == VAR10)
            {
                *VAR6 = VAR5->VAR11;
                FUN3(VAR5);
                VAR8 = 1;
            }
            else if (VAR7 != VAR12)
            {
                if (VAR7 == 0)
                {
                    VAR7 = FUN4(VAR5);
                    if (VAR7 == VAR5->VAR13)
                        VAR7 = 0;
                    else
                        VAR7 = -VAR14;
                }
                else
                {
                    VAR7 = -VAR7;
                }
                FUN5(VAR5, VAR5->VAR15.VAR1, VAR7);
                *VAR6 = VAR5->VAR11;
                VAR5->VAR15.FUN6(VAR5->VAR15.VAR1, VAR7);
                FUN3(VAR5);
                VAR8 = 1;
                break;
            }
            else
            {
                VAR6 = &VAR5->VAR11;
            }
        }
    }
    return VAR8;
}