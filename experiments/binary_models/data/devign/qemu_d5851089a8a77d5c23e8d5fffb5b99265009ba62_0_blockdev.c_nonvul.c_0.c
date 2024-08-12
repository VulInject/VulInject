static void FUN1(VAR1 *VAR2, int *VAR3, const char **VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 **VAR10)
{
    const char *VAR11;
    VAR9 *VAR12 = NULL;
    const char *VAR13;
    if (VAR3)
    {
        if (!FUN2(VAR2, "", false))
        {
            *VAR3 |= VAR14;
        }
        if (FUN2(VAR2, "", false))
        {
            *VAR3 |= VAR15;
        }
        if ((VAR11 = FUN3(VAR2, "")) != NULL)
        {
            if (FUN4(VAR11, VAR3) != 0)
            {
                FUN5(VAR10, "");
                return;
            }
        }
        if ((VAR13 = FUN3(VAR2, "")) != NULL)
        {
            if (!strcmp(VAR13, ""))
            {
                *VAR3 |= VAR16;
            }
            else if (!strcmp(VAR13, ""))
            {
            }
            else
            {
                FUN5(VAR10, "");
                return;
            }
        }
    }
    if (VAR4)
    {
        *VAR4 = FUN3(VAR2, "");
    }
    if (VAR6)
    {
        memset(VAR6, 0, sizeof(*VAR6));
        VAR6->VAR17[VAR18].VAR19 = FUN6(VAR2, "", 0);
        VAR6->VAR17[VAR20].VAR19 = FUN6(VAR2, "", 0);
        VAR6->VAR17[VAR21].VAR19 = FUN6(VAR2, "", 0);
        VAR6->VAR17[VAR22].VAR19 = FUN6(VAR2, "", 0);
        VAR6->VAR17[VAR23].VAR19 = FUN6(VAR2, "", 0);
        VAR6->VAR17[VAR24].VAR19 = FUN6(VAR2, "", 0);
        VAR6->VAR17[VAR18].VAR25 = FUN6(VAR2, "", 0);
        VAR6->VAR17[VAR20].VAR25 = FUN6(VAR2, "", 0);
        VAR6->VAR17[VAR21].VAR25 = FUN6(VAR2, "", 0);
        VAR6->VAR17[VAR22].VAR25 = FUN6(VAR2, "", 0);
        VAR6->VAR17[VAR23].VAR25 = FUN6(VAR2, "", 0);
        VAR6->VAR17[VAR24].VAR25 = FUN6(VAR2, "", 0);
        VAR6->VAR26 = FUN6(VAR2, "", 0);
        if (!FUN7(VAR6, VAR10))
        {
            return;
        }
    }
    if (VAR8)
    {
        *VAR8 = FUN8(VAR27, FUN3(VAR2, ""), VAR28, VAR29, &VAR12);
        if (VAR12)
        {
            FUN9(VAR10, VAR12);
            return;
        }
        if (VAR3 && *VAR8 == VAR30 && !(*VAR3 & VAR31))
        {
            FUN5(VAR10, ""
                             "");
            return;
        }
    }
}