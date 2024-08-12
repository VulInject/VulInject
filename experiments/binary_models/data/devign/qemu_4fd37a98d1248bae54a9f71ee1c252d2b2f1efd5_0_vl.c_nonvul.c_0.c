char *FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    uint32_t VAR5 = 0;
    char *VAR6 = NULL;
    FUN2(VAR4, &VAR7, VAR8)
    {
        char *VAR9 = NULL, *VAR10;
        int VAR11;
        if (VAR4->VAR12)
        {
            VAR9 = FUN3(VAR4->VAR12);
            assert(VAR9);
        }
        if (VAR4->VAR13 && VAR9)
        {
            size_t VAR14 = strlen(VAR9) + strlen(VAR4->VAR13) + 1;
            VAR10 = FUN4(VAR14);
            snprintf(VAR10, VAR14, "", VAR9, VAR4->VAR13);
            FUN5(VAR9);
        }
        else if (VAR9)
        {
            VAR10 = VAR9;
        }
        else
        {
            VAR10 = strdup(VAR4->VAR13);
            assert(VAR10);
        }
        if (VAR5)
        {
            VAR6[VAR5 - 1] = '';
        }
        VAR11 = strlen(VAR10) + 1;
        VAR6 = FUN6(VAR6, VAR5 + VAR11);
        memcpy(&VAR6[VAR5], VAR10, VAR11);
        VAR5 += VAR11;
        FUN5(VAR10);
    }
    *VAR2 = VAR5;
    return VAR6;
}