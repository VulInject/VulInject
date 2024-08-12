void *FUN1(VAR1 *VAR2)
{
    if (!VAR2->VAR3)
    {
        VAR2->VAR3 = FUN2(NULL, FUN3(), VAR4 | VAR5, VAR6 | VAR7, -1, 0);
        if (!VAR2->VAR3)
        {
            FUN4("", VAR8, strerror(VAR9));
            return NULL;
        }
    }
    return VAR2->VAR3;
}