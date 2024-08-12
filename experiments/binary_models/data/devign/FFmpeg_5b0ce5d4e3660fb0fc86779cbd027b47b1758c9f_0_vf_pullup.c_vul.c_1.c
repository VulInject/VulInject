static VAR1 *FUN1(VAR2 *VAR3, int VAR4)
{
    VAR1 *VAR5, *VAR6;
    VAR6 = VAR5 = FUN2(sizeof(*VAR5));
    if (!VAR6)
        return NULL;
    if (FUN3(VAR3, VAR6) < 0)
    {
        FUN4(VAR6);
        return NULL;
    }
    for (; VAR4 > 0; VAR4--)
    {
        VAR6->VAR7 = FUN2(sizeof(*VAR6->VAR7));
        if (!VAR6->VAR7)
        {
            FUN5(VAR5, &VAR6);
            return NULL;
        }
        VAR6->VAR7->VAR8 = VAR6;
        VAR6 = VAR6->VAR7;
        if (FUN3(VAR3, VAR6) < 0)
        {
            FUN5(VAR5, &VAR6);
            return NULL;
        }
    }
    VAR6->VAR7 = VAR5;
    VAR5->VAR8 = VAR6;
    return VAR5;
}