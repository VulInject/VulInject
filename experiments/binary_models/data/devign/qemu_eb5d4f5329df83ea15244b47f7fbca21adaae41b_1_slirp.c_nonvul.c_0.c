static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR3;
    struct VAR7 *VAR8;
    while (FUN2(VAR2))
    {
        int VAR9;
        struct socket *VAR10 = FUN3(VAR6);
        if (!VAR10)
            return -VAR11;
        VAR9 = FUN4(VAR2, &VAR12, VAR10, VAR4);
        if (VAR9 < 0)
            return VAR9;
        if ((VAR10->VAR13.VAR14 & VAR6->VAR15.VAR14) != VAR6->VAR16.VAR14)
        {
            return -VAR17;
        }
        for (VAR8 = VAR6->VAR18; VAR8; VAR8 = VAR8->VAR19)
        {
            if (VAR8->VAR20 == 3 && VAR10->VAR13.VAR14 == VAR8->VAR21.VAR14 && VAR10->VAR22 == VAR8->VAR23)
            {
                break;
            }
        }
        if (!VAR8)
            return -VAR17;
        VAR10->VAR24 = (void *)VAR8->VAR25;
    }
    return FUN4(VAR2, &VAR26, VAR6, VAR4);
}