static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, const char *VAR8)
{
    char VAR9[256];
    int VAR10;
    VAR11 *VAR12;
    const char *VAR13;
    FUN2(VAR9, sizeof(VAR9), "", &VAR8);
    if (VAR7 >= VAR14)
    {
        VAR15 *VAR16;
        for (VAR16 = VAR17; VAR16; VAR16 = VAR16->VAR18)
        {
            if (!FUN3(VAR9, VAR16->VAR19) && VAR4->VAR20 == VAR16->VAR20)
            {
                VAR4->VAR21 = VAR16->VAR21;
                VAR6->VAR22 = VAR16;
                if (VAR16->open)
                    VAR6->VAR23 = VAR16->open();
                break;
            }
        }
    }
    else
    {
        VAR4->VAR21 = FUN4(VAR9, VAR4->VAR20);
    }
    VAR12 = FUN5(VAR4->VAR21);
    if (VAR12 && VAR12->VAR24)
        VAR13 = VAR12->VAR24;
    else
        VAR13 = (char *)NULL;
    if (VAR13)
    {
        FUN2(VAR9, sizeof(VAR9), "", &VAR8);
        VAR10 = FUN6(VAR9);
        switch (VAR4->VAR20)
        {
        case VAR25:
            FUN7(VAR2, VAR26, "", VAR13);
            VAR4->VAR27 = VAR28;
            VAR4->VAR29 = VAR30;
            if (VAR10 > 0)
            {
                VAR4->VAR27 = VAR10;
                FUN2(VAR9, sizeof(VAR9), "", &VAR8);
                VAR10 = FUN6(VAR9);
                if (VAR10 > 0)
                    VAR4->VAR29 = VAR10;
            }
            FUN7(VAR2, VAR26, "", VAR4->VAR27);
            FUN7(VAR2, VAR26, "", VAR4->VAR29);
            break;
        case VAR31:
            FUN7(VAR2, VAR26, "", VAR13);
            break;
        default:
            break;
        }
        return 0;
    }
    return -1;
}