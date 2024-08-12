VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3;
    FUN2(VAR3, &VAR4, VAR5)
    {
        if (strcmp(VAR3->VAR6, VAR2) != 0)
            continue;
        return VAR3;
    }
    return NULL;
}