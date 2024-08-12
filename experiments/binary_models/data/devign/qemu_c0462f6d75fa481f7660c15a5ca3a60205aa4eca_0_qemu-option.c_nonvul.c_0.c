bool FUN1(const char *VAR1)
{
    size_t VAR2 = strlen(VAR1) + 1;
    char *VAR3 = FUN2(VAR2);
    const char *VAR4 = VAR1;
    bool VAR5 = false;
    while (*VAR4)
    {
        VAR4 = FUN3(VAR3, VAR2, VAR4);
        if (*VAR4)
        {
            VAR4++;
        }
        if (FUN4(VAR3))
        {
            VAR5 = true;
            goto VAR6;
        }
    }
VAR6:
    FUN5(VAR3);
    return VAR5;
}