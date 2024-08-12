VAR1 *FUN1(VAR2 **VAR3)
{
    VAR1 *VAR4 = NULL;
    VAR1 *VAR5;
    VAR6 *VAR7 = FUN2();
    int VAR8;
    for (VAR8 = 0; VAR8 < VAR9; VAR8++)
    {
        if (VAR4 == NULL)
        {
            VAR4 = FUN3(sizeof(*VAR5));
            VAR5 = VAR4;
        }
        else
        {
            VAR5->VAR10 = FUN3(sizeof(*VAR5));
            VAR5 = VAR5->VAR10;
        }
        VAR5->VAR11 = FUN4(sizeof(*VAR5->VAR11));
        VAR5->VAR11->VAR12 = VAR8;
        VAR5->VAR11->VAR13 = VAR7->VAR14[VAR8];
    }
    return VAR4;