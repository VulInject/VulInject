static int FUN1(void)
{
    int VAR1, VAR2, VAR3, VAR4, VAR5;
    struct pollfd VAR6[VAR7 + 2], *VAR8;
    VAR9 *VAR10, *VAR11;
    VAR1 = FUN2(&VAR12);
    if (VAR1 < 0)
        return -1;
    VAR3 = FUN2(&VAR13);
    if (VAR3 < 0)
        return -1;
    FUN3("");
    FUN4(VAR14);
    VAR15 = NULL;
    VAR16 = 0;
    FUN5();
    for (;;)
    {
        VAR8 = VAR6;
        VAR8->VAR17 = VAR1;
        VAR8->VAR18 = VAR19;
        VAR8++;
        VAR8->VAR17 = VAR3;
        VAR8->VAR18 = VAR19;
        VAR8++;
        VAR10 = VAR15;
        VAR4 = 1000;
        while (VAR10 != NULL)
        {
            int VAR17;
            VAR17 = VAR10->VAR17;
            switch (VAR10->VAR20)
            {
            case VAR21:
            case VAR22:
            case VAR23:
                VAR10->VAR8 = VAR8;
                VAR8->VAR17 = VAR17;
                VAR8->VAR18 = VAR24;
                VAR8++;
                break;
            case VAR25:
            case VAR26:
            case VAR27:
                if (!VAR10->VAR28)
                {
                    VAR10->VAR8 = VAR8;
                    VAR8->VAR17 = VAR17;
                    VAR8->VAR18 = VAR24;
                    VAR8++;
                }
                else
                {
                    VAR5 = 10;
                    if (VAR5 < VAR4)
                        VAR4 = VAR5;
                }
                break;
            case VAR29:
            case VAR30:
            case VAR31:
            case VAR32:
                VAR10->VAR8 = VAR8;
                VAR8->VAR17 = VAR17;
                VAR8->VAR18 = VAR19;
                VAR8++;
                break;
            default:
                VAR10->VAR8 = NULL;
                break;
            }
            VAR10 = VAR10->VAR33;
        }
        do
        {
            VAR2 = FUN6(VAR6, VAR8 - VAR6, VAR4);
            if (VAR2 < 0 && VAR34 != VAR35 && VAR34 != VAR36)
                return -1;
        } while (VAR2 < 0);
        VAR37 = FUN7() / 1000;
        if (VAR38)
        {
            VAR38 = 0;
            FUN4(VAR14);
        }
        for (VAR10 = VAR15; VAR10 != NULL; VAR10 = VAR11)
        {
            VAR11 = VAR10->VAR33;
            if (FUN8(VAR10) < 0)
            {
                FUN9(VAR10);
                FUN10(VAR10);
            }
        }
        VAR8 = VAR6;
        if (VAR8->VAR39 & VAR19)
        {
            FUN11(VAR1, 0);
        }
        VAR8++;
        if (VAR8->VAR39 & VAR19)
        {
            FUN11(VAR3, 1);
        }
    }
}