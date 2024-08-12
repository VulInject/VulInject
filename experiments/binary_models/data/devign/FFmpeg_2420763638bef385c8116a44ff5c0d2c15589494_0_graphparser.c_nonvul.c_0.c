int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5, VAR4 **VAR6, void *VAR7)
{
    int VAR8 = 0, VAR9 = 0;
    char VAR10 = 0;
    VAR4 *VAR11 = NULL;
    VAR4 *VAR12 = VAR5 ? *VAR5 : NULL;
    VAR4 *VAR13 = VAR6 ? *VAR6 : NULL;
    do
    {
        VAR14 *VAR15;
        const char *VAR16 = VAR3;
        VAR3 += strspn(VAR3, VAR17);
        if ((VAR9 = FUN2(&VAR3, &VAR11, &VAR13, VAR7)) < 0)
            goto VAR18;
        if ((VAR9 = FUN3(&VAR15, &VAR3, VAR2, VAR8, VAR7)) < 0)
            goto VAR18;
        if (VAR15->VAR19 == 1 && !VAR11 && !VAR8)
        {
            const char *VAR20 = "";
            if ((VAR9 = FUN2(&VAR20, &VAR11, &VAR13, VAR7)) < 0)
                goto VAR18;
        }
        if ((VAR9 = FUN4(VAR15, &VAR11, &VAR12, VAR7)) < 0)
            goto VAR18;
        if ((VAR9 = FUN5(&VAR3, &VAR11, &VAR12, &VAR13, VAR7)) < 0)
            goto VAR18;
        VAR3 += strspn(VAR3, VAR17);
        VAR10 = *VAR3++;
        if (VAR10 == '' && VAR11)
        {
            FUN6(VAR7, VAR21, ""%VAR22\"", VAR16);
            VAR9 = FUN7(VAR23);
            goto VAR18;
        }
        VAR8++;
    } while (VAR10 == '' || VAR10 == '');
    if (VAR10)
    {
        FUN6(VAR7, VAR21, ""%VAR22\"", VAR3 - 1);
        VAR9 = FUN7(VAR23);
        goto VAR18;
    }
    if (VAR11)
    {
        const char *VAR20 = "";
        if ((VAR9 = FUN5(&VAR20, &VAR11, &VAR12, &VAR13, VAR7)) < 0)
            goto VAR18;
    }
VAR18:
    if (VAR5)
        *VAR5 = VAR12;
    else
        FUN8(&VAR12);
    if (VAR6)
        *VAR6 = VAR13;
    else
        FUN8(&VAR13);
    FUN8(&VAR11);
    if (VAR9 < 0)
    {
        for (; VAR2->VAR24 > 0; VAR2->VAR24--)
            FUN9(VAR2->VAR3[VAR2->VAR24 - 1]);
        FUN10(&VAR2->VAR3);
    }
    return VAR9;
}