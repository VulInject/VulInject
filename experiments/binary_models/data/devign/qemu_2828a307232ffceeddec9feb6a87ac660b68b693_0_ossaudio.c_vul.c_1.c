static void *FUN1(void)
{
    VAR1 *VAR2 = FUN2(sizeof(VAR1));
    *VAR2 = VAR3;
    if (FUN3(VAR2->VAR4, VAR5 | VAR6) < 0 || FUN3(VAR2->VAR7, VAR5 | VAR6) < 0)
    {
        return NULL;
    }
    return VAR2;