static char *FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR1 *VAR4;
    char VAR5[256];
    int VAR6 = 0;
    FUN2(VAR4, &VAR7, VAR8)
    {
        if (VAR4 == VAR2)
        {
            continue;
        }
        if (strcmp(VAR4->VAR3, VAR3) == 0)
        {
            VAR6++;
        }
    }
    snprintf(VAR5, sizeof(VAR5), "", VAR3, VAR6);
    return FUN3(VAR5);
}