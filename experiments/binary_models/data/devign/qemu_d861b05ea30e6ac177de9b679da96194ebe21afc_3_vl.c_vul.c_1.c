static VAR1 *FUN1(VAR2 *VAR3, int VAR4, int VAR5)
{
    VAR1 *VAR6;
    VAR6 = FUN2(sizeof(VAR1));
    if (!VAR6)
        return NULL;
    VAR6->VAR4 = VAR4;
    VAR6->VAR7 = FUN3(VAR3, VAR8, VAR6);
    snprintf(VAR6->VAR7->VAR9, sizeof(VAR6->VAR7->VAR9), "", VAR4);
    if (VAR5)
    {
        FUN4(VAR6);
    }
    else
    {
        FUN5(VAR6->VAR4, NULL, VAR10, VAR6);
    }
    return VAR6;
}