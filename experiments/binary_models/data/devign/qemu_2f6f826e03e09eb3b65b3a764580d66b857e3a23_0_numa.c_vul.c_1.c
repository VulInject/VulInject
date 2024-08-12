VAR1 *FUN1(VAR2 **VAR3)
{
    VAR4 *VAR5;
    VAR1 *VAR6 = NULL;
    VAR5 = FUN2();
    if (VAR5 == NULL)
    {
        return NULL;
    }
    if (FUN3(VAR5, VAR7, &VAR6) != 0)
    {
        goto VAR8;
    }
    return VAR6;
VAR8:
    FUN4(VAR6);
    return NULL;
}