static char *FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    char *VAR5;
    if (asprintf(&VAR5, "", VAR4->VAR6, VAR2->VAR7) < 0)
    {
        return NULL;
    }
    return VAR5;
}