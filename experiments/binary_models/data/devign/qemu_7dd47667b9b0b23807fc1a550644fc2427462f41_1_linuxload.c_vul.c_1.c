int FUN1(const char *VAR1, char **argv, char **VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6, struct VAR7 *VAR8)
{
    int VAR9;
    int VAR10;
    VAR8->VAR11 = VAR12 * VAR13 - sizeof(unsigned int);
    memset(VAR8->VAR14, 0, sizeof(VAR8->VAR14));
    VAR9 = open(VAR1, VAR15);
    if (VAR9 < 0)
        return VAR9;
    VAR8->VAR16 = VAR9;
    VAR8->VAR1 = (char *)VAR1;
    VAR8->argc = FUN2(argv);
    VAR8->argv = argv;
    VAR8->VAR17 = FUN2(VAR2);
    VAR8->VAR2 = VAR2;
    VAR9 = FUN3(VAR8);
    if (VAR9 >= 0)
    {
        if (VAR8->VAR18[0] == 0x7f && VAR8->VAR18[1] == '' && VAR8->VAR18[2] == '' && VAR8->VAR18[3] == '')
        {
            VAR9 = FUN4(VAR8, VAR4, VAR6);
        }
        else if (VAR8->VAR18[0] == '' && VAR8->VAR18[1] == '' && VAR8->VAR18[2] == '' && VAR8->VAR18[3] == '')
        {
            VAR9 = FUN5(VAR8, VAR4, VAR6);
        }
        else
        {
            fprintf(VAR19, "");
            return -1;
        }
    }
    if (VAR9 >= 0)
    {
        FUN6(VAR4, VAR6);
        return VAR9;
    }
    for (VAR10 = 0; VAR10 < VAR13; VAR10++)
    {
        free(VAR8->VAR14[VAR10]);
    }
    return (VAR9);
}