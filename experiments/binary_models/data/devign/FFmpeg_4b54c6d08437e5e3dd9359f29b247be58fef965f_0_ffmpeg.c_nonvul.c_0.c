static int FUN1(void)
{
    int VAR1 = 1;
    unsigned char VAR2;
    struct timeval VAR3;
    fd_set VAR4;
    FUN2(&VAR4);
    FUN3(0, &VAR4);
    VAR3.VAR5 = 0;
    VAR3.VAR6 = 0;
    VAR1 = FUN4(1, &VAR4, NULL, NULL, &VAR3);
    if (VAR1 > 0)
    {
        VAR1 = read(0, &VAR2, 1);
        if (VAR1 == 1)
            return VAR2;
        return VAR1;
    }
    if (kbhit())
        return (getch());
    return -1;
}