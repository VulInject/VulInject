VAR1 *FUN1(VAR2 *VAR3, const VAR4 *VAR5)
{
    VAR1 *VAR6;
    VAR6 = FUN2(VAR3, FUN3(VAR5, ""), 1);
    if (VAR6 == NULL)
        return NULL;
    FUN4(VAR5, VAR7, VAR6);
    return VAR6;
}