static VAR1 FUN1(VAR2 *VAR3, const struct VAR4 *VAR5, size_t VAR6, int *VAR7, size_t VAR8, VAR9 **VAR10)
{
    VAR11 *VAR12 = FUN2(VAR3);
    ssize_t VAR13;
    struct msghdr VAR14 = {
        NULL,
    };
    char VAR15[FUN3(sizeof(int) * VAR16)];
    size_t VAR17 = sizeof(int) * VAR8;
    struct VAR18 *VAR19;
    memset(VAR15, 0, FUN3(sizeof(int) * VAR16));
    VAR14.VAR20 = (struct VAR4 *)VAR5;
    VAR14.VAR21 = VAR6;
    if (VAR8)
    {
        if (VAR8 > VAR16)
        {
            FUN4(VAR10, VAR22, "", VAR16, VAR8);
            return -1;
        }
        VAR14.VAR23 = VAR15;
        VAR14.VAR24 = FUN3(sizeof(int) * VAR8);
        VAR19 = FUN5(&VAR14);
        VAR19->VAR25 = FUN6(VAR17);
        VAR19->VAR26 = VAR27;
        VAR19->VAR28 = VAR29;
        memcpy(FUN7(VAR19), VAR7, VAR17);
    }
VAR30:
    VAR13 = sendmsg(VAR12->VAR31, &VAR14, 0);
    if (VAR13 <= 0)
    {
        if (FUN8() == VAR32 || FUN8() == VAR33)
        {
            return VAR34;
        }
        if (FUN8() == VAR35)
        {
            goto VAR30;
        }
        FUN4(VAR10, FUN8(), "");
        return -1;
    }
    return VAR13;
}