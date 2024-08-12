static int FUN1(struct sockaddr_in VAR1)
{
    int VAR2, VAR3, VAR4;
    struct sockaddr_in VAR5;
    struct pollfd VAR6[VAR7 + 1], *VAR8;
    VAR9 *VAR10, **VAR11;
    long VAR12;
    VAR2 = socket(VAR13, VAR14, 0);
    if (VAR2 < 0)
    {
        FUN2("");
        return -1;
    }
    VAR3 = 1;
    FUN3(VAR2, VAR15, VAR16, &VAR3, sizeof(VAR3));
    if (FUN4(VAR2, (struct VAR17 *)&VAR1, sizeof(VAR1)) < 0)
    {
        FUN2("");
        close(VAR2);
        return -1;
    }
    if (FUN5(VAR2, 5) < 0)
    {
        FUN2("");
        close(VAR2);
        return -1;
    }
    FUN6("");
    FUN7(VAR18);
    FUN8(VAR2, VAR19, VAR20);
    VAR21 = NULL;
    VAR22 = 0;
    VAR21 = NULL;
    for (;;)
    {
        VAR8 = VAR6;
        VAR8->VAR23 = VAR2;
        VAR8->VAR24 = VAR25;
        VAR8++;
        VAR10 = VAR21;
        while (VAR10 != NULL)
        {
            int VAR23;
            VAR23 = VAR10->VAR23;
            switch (VAR10->VAR26)
            {
            case VAR27:
                VAR10->VAR8 = VAR8;
                VAR8->VAR23 = VAR23;
                VAR8->VAR24 = VAR25;
                VAR8++;
                break;
            case VAR28:
            case VAR29:
            case VAR30:
            case VAR31:
                VAR10->VAR8 = VAR8;
                VAR8->VAR23 = VAR23;
                VAR8->VAR24 = VAR32;
                VAR8++;
                break;
            case VAR33:
                VAR10->VAR8 = VAR8;
                VAR8->VAR23 = VAR23;
                VAR8->VAR24 = VAR25;
                VAR8++;
                break;
            case VAR34:
                VAR10->VAR8 = VAR8;
                VAR8->VAR23 = VAR23;
                VAR8->VAR24 = VAR25;
                VAR8++;
                break;
            default:
                VAR10->VAR8 = NULL;
                break;
            }
            VAR10 = VAR10->VAR35;
        }
        do
        {
            VAR4 = FUN9(VAR6, VAR8 - VAR6, 1000);
        } while (VAR4 == -1);
        VAR12 = FUN10();
        VAR11 = &VAR21;
        while ((*VAR11) != NULL)
        {
            VAR10 = *VAR11;
            if (FUN11(VAR10, VAR12) < 0)
            {
                FUN12(VAR10);
                close(VAR10->VAR23);
                if (VAR10->VAR36)
                    FUN13(VAR10->VAR36);
                *VAR11 = VAR10->VAR35;
                VAR37 -= VAR10->VAR38;
                FUN14(VAR10->VAR39);
                FUN14(VAR10->VAR40);
                FUN14(VAR10);
                VAR22--;
            }
            else
            {
                VAR11 = &VAR10->VAR35;
            }
        }
        VAR8 = VAR6;
        if (VAR8->VAR41 & VAR25)
        {
            int VAR23, VAR42;
            VAR42 = sizeof(VAR5);
            VAR23 = FUN15(VAR2, (struct VAR17 *)&VAR5, &VAR42);
            if (VAR23 >= 0)
            {
                FUN8(VAR23, VAR19, VAR20);
                if (VAR22 >= VAR43)
                {
                    VAR10 = NULL;
                }
                else
                {
                    VAR10 = FUN16(sizeof(VAR9));
                    if (VAR10)
                    {
                        VAR10->VAR35 = VAR21;
                        VAR21 = VAR10;
                        VAR10->VAR23 = VAR23;
                        VAR10->VAR8 = NULL;
                        VAR10->VAR5 = VAR5;
                        VAR10->VAR26 = VAR27;
                        VAR10->VAR39 = FUN17(VAR10->VAR44 = VAR45);
                        VAR10->VAR40 = FUN17(VAR10->VAR46 = VAR47);
                        if (!VAR10->VAR39 || !VAR10->VAR40)
                        {
                            FUN14(VAR10->VAR39);
                            FUN14(VAR10->VAR40);
                            FUN18(&VAR10);
                        }
                        else
                        {
                            VAR10->VAR48 = VAR10->VAR39;
                            VAR10->VAR49 = VAR10->VAR39 + VAR10->VAR44;
                            VAR10->VAR50 = VAR12 + VAR51;
                            VAR10->VAR52 = VAR12;
                            VAR22++;
                        }
                    }
                }
                if (!VAR10)
                {
                    close(VAR23);
                }
            }
        }
        VAR8++;
    }
}