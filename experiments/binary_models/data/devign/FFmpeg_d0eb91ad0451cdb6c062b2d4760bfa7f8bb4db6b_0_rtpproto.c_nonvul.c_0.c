static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    struct sockaddr_storage VAR9;
    socklen_t VAR10;
    int VAR11, VAR12;
    struct pollfd VAR13[2] = {{VAR7->VAR14, VAR15, 0}, {VAR7->VAR16, VAR15, 0}};
    for (;;)
    {
        VAR10 = sizeof(VAR9);
        VAR11 = recvfrom(VAR7->VAR14, VAR4, VAR5, 0, (struct VAR17 *)&VAR9, &VAR10);
        if (VAR11 < 0)
        {
            if (FUN2() == FUN3(VAR18) || FUN2() == FUN3(VAR19))
                continue;
            return FUN4(VAR20);
        }
        break;
    }
    for (;;)
    {
        if (FUN5())
            return FUN4(VAR19);
        VAR12 = FUN6(VAR13, 2, 100);
        if (VAR12 > 0)
        {
            if (VAR13[1].VAR21 & VAR15)
            {
                VAR10 = sizeof(VAR9);
                VAR11 = recvfrom(VAR7->VAR16, VAR4, VAR5, 0, (struct VAR17 *)&VAR9, &VAR10);
                if (VAR11 < 0)
                {
                    if (FUN2() == FUN3(VAR18) || FUN2() == FUN3(VAR19))
                        continue;
                    return FUN4(VAR20);
                }
                break;
            }
            if (VAR13[0].VAR21 & VAR15)
            {
                VAR10 = sizeof(VAR9);
                VAR11 = recvfrom(VAR7->VAR14, VAR4, VAR5, 0, (struct VAR17 *)&VAR9, &VAR10);
                if (VAR11 < 0)
                {
                    if (FUN2() == FUN3(VAR18) || FUN2() == FUN3(VAR19))
                        continue;
                    return FUN4(VAR20);
                }
                break;
            }
        }
        else if (VAR12 < 0)
        {
            if (FUN2() == FUN3(VAR19))
                continue;
            return FUN4(VAR20);
        }
    }
    return VAR11;
}