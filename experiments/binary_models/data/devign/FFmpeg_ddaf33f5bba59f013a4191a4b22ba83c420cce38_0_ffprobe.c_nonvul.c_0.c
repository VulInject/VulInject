static int FUN1(const char *VAR1)
{
    int VAR2, VAR3, VAR4;
    char *VAR5, *VAR6 = FUN2(VAR1);
    if (!VAR6)
        return FUN3(VAR7);
    for (VAR3 = 0, VAR5 = VAR6; *VAR5; VAR5++)
        if (*VAR5 == '')
            VAR3++;
    VAR3++;
    VAR8 = FUN4(VAR3 * sizeof(*VAR8));
    if (!VAR8)
    {
        VAR2 = FUN3(VAR7);
        goto VAR9;
    }
    VAR10 = VAR3;
    VAR5 = VAR6;
    for (VAR4 = 0; VAR5; VAR4++)
    {
        char *VAR11;
        FUN5(VAR4 < VAR10);
        VAR11 = strchr(VAR5, '');
        if (VAR11)
            *VAR11++ = 0;
        VAR8[VAR4].VAR12 = VAR4;
        VAR2 = FUN6(VAR5, &VAR8[VAR4]);
        if (VAR2 < 0)
        {
            FUN7(NULL, VAR13, "", VAR4, VAR5);
            goto VAR9;
        }
        FUN7(NULL, VAR14, "");
        FUN8(&VAR8[VAR4], NULL, VAR14);
        VAR5 = VAR11;
    }
    FUN5(VAR4 == VAR10);
VAR9:
    FUN9(VAR6);
    return VAR2;
}