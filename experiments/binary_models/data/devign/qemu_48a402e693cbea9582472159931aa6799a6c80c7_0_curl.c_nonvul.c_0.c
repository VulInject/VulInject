static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = NULL;
    double VAR10;
    char *VAR11;
    char *VAR12;
    const char *VAR13;
    int VAR14 = 0;
    static int VAR15 = 0;
    VAR11 = strdup(VAR3);
    VAR6->VAR16 = VAR17;
    VAR12 = VAR11 + strlen(VAR11) - 1;
    while (VAR12 >= VAR11)
    {
        if (VAR14 == 0)
        {
            if (*VAR12 == '')
                VAR14++;
            else
                break;
        }
        else if (VAR14 == 1)
        {
            if (*VAR12 > '' || *VAR12 < '')
            {
                char *VAR18 = VAR12 - strlen(VAR19) + 1;
                if (VAR18 > VAR11 && FUN2(VAR18, VAR19, strlen(VAR19)) == 0)
                {
                    VAR13 = VAR12 + 1;
                    VAR12 -= strlen(VAR19) - 1;
                    *VAR12 = '';
                    VAR6->VAR16 = FUN3(VAR13);
                    break;
                }
                else
                {
                    break;
                }
            }
        }
        VAR12--;
    }
    if ((VAR6->VAR16 & 0x1ff) != 0)
    {
        fprintf(VAR20, "", VAR6->VAR16);
        goto VAR21;
    }
    if (!VAR15)
    {
        FUN4(VAR22);
        VAR15 = 1;
    }
    FUN5("", VAR11);
    VAR6->VAR23 = VAR11;
    VAR9 = FUN6(VAR6);
    if (!VAR9)
        goto VAR21;
    FUN7(VAR9->VAR24, VAR25, 1);
    FUN7(VAR9->VAR24, VAR26, (void *)VAR27);
    if (FUN8(VAR9->VAR24))
        goto VAR28;
    FUN9(VAR9->VAR24, VAR29, &VAR10);
    FUN7(VAR9->VAR24, VAR26, (void *)VAR30);
    FUN7(VAR9->VAR24, VAR25, 0);
    if (VAR10)
        VAR6->VAR31 = (VAR32)VAR10;
    else if (!VAR6->VAR31)
        goto VAR28;
    FUN5("", (long long)VAR6->VAR31);
    FUN10(VAR9);
    FUN11(VAR9->VAR24);
    VAR9->VAR24 = NULL;
    VAR6->VAR33 = FUN12();
    FUN13(VAR6->VAR33, VAR34, VAR6);
    FUN13(VAR6->VAR33, VAR35, VAR36);
    FUN14(VAR6);
    return 0;
VAR28:
    fprintf(VAR20, "", VAR9->VAR37);
    FUN11(VAR9->VAR24);
    VAR9->VAR24 = NULL;
VAR21:
    FUN15(VAR11);
    return -VAR38;
}