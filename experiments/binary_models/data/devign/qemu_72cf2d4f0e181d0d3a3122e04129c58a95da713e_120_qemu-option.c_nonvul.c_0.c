int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    VAR5 *VAR6;
    VAR6 = FUN2(VAR2, VAR3);
    if (!VAR6)
    {
        VAR7 *VAR8 = VAR2->VAR9->VAR8;
        int VAR10;
        for (VAR10 = 0; VAR8[VAR10].VAR3 != NULL; VAR10++)
        {
            if (strcmp(VAR8[VAR10].VAR3, VAR3) == 0)
            {
                break;
            }
        }
        if (VAR8[VAR10].VAR3 == NULL)
        {
            if (VAR10 == 0)
            {
                ;
            }
            else
            {
                fprintf(VAR11, ""%VAR12\"", VAR3, VAR2->VAR9->VAR3);
                return -1;
            }
        }
        VAR6 = FUN3(sizeof(*VAR6));
        VAR6->VAR3 = FUN4(VAR3);
        VAR6->VAR2 = VAR2;
        FUN5(&VAR2->VAR13, VAR6, VAR14);
        if (VAR8[VAR10].VAR3 != NULL)
        {
            VAR6->VAR8 = VAR8 + VAR10;
        }
    }
    FUN6((char *)VAR6->VAR15);
    VAR6->VAR15 = NULL;
    if (VAR4)
    {
        VAR6->VAR15 = FUN4(VAR4);
    }
    if (FUN7(VAR6) < 0)
    {
        fprintf(VAR11, ""%VAR12\""%VAR12.%VAR12\"", VAR6->VAR15, VAR2->VAR9->VAR3, VAR6->VAR3);
        FUN8(VAR6);
        return -1;
    }
    return 0;
}