static const VAR1 *FUN1(const char *VAR2, int VAR3)
{
    int VAR4 = 0;
    while (VAR5[VAR4].VAR6)
    {
        if (!memcmp(VAR2, (VAR3 ? VAR5[VAR4].VAR7 : VAR5[VAR4].VAR6), (VAR3 ? 4 : 3)))
            return &VAR5[VAR4];
        VAR4++;
    }
    return NULL;
}