VAR1 *FUN1(int *VAR2, VAR1 *VAR3, const char *VAR4)
{
    int VAR5, VAR6;
    unsigned VAR7;
    assert(!VAR3->VAR8);
    if (!VAR3)
    {
        fprintf(VAR9, "");
        return NULL;
    }
    if (!VAR4)
    {
        *VAR2 = -1;
        return FUN2(VAR3, 0);
    }
    if (FUN3(VAR4, &VAR5, &VAR6, &VAR7, NULL) < 0)
    {
        return NULL;
    }
    if (VAR5 != 0)
    {
        fprintf(VAR9, "");
        return NULL;
    }
    *VAR2 = FUN4(VAR7, 0);
    return FUN2(VAR3, VAR6);
}