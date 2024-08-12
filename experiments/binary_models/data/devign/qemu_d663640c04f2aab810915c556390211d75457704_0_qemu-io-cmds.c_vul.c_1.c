static int FUN1(VAR1 *VAR2, int argc, char **argv)
{
    int64_t VAR3, VAR4;
    int VAR5, VAR6;
    char VAR7[64];
    int VAR8, VAR9;
    int VAR10;
    VAR3 = FUN2(argv[1]);
    if (VAR3 < 0)
    {
        FUN3("", argv[1]);
    }
    else if (VAR3 & 0x1ff)
    {
        FUN3("" VAR11 "", VAR3);
        if (argc == 3)
        {
            VAR5 = FUN2(argv[2]);
            if (VAR5 < 0)
            {
                FUN3("", argv[2]);
            }
            else
            {
                VAR5 = 1;
                VAR6 = VAR5;
                VAR9 = 0;
                VAR4 = VAR3 >> 9;
                while (VAR6)
                {
                    VAR10 = FUN4(VAR2, VAR4, VAR6, &VAR8);
                    VAR4 += VAR8;
                    VAR6 -= VAR8;
                    if (VAR10)
                    {
                        VAR9 += VAR8;
                        if (VAR8 == 0)
                        {
                            VAR5 -= VAR6;
                            VAR6 = 0;
                            FUN5(VAR3, VAR7, sizeof(VAR7));
                            FUN3("", VAR9, VAR5, VAR7);