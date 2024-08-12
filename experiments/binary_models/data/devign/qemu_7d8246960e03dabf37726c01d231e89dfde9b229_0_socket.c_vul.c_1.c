FUN1(struct socket *VAR1)
{
    VAR2 *VAR3 = VAR1->VAR3;
    struct VAR4 *VAR5;
    for (VAR5 = (struct VAR4 *)VAR3->VAR6.VAR7; (struct VAR8 *)VAR5 != &VAR3->VAR6; VAR5 = VAR5->VAR9)
    {
        if (VAR5->VAR10 == VAR1)
        {
            VAR5->VAR10 = NULL;
            for (VAR5 = (struct VAR4 *)VAR3->VAR11.VAR7; (struct VAR8 *)VAR5 != &VAR3->VAR11; VAR5 = VAR5->VAR9)
            {
                if (VAR5->VAR10 == VAR1)
                {
                    VAR5->VAR10 = NULL;
                    if (VAR1->VAR12 == VAR13 && VAR1->VAR14)
                    {
                        FUN1(VAR1->VAR14);
                        VAR1->VAR14 = NULL;
                        if (VAR1 == VAR3->VAR15)
                        {
                            VAR3->VAR15 = &VAR3->VAR16;
                        }
                        else if (VAR1 == VAR3->VAR17)
                        {
                            VAR3->VAR17 = &VAR3->VAR18;
                        }
                        else if (VAR1 == VAR3->VAR19)
                        {
                            VAR3->VAR19 = &VAR3->VAR20;
                            FUN2(VAR1->VAR21);
                            if (VAR1->VAR22 && VAR1->VAR23)
                                FUN3(VAR1);
                            free(VAR1);