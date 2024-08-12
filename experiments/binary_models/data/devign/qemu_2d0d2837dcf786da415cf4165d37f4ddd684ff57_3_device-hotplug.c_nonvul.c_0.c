VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3;
    VAR4 *VAR5;
    VAR5 = FUN2(VAR2);
    if (!VAR5)
        return NULL;
    VAR3 = FUN3(VAR5, VAR6->VAR7);
    if (!VAR3)
    {
        FUN4(VAR5);
        return NULL;
    }
    return VAR3;
}