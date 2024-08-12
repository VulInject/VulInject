VAR1 *FUN1(const char *VAR2)
{
    VAR3 *VAR4 = FUN2("");
    VAR1 *VAR5 = FUN3(VAR4, VAR2, 1);
    const char *VAR6;
    if (!VAR5)
    {
        return NULL;
    }
    VAR6 = FUN4(VAR5);
    if (!VAR6)
    {
        FUN5(VAR4, VAR5);
    }
    return VAR5;
}