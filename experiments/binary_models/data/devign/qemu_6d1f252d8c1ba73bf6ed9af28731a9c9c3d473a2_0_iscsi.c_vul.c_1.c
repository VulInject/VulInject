static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    struct VAR5 *VAR6 = NULL;
    struct VAR7 *VAR8 = NULL;
    struct VAR9 *VAR10 = NULL;
    int VAR11 = VAR12;
    do
    {
        if (VAR6 != NULL)
        {
            FUN2(VAR6);
            VAR6 = NULL;
        }
        switch (VAR2->VAR13)
        {
        case VAR14:
            VAR6 = FUN3(VAR2->VAR15, VAR2->VAR16);
            if (VAR6 != NULL && VAR6->VAR17 == VAR18)
            {
                VAR10 = FUN4(VAR6);
                if (VAR10 == NULL)
                {
                    FUN5(VAR4, "");
                }
                else
                {
                    VAR2->VAR19 = VAR10->VAR20;
                    VAR2->VAR21 = VAR10->VAR22 + 1;
                    VAR2->VAR23 = !!VAR10->VAR23;
                    VAR2->VAR24 = !!VAR10->VAR24;
                    VAR2->VAR25 = (VAR10->VAR22 > 0xffffffff);
                }
            }
            break;
        case VAR26:
            VAR6 = FUN6(VAR2->VAR15, VAR2->VAR16, 0, 0);
            if (VAR6 != NULL && VAR6->VAR17 == VAR18)
            {
                VAR8 = FUN4(VAR6);
                if (VAR8 == NULL)
                {
                    FUN5(VAR4, "");
                }
                else
                {
                    VAR2->VAR19 = VAR8->VAR19;
                    if (VAR8->VAR27 == 0)
                    {
                        VAR2->VAR21 = 0;
                    }
                    else
                    {
                        VAR2->VAR21 = VAR8->VAR27 + 1;
                    }
                }
            }
            break;
        default:
            return;
        }
    } while (VAR6 != NULL && VAR6->VAR17 == VAR28 && VAR6->VAR29.VAR30 == VAR31 && VAR11-- > 0);
    if (VAR6 == NULL || VAR6->VAR17 != VAR18)
    {
        FUN5(VAR4, "");
    }
    if (VAR6)
    {
        FUN2(VAR6);
    }