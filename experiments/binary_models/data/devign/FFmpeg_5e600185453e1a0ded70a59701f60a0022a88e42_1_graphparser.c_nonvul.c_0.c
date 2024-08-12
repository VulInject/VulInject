int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    int VAR8 = 0;
    char VAR9 = 0;
    int VAR10 = 0;
    VAR4 *VAR11 = NULL;
    do
    {
        VAR12 *VAR13;
        VAR3 += FUN2(VAR3);
        VAR10 = FUN3(&VAR3, &VAR11, &VAR5, VAR7);
        if (VAR10 < 0)
            goto VAR14;
        VAR13 = FUN4(&VAR3, VAR2, VAR8, VAR7);
        if (!VAR13)
            goto VAR14;
        if (VAR13->VAR15 == 1 && !VAR11 && !VAR8)
        {
            const char *VAR16 = "";
            VAR10 = FUN3(&VAR16, &VAR11, &VAR5, VAR7);
            if (VAR10 < 0)
                goto VAR14;
        }
        if (FUN5(VAR13, &VAR11, &VAR5, VAR7) < 0)
            goto VAR14;
        VAR10 = FUN6(&VAR3, &VAR11, &VAR5, VAR7);
        if (VAR10 < 0)
            goto VAR14;
        VAR3 += FUN2(VAR3);
        VAR9 = *VAR3++;
        if (VAR9 == '' && VAR11)
        {
            FUN7(VAR7, VAR17, ""%VAR18\"", VAR3 - 1);
            goto VAR14;
        }
        VAR8++;
    } while (VAR9 == '' || VAR9 == '');
    if (VAR5 && !strcmp(VAR5->VAR19, "") && VAR11)
    {
        const char *VAR16 = "";
        if (FUN6(&VAR16, &VAR11, &VAR5, VAR7) < 0)
            goto VAR14;
    }
    return 0;
VAR14:
    FUN8(VAR2);
    FUN9(VAR5);
    FUN9(VAR11);
    return -1;
}