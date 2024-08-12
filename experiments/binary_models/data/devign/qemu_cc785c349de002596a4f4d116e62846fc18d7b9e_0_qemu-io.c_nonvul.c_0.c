static int FUN1(int argc, char **argv)
{
    int64_t VAR1, VAR2;
    int VAR3, VAR4;
    char VAR5[64];
    int VAR6, VAR7;
    int VAR8;
    VAR1 = FUN2(argv[1]);
    if (VAR1 & 0x1ff)
    {
        FUN3("" VAR9 "", VAR1);
        return 0;
    }
    if (argc == 3)
    {
        VAR3 = FUN2(argv[2]);
    }
    else
    {
        VAR3 = 1;
    }
    VAR4 = VAR3;
    VAR7 = 0;
    VAR2 = VAR1 >> 9;
    while (VAR4)
    {
        VAR8 = FUN4(VAR10, VAR2, VAR4, &VAR6);
        VAR2 += VAR6;
        VAR4 -= VAR6;
        if (VAR8)
        {
            VAR7 += VAR6;
        }
        if (VAR6 == 0)
        {
            VAR3 -= VAR4;
            VAR4 = 0;
        }
    }
    FUN5(VAR1, VAR5, sizeof(VAR5));
    FUN3("", VAR7, VAR3, VAR5);
    return 0;
}