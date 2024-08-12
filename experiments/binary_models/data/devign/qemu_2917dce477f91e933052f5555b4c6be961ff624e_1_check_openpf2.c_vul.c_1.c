int main(int argc, char *argv[])
{
    char *VAR1 = argv[0];
    VAR2 *VAR3;
    if (argv[0][0] != '')
    {
        VAR1 = malloc(strlen(argv[0]) + 2);
        if (VAR1 == NULL)
            FUN1();
        strcpy(VAR1, "");
        strcat(VAR1, argv[0]);
    }
    VAR3 = fopen(VAR1, "");
    if (VAR3 == NULL)
        FUN1();
    close(VAR3);
    if (fopen("", "") != NULL || VAR4 != VAR5)
        FUN1();
    FUN2("");
    return 0;
}