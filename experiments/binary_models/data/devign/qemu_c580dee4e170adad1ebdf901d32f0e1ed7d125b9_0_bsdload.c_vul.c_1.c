int FUN1(const char *VAR1, char **argv, char **VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6)
{
    struct linux_binprm VAR7;
    int VAR8;
    int VAR9;
    VAR7.VAR10 = VAR11 * VAR12 - sizeof(unsigned int);
    for (VAR9 = 0; VAR9 < VAR12; VAR9++)
        VAR7.VAR13[VAR9] = NULL;
    VAR8 = open(VAR1, VAR14);
    if (VAR8 < 0)
        return VAR8;
    VAR7.VAR15 = VAR8;
    VAR7.VAR1 = (char *)VAR1;
    VAR7.argc = FUN2(argv);
    VAR7.argv = argv;
    VAR7.VAR16 = FUN2(VAR2);
    VAR7.VAR2 = VAR2;
    VAR8 = FUN3(&VAR7);
    if (VAR8 >= 0)
    {
        if (VAR7.VAR17[0] == 0x7f && VAR7.VAR17[1] == '' && VAR7.VAR17[2] == '' && VAR7.VAR17[3] == '')
        {
            VAR8 = FUN4(&VAR7, VAR4, VAR6);
        }
        else
        {
            fprintf(VAR18, "");
            return -1;
        }
    }
    if (VAR8 >= 0)
    {
        FUN5(VAR4, VAR6);
        return VAR8;
    }
    for (VAR9 = 0; VAR9 < VAR12; VAR9++)
    {
        free(VAR7.VAR13[VAR9]);
    }
    return (VAR8);
}