static const VAR1 *FUN1(const VAR1 *VAR2, const char *VAR3)
{
    const char *VAR4 = strchr(VAR3, '');
    int VAR5 = VAR4 ? VAR4 - VAR3 : strlen(VAR3);
    while (VAR2->VAR3)
    {
        if (!FUN2(VAR3, VAR2->VAR3, VAR5) && strlen(VAR2->VAR3) == VAR5)
            break;
        VAR2++;
    }
    return VAR2;
}