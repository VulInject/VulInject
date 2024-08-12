static VAR1 *FUN1(void *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2;
    VAR1 *VAR8;
    int VAR9 = FUN2(VAR4);
    VAR8 = FUN3(VAR9);
    if (VAR8 == NULL)
    {
        fprintf(VAR10, "", VAR9);
        FUN4(-1);
    }
    if (FUN5(VAR7, VAR11))
    {
        VAR7->VAR12[VAR5].VAR13 = &VAR7->VAR14;
        VAR7->VAR12[VAR5].VAR5 = VAR5;
        FUN6(VAR8, VAR15, VAR16, VAR17, &VAR7->VAR12[VAR5]);
    }
    else
    {
        FUN6(VAR8, VAR15, VAR18, VAR17, VAR7);
    }
    return VAR8;