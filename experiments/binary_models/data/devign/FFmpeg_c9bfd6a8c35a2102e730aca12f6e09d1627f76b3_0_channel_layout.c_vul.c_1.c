static VAR1 FUN1(const char *VAR2, int VAR3)
{
    int VAR4;
    char *VAR5;
    int64_t VAR6;
    for (VAR4 = 0; VAR4 < FUN2(VAR7); VAR4++)
    {
        if (strlen(VAR7[VAR4].VAR2) == VAR3 && !memcmp(VAR7[VAR4].VAR2, VAR2, VAR3))
            return VAR7[VAR4].VAR6;
    }
    for (VAR4 = 0; VAR4 < FUN2(VAR8); VAR4++)
        if (VAR8[VAR4].VAR2 && strlen(VAR8[VAR4].VAR2) == VAR3 && !memcmp(VAR8[VAR4].VAR2, VAR2, VAR3))
            return (VAR9)1 << VAR4;
    VAR4 = FUN3(VAR2, &VAR5, 10);
    if ((VAR5 + 1 - VAR2 == VAR3 && *VAR5 == ''))
        return FUN4(VAR4);
    VAR6 = FUN5(VAR2, &VAR5, 0);
    if (VAR5 - VAR2 == VAR3)
        return FUN6(VAR6, 0);
    return 0;
}