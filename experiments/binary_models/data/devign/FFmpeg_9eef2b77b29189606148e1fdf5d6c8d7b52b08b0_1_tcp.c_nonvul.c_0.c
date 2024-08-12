static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10;
    fd_set VAR11;
    struct timeval VAR12;
    for (;;)
    {
        if (FUN2())
            return -VAR13;
        VAR10 = VAR7->VAR14;
        FUN3(&VAR11);
        FUN4(VAR7->VAR14, &VAR11);
        VAR12.VAR15 = 0;
        VAR12.VAR16 = 100 * 1000;
        FUN5(VAR10 + 1, &VAR11, NULL, NULL, &VAR12);
        VAR9 = recv(VAR7->VAR14, VAR4, VAR5, 0);
        VAR9 = read(VAR7->VAR14, VAR4, VAR5);
        if (VAR9 < 0)
        {
            if (VAR17 != VAR13 && VAR17 != VAR18)
                return VAR17;
            return -VAR17;
        }
        else
            break;
    }
    return VAR9;
}