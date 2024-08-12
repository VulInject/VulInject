static VAR1 *FUN1(VAR2 *VAR3, int VAR4)
{
    VAR1 *VAR5;
    VAR5 = FUN2(sizeof(VAR1));
    if (!VAR5)
        return NULL;
    VAR5->VAR4 = VAR4;
    VAR5->VAR6 = FUN3(VAR3, VAR7, VAR5);
    FUN4(VAR5->VAR4, VAR8, NULL, VAR5);
    snprintf(VAR5->VAR6->VAR9, sizeof(VAR5->VAR6->VAR9), "", VAR4);
    return VAR5;
}