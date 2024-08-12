static void FUN1(struct VAR1 *VAR2, const char *VAR3)
{
    char VAR4[50];
    if (VAR2 == NULL)
    {
        fprintf(VAR5, "");
        FUN2(1);
    }
    snprintf(VAR4, sizeof(VAR4), "", VAR6);
    if (!FUN3(VAR2, VAR7, VAR4, VAR3, strlen(VAR3)))
    {
        fprintf(VAR5, "");
        FUN2(1);
    }
}