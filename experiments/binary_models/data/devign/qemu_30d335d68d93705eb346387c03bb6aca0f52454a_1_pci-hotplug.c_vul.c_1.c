static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, const char *VAR5)
{
    VAR1 *VAR6;
    VAR7 *VAR8 = NULL;
    int VAR9 = -1;
    char VAR10[128];
    VAR11 *VAR12;
    int VAR13;
    if (FUN2(VAR10, sizeof(VAR10), "", VAR5))
    {
        if (!strcmp(VAR10, ""))
            VAR9 = VAR14;
        else if (!strcmp(VAR10, ""))
        {
            VAR9 = VAR15;
        }
        else
        {
            FUN3(VAR3, "", VAR10);
            return NULL;
        }
    }
    else
    {
        FUN3(VAR3, "");
        return NULL;
    }
    if (FUN2(VAR10, sizeof(VAR10), "", VAR5))
    {
        VAR8 = FUN4(VAR5);
        if (!VAR8)
            return NULL;
        if (VAR8->VAR4)
        {
            FUN3(VAR3, "");
            return NULL;
        }
    }
    else
    {
        VAR8 = NULL;
    }
    VAR12 = FUN5(&VAR13, VAR4);
    if (!VAR12)
    {
        FUN3(VAR3, "", VAR4);
        return NULL;
    }
    switch (VAR9)
    {
    case VAR14:
        if (!VAR8)
        {
            FUN3(VAR3, "");
            return NULL;
        }
        VAR6 = FUN6(VAR12, VAR13, "");
        if (FUN7(&VAR6->VAR16) < 0)
            VAR6 = NULL;
        if (VAR6)
        {
            VAR17 *VAR18 = FUN8(&VAR6->VAR16.VAR19);
            FUN9(FUN10(VAR20, VAR21, VAR18), VAR8, VAR8->VAR22);
        }
        break;
    case VAR15:
        if (!VAR8)
        {
            FUN3(VAR3, "");
            return NULL;
        }
        VAR6 = FUN6(VAR12, VAR13, "");
        FUN11(&VAR6->VAR16, "", VAR8);
        if (FUN7(&VAR6->VAR16) < 0)
            VAR6 = NULL;
        break;
    default:
        VAR6 = NULL;
    }
    return VAR6;
}