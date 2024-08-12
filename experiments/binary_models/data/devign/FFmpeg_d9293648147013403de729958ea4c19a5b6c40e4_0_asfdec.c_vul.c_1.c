static void FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, int VAR5, int VAR6)
{
    char *VAR7;
    int64_t VAR8 = FUN2(VAR2->VAR9);
    if ((unsigned)VAR5 >= (VAR10 - 1) / 2)
        return;
    VAR7 = FUN3(2 * VAR5 + 1);
    if (!VAR7)
        goto VAR11;
    if (VAR4 == 0)
    {
        FUN4(VAR2->VAR9, VAR5, VAR7, 2 * VAR5 + 1);
    }
    else if (VAR4 == -1)
    {
        FUN5(VAR2->VAR9, VAR7, VAR5);
        VAR7[VAR5] = 0;
    }
    else if (VAR4 == 1)
    {
        if (!strcmp(VAR3, ""))
        {
            FUN6(VAR2, VAR5);
        }
        else if (!strcmp(VAR3, ""))
        {
            FUN7(VAR2, VAR5);
        }
        else
        {
            FUN8(VAR2, VAR12, "", VAR3);
        }
        goto VAR11;
    }
    else if (VAR4 > 1 && VAR4 <= 5)
    {
        uint64_t VAR13 = FUN9(VAR2->VAR9, VAR4, VAR6);
        snprintf(VAR7, VAR5, "" VAR14, VAR13);
    }
    else if (VAR4 == 6)
    {
        FUN8(VAR2, VAR15, "", VAR3);
        goto VAR11;
    }
    else
    {
        FUN8(VAR2, VAR15, "", VAR4, VAR3);
        goto VAR11;
    }
    if (*VAR7)
        FUN10(&VAR2->VAR16, VAR3, VAR7, 0);
VAR11:
    FUN11(&VAR7);
    FUN12(VAR2->VAR9, VAR8 + VAR5, VAR17);
}