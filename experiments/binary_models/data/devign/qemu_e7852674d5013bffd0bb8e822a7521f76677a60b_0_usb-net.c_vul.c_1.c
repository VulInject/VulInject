static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR9, VAR3, VAR3)->VAR10;
    struct VAR11 *VAR12;
    if (FUN3(VAR8))
    {
        VAR12 = (struct VAR11 *)VAR8->VAR13;
        if (!VAR8->VAR14 == VAR15)
            return -1;
        if (VAR6 + sizeof(struct VAR11) > sizeof(VAR8->VAR13))
            return -1;
        memset(VAR12, 0, sizeof(struct VAR11));
        VAR12->VAR16 = FUN4(VAR17);
        VAR12->VAR18 = FUN4(VAR6 + sizeof(struct VAR11));
        VAR12->VAR19 = FUN4(sizeof(struct VAR11) - 8);
        VAR12->VAR20 = FUN4(VAR6);
        memcpy(VAR12 + 1, VAR5, VAR6);
        VAR8->VAR21 = VAR6 + sizeof(struct VAR11);
    }
    else
    {
        if (VAR6 > sizeof(VAR8->VAR13))
            return -1;
        memcpy(VAR8->VAR13, VAR5, VAR6);
        VAR8->VAR21 = VAR6;
    }
    VAR8->VAR22 = 0;
    return VAR6;
}