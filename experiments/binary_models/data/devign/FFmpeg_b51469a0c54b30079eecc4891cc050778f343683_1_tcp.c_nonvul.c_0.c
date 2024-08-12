static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    fd_set VAR13;
    struct timeval VAR14;
    VAR10 = VAR5;
    while (VAR5 > 0)
    {
        if (FUN2())
            return -VAR15;
        VAR11 = VAR7->VAR16;
        FUN3(&VAR13);
        FUN4(VAR7->VAR16, &VAR13);
        VAR14.VAR17 = 0;
        VAR14.VAR18 = 100 * 1000;
        VAR9 = FUN5(VAR11 + 1, NULL, &VAR13, NULL, &VAR14);
        if (VAR9 > 0 && FUN6(VAR7->VAR16, &VAR13))
        {
            VAR12 = send(VAR7->VAR16, VAR4, VAR5, 0);
            VAR12 = write(VAR7->VAR16, VAR4, VAR5);
            if (VAR12 < 0)
            {
                if (VAR19 != VAR15 && VAR19 != VAR20)
                {
                    return VAR19;
                    return -VAR19;
                }
                continue;
            }
            VAR5 -= VAR12;
            VAR4 += VAR12;
        }
        else if (VAR9 < 0)
        {
            return -1;
        }
    }
    return VAR10 - VAR5;
}