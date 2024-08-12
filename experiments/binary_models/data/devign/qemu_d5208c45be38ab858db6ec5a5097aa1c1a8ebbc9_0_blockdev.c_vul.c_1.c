void FUN1(const char *VAR1, bool VAR2, const char *VAR3, const char *VAR4, bool VAR5, int64_t VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10;
    VAR9 *VAR11, *VAR12;
    VAR7 *VAR13 = NULL;
    BlockdevOnError VAR14 = VAR15;
    FUN2();
    VAR10 = FUN3(VAR1);
    if (!VAR10)
    {
        FUN4(VAR8, VAR16, VAR1);
        return;
    }
    if (VAR3 && VAR2)
    {
        VAR11 = FUN5(VAR10, VAR3);
    }
    else
    {
        VAR11 = FUN6(VAR10);
    }
    if (VAR11 == NULL)
    {
        FUN4(VAR8, VAR17, VAR3 ? VAR3 : "");
        return;
    }
    VAR12 = VAR10;
    if (VAR4)
    {
        if (strcmp(VAR10->VAR18, VAR4) != 0)
        {
            VAR12 = FUN5(VAR10, VAR4);
        }
    }
    if (VAR12 == NULL)
    {
        FUN7(VAR8, "", VAR4 ? VAR4 : "");
        return;
    }
    FUN8(VAR10, VAR11, VAR12, VAR6, VAR14, VAR19, VAR10, &VAR13);
    if (VAR13 != NULL)
    {
        FUN9(VAR8, VAR13);
        return;
    }
    FUN10(FUN11(VAR10));
}