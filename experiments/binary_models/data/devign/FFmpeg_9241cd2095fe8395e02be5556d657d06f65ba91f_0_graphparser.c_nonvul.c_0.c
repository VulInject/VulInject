int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR4 *VAR6, VAR7 *VAR8)
{
    int VAR9 = 0, VAR10;
    char VAR11 = 0;
    VAR4 *VAR12 = NULL;
    do
    {
        VAR13 *VAR14;
        const char *VAR15 = VAR3;
        VAR3 += strspn(VAR3, VAR16);
        if ((VAR10 = FUN2(&VAR3, &VAR12, &VAR6, VAR8)) < 0)
            goto VAR17;
        if ((VAR10 = FUN3(&VAR14, &VAR3, VAR2, VAR9, VAR8)) < 0)
            goto VAR17;
        if (VAR14->VAR18 == 1 && !VAR12 && !VAR9)
        {
            const char *VAR19 = "";
            if ((VAR10 = FUN2(&VAR19, &VAR12, &VAR6, VAR8)) < 0)
                goto VAR17;
        }
        if ((VAR10 = FUN4(VAR14, &VAR12, &VAR5, VAR8)) < 0)
            goto VAR17;
        if ((VAR10 = FUN5(&VAR3, &VAR12, &VAR5, &VAR6, VAR8)) < 0)
            goto VAR17;
        VAR3 += strspn(VAR3, VAR16);
        VAR11 = *VAR3++;
        if (VAR11 == '' && VAR12)
        {
            FUN6(VAR8, VAR20, ""%VAR21\"", VAR15);
            VAR10 = FUN7(VAR22);
            goto VAR17;
        }
        VAR9++;
    } while (VAR11 == '' || VAR11 == '');
    if (VAR11)
    {
        FUN6(VAR8, VAR20, ""%VAR21\"", VAR3 - 1);
        VAR10 = FUN7(VAR22);
        goto VAR17;
    }
    if (VAR5 && !strcmp(VAR5->VAR23, "") && VAR12)
    {
        const char *VAR19 = "";
        if ((VAR10 = FUN5(&VAR19, &VAR12, &VAR5, &VAR6, VAR8)) < 0)
            goto VAR17;
    }
    return 0;
VAR17:
    FUN8(VAR2);
    FUN9(VAR5);
    FUN9(VAR6);
    FUN9(VAR12);
    return VAR10;
}