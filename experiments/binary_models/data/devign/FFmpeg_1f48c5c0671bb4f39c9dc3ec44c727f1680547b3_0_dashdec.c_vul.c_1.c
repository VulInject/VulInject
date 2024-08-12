static char *FUN1(VAR1 *VAR2, int VAR3, char *VAR4, char *VAR5, char *VAR6)
{
    int VAR7;
    char *VAR8;
    char *VAR9 = NULL;
    char VAR10[VAR11];
    char VAR12[VAR11];
    memset(VAR10, 0, sizeof(VAR10));
    for (VAR7 = 0; VAR7 < VAR3; ++VAR7)
    {
        if (VAR2[VAR7] && VAR2[VAR7]->VAR13 && VAR2[VAR7]->VAR13->VAR14 == VAR15)
        {
            VAR8 = FUN2(VAR2[VAR7]->VAR13);
            if (VAR8)
            {
                memset(VAR10, 0, sizeof(VAR10));
                memset(VAR12, 0, sizeof(VAR12));
                FUN3(VAR12, VAR11, VAR10, VAR8);
                FUN4(VAR10, VAR12, sizeof(VAR10));
                FUN5(VAR8);
            }
        }
    }
    if (VAR6)
        FUN6(VAR10, (const char *)VAR6, sizeof(VAR10));
    if (VAR4)
    {
        VAR9 = FUN7(VAR10, "", (const char *)VAR4);
        if (!VAR9)
        {
            return NULL;
        }
        FUN4(VAR10, VAR9, sizeof(VAR10));
        FUN8(VAR9);
    }
    if (VAR5 && VAR10[0] != '')
    {
        VAR9 = FUN7(VAR10, "", (const char *)VAR5);
        if (!VAR9)
        {
            return NULL;
        }
    }
    return VAR9;
}