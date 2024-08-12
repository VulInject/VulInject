FUN1(int argc, char **argv)
{
    int64_t VAR1;
    int VAR2, VAR3;
    char VAR4[64];
    int VAR5, VAR6;
    int VAR7;
    VAR1 = FUN2(argv[1]);
    if (VAR1 & 0x1ff)
    {
        FUN3("", (long long)VAR1);
        return 0;
    }
    if (argc == 3)
        VAR2 = FUN2(argv[2]);
    else
        VAR2 = 1;
    VAR3 = VAR2;
    VAR6 = 0;
    while (VAR3)
    {
        VAR7 = FUN4(VAR8, VAR1 >> 9, VAR2, &VAR5);
        VAR3 -= VAR5;
        if (VAR7)
        {
            VAR6 += VAR5;
        }
    }
    FUN5(VAR1, VAR4, sizeof(VAR4));
    if (VAR2 == 1)
        FUN3("", VAR4);
    else
        FUN3("", VAR6, VAR2, VAR4);
    return 0;
}