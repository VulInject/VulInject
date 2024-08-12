int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5, VAR4 **VAR6, void *VAR7)
{
    int VAR8 = 0, VAR9;
    char VAR10 = 0;
    VAR4 *VAR11 = NULL;
    do
    {
        VAR12 *VAR13;
        const char *VAR14 = VAR3;
        VAR3 += strspn(VAR3, VAR15);
        if ((VAR9 = FUN2(&VAR3, &VAR11, VAR6, VAR7)) < 0)
            goto VAR16;
        if ((VAR9 = FUN3(&VAR13, &VAR3, VAR2, VAR8, VAR7)) < 0)
            goto VAR16;
        if (VAR13->VAR17 == 1 && !VAR11 && !VAR8)
        {
            const char *VAR18 = "";
            if ((VAR9 = FUN2(&VAR18, &VAR11, VAR6, VAR7)) < 0)
                goto VAR16;
        }
        if ((VAR9 = FUN4(VAR13, &VAR11, VAR5, VAR7)) < 0)
            goto VAR16;
        if ((VAR9 = FUN5(&VAR3, &VAR11, VAR5, VAR6, VAR7)) < 0)
            goto VAR16;
        VAR3 += strspn(VAR3, VAR15);
        VAR10 = *VAR3++;
        if (VAR10 == '' && VAR11)
        {
            FUN6(VAR7, VAR19, ""%VAR20\"", VAR14);
            VAR9 = FUN7(VAR21);
            goto VAR16;
        }
        VAR8++;
    } while (VAR10 == '' || VAR10 == '');
    if (VAR10)
    {
        FUN6(VAR7, VAR19, ""%VAR20\"", VAR3 - 1);
        VAR9 = FUN7(VAR21);
        goto VAR16;
    }
    if (*VAR5 && !strcmp((*VAR5)->VAR22, "") && VAR11)
    {
        const char *VAR18 = "";
        if ((VAR9 = FUN5(&VAR18, &VAR11, VAR5, VAR6, VAR7)) < 0)
            goto VAR16;
    }
    return 0;
VAR16:
    for (; VAR2->VAR23 > 0; VAR2->VAR23--)
        FUN8(VAR2->VAR3[VAR2->VAR23 - 1]);
    FUN9(&VAR2->VAR3);
    FUN10(VAR5);
    FUN10(VAR6);
    FUN10(&VAR11);
    return VAR9;
}