void FUN1(void *VAR1, int argc, char **argv, const VAR2 *VAR3, void (*VAR4)(void *, const char *))
{
    const char *VAR5;
    int VAR6, VAR7 = 1, VAR8;
    FUN2(&argc, &argv);
    VAR6 = 1;
    while (VAR6 < argc)
    {
        VAR5 = argv[VAR6++];
        if (VAR7 && VAR5[0] == '' && VAR5[1] != '')
        {
            if (VAR5[1] == '' && VAR5[2] == '')
            {
                VAR7 = 0;
                continue;
            }
            VAR5++;
            if ((VAR8 = FUN3(VAR1, VAR5, argv[VAR6], VAR3)) < 0)
                FUN4(1);
            VAR6 += VAR8;
        }
        else
        {
            if (VAR4)
                FUN5(VAR1, VAR5);
        }
    }
}