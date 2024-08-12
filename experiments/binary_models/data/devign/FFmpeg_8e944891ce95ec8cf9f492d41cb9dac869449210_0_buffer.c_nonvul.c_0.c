VAR1 *FUN1(int VAR2)
{
    VAR1 *VAR3 = NULL;
    VAR4 *VAR5 = NULL;
    VAR5 = FUN2(VAR2);
    if (!VAR5)
        return NULL;
    VAR3 = FUN3(VAR5, VAR2, VAR6, NULL, 0);
    if (!VAR3)
        FUN4(&VAR5);
    return VAR3;
}