static int FUN1(const char *VAR1, char *VAR2, int VAR3)
{
    VAR4 *VAR5;
    int VAR6 = -1;
    int VAR7 = strlen(VAR1);
    char VAR8[512];
    VAR5 = fopen("", "");
    if (!VAR5)
    {
        return -1;
    }
    do
    {
        if (!fgets(VAR8, sizeof(VAR8), VAR5))
        {
            break;
        }
        if (!FUN2(VAR8, VAR1, VAR7))
        {
            strncpy(VAR2, VAR8, VAR3);
            VAR6 = 0;
            break;
        }
    } while (*VAR8);
    fclose(VAR5);
    return VAR6;
}