void FUN1(VAR1 *VAR2, void *VAR3)
{
    struct VAR4 *VAR5;
    for (VAR5 = VAR2->VAR6.VAR7; VAR5; VAR5 = VAR5->VAR8.VAR9)
    {
        if (VAR5->VAR10 == VAR3)
        {
            VAR5->VAR11.FUN2(VAR3);
            FUN3(VAR5, VAR8);
            FUN4(VAR5);
            if (!VAR2->VAR6.VAR7)
            {
                VAR12 *VAR13 = VAR2->VAR14.VAR15.VAR7, *VAR16;
                while (VAR13)
                {
                    VAR17 *VAR18 = (VAR17 *)VAR13;
                    FUN5("", VAR13->VAR19);
                    VAR16 = VAR13->VAR8.VAR9;
                    if (VAR13->VAR20)
                    {
                        FUN6(VAR13->VAR20);
                        VAR13->VAR20 = NULL;
                    }
                    FUN3(VAR13, VAR8);
                    FUN3(VAR18, VAR8);
                    FUN4(VAR18);
                    VAR13 = VAR16;
                }
                FUN3(VAR2, VAR8);
                FUN4(VAR2);
            }
            return;
        }
    }