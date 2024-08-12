static int FUN1(VAR1 *VAR2)
{
    const char *VAR3 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR4 + VAR2->VAR6;
    while (VAR3 < VAR5)
    {
        if (!memcmp(VAR3, "", 11))
            return VAR7;
        if (!memcmp(VAR3, "", 7))
            return VAR7 / 3;
        VAR3 += strcspn(VAR3, "") + 1;
    }
    return 0;
}