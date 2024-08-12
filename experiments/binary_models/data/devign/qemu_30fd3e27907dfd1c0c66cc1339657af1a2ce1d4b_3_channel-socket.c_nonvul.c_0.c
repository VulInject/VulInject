static VAR1 FUN1(VAR2 *VAR3, const struct VAR4 *VAR5, size_t VAR6, int **VAR7, VAR8 *VAR9, VAR10 **VAR11)
{
    VAR12 *VAR13 = FUN2(VAR3);
    ssize_t VAR14;
    struct msghdr VAR15 = {
        NULL,
    };
    char VAR16[FUN3(sizeof(int) * VAR17)];
    int VAR18 = 0;
    memset(VAR16, 0, FUN3(sizeof(int) * VAR17));
    VAR18 |= VAR19;
    VAR15.VAR20 = (struct VAR4 *)VAR5;
    VAR15.VAR21 = VAR6;
    if (VAR7 && VAR9)
    {
        VAR15.VAR22 = VAR16;
        VAR15.VAR23 = sizeof(VAR16);
    }
VAR24:
    VAR14 = FUN4(VAR13->VAR25, &VAR15, VAR18);
    if (VAR14 < 0)
    {
        if (FUN5() == VAR26)
        {
            return VAR27;
        }
        if (FUN5() == VAR28)
        {
            goto VAR24;
        }
        FUN6(VAR11, FUN5(), "");
        return -1;
    }
    if (VAR7 && VAR9)
    {
        FUN7(&VAR15, VAR7, VAR9);
    }
    return VAR14;
}