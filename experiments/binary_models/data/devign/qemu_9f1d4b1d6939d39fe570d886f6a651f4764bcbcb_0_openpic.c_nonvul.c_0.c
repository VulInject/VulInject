static void FUN1(void *VAR1, int VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7;
    if (VAR2 >= VAR8)
    {
        fprintf(VAR9, "", VAR10, VAR2);
        FUN2();
    }
    VAR7 = &VAR5->VAR7[VAR2];
    FUN3("", VAR2, VAR3, VAR7->VAR11);
    if (VAR7->VAR3)
    {
        VAR7->VAR12 = VAR3;
        FUN4(VAR5, VAR2);
    }
    else
    {
        if (VAR3)
        {
            VAR7->VAR12 = 1;
            FUN4(VAR5, VAR2);
        }
        if (VAR7->VAR13 != VAR14)
        {
            VAR7->VAR12 = 0;
            FUN4(VAR5, VAR2);
        }
    }
}