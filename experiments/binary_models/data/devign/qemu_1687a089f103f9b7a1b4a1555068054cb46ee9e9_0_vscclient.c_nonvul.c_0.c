FUN1(void *VAR1)
{
    unsigned char VAR2[VAR3];
    int VAR4;
    VAR5 *VAR6;
    unsigned int VAR7;
    while (1)
    {
        const char *VAR8;
        VAR6 = FUN2();
        if (VAR6 == NULL)
        {
            break;
        }
        VAR7 = FUN3(VAR6->VAR9);
        if (VAR7 == VAR10 && VAR6->VAR11 != VAR12)
        {
            FUN4(&VAR13);
            if (!VAR14 || (VAR14 != VAR6->VAR9))
            {
                FUN5(&VAR13);
                FUN6(VAR6);
                continue;
            }
            while (VAR14 != NULL)
            {
                FUN7(&VAR15, &VAR13);
            }
            FUN5(&VAR13);
            VAR7 = FUN3(VAR6->VAR9);
            if (VAR7 == VAR10)
            {
                FUN6(VAR6);
                continue;
            }
        }
        switch (VAR6->VAR11)
        {
        case VAR12:
            FUN4(&VAR13);
            while (VAR14 != NULL)
            {
                FUN7(&VAR15, &VAR13);
            }
            VAR14 = FUN8(VAR6->VAR9);
            FUN5(&VAR13);
            VAR8 = FUN9(VAR6->VAR9);
            if (VAR16 > 10)
            {
                FUN10("", VAR8);
            }
            FUN11(VAR17, VAR7, NULL, 0);
            break;
        case VAR18:
            if (VAR16 > 10)
            {
                FUN10("", VAR7);
            }
            FUN11(VAR19, VAR7, NULL, 0);
            break;
        case VAR20:
            VAR4 = VAR3;
            FUN12(VAR6->VAR9, VAR2, &VAR4);
            if (VAR16 > 10)
            {
                FUN10("", VAR7);
                FUN13(VAR2, VAR4);
            }
            FUN11(VAR21, VAR7, VAR2, VAR4);
            break;
        case VAR22:
            if (VAR16 > 10)
            {
                FUN10("", VAR7);
            }
            FUN11(VAR23, VAR7, NULL, 0);
            break;
        default:
            break;
        }
        FUN6(VAR6);
    }
    return NULL;
}