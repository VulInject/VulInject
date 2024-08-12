static int FUN1(VAR1 **VAR2, const char *VAR3, void *VAR4)
{
    int VAR5;
    if (*VAR2)
        FUN2(*VAR2);
    *VAR2 = NULL;
    VAR5 = FUN3(VAR2, VAR3, VAR6, NULL, NULL, NULL, NULL, 0, VAR4);
    if (VAR5 < 0)
        FUN4(VAR4, VAR7, "", VAR3);
    return VAR5;
}