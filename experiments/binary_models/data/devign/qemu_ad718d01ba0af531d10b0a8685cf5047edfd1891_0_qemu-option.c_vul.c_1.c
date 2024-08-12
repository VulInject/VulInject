int FUN1(VAR1 *VAR2, const char *VAR3, bool VAR4)
{
    VAR5 *VAR6;
    const VAR7 *VAR8 = VAR2->VAR9->VAR8;
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
            FUN2(VAR11, VAR3);
            return -1;
        }
    }
    VAR6 = FUN3(sizeof(*VAR6));
    VAR6->VAR3 = FUN4(VAR3);
    VAR6->VAR2 = VAR2;
    FUN5(&VAR2->VAR12, VAR6, VAR13);
    if (VAR8[VAR10].VAR3 != NULL)
    {
        VAR6->VAR8 = VAR8 + VAR10;
    }
    VAR6->VAR14.VAR15 = !!VAR4;
    return 0;
}