static int FUN1(void)
{
    int VAR1 = 1;
    int VAR2[2], VAR3, VAR4, VAR5;
    char VAR6;
    if (FUN2(VAR2) != 0)
    {
        FUN3("", VAR7, strerror(VAR8));
        return -1;
    }
    if (FUN4() != 0)
        return 0;
    VAR4 = FUN5();
    for (VAR3 = 3; VAR3 < VAR4; VAR3++)
    {
        if (VAR3 == VAR2[0])
            continue;
        if (VAR3 == FUN6(VAR9))
        {
            continue;
        }
        close(VAR3);
    }
    signal(VAR10, VAR11);
    signal(VAR12, VAR11);
    while (VAR1)
    {
        VAR5 = read(VAR2[0], &VAR6, 1);
        switch (VAR5)
        {
        case -1:
            if (VAR8 == VAR13)
                continue;
            FUN3("", VAR7, strerror(VAR8));
            VAR1 = 0;
            break;
        case 0:
            VAR1 = 0;
            break;
        default:
            FUN3("", VAR7);
            break;
        }
    }
    FUN3("", VAR7, VAR14);
    FUN7(VAR9, VAR14);
    FUN8(0);
}