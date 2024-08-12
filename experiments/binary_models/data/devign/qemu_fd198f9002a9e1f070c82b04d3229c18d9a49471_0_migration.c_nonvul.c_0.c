VAR1 *FUN1(VAR2 **VAR3)
{
    VAR1 *VAR4 = NULL;
    VAR1 *VAR5;
    VAR6 *VAR7 = FUN2();
    int VAR8;
    VAR5 = NULL;
    for (VAR8 = 0; VAR8 < VAR9; VAR8++)
    {
        if (VAR8 == VAR10)
        {
            continue;
        }
        if (VAR4 == NULL)
        {
            VAR4 = FUN3(sizeof(*VAR5));
            VAR5 = VAR4;
        }
        else
        {
            VAR5->VAR11 = FUN3(sizeof(*VAR5));
            VAR5 = VAR5->VAR11;
        }
        VAR5->VAR12 = FUN4(sizeof(*VAR5->VAR12));
        VAR5->VAR12->VAR13 = VAR8;
        VAR5->VAR12->VAR14 = VAR7->VAR15[VAR8];
    }
    return VAR4;
}