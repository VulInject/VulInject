static int FUN1(int VAR1, const void *VAR2, size_t VAR3, const struct VAR4 *VAR5, int VAR6)
{
    struct msghdr VAR7 = {0};
    struct iovec VAR8;
    VAR7.VAR9 = NULL;
    VAR7.VAR10 = 0;
    VAR7.VAR11 = &VAR8;
    VAR8.VAR12 = VAR2;
    VAR8.VAR13 = VAR3;
    VAR7.VAR14 = 1;
    VAR7.VAR15 = 0;
    if (VAR5)
    {
        char VAR16[FUN2(sizeof(struct VAR4))];
        struct VAR17 *VAR18;
        VAR7.VAR19 = VAR16;
        VAR7.VAR15 = sizeof(VAR16);
        VAR7.VAR20 = 0;
        VAR18 = FUN3(&VAR7);
        VAR18->VAR21 = VAR22;
        VAR18->VAR23 = VAR24;
        VAR18->VAR25 = FUN4(sizeof(struct VAR4));
        VAR7.VAR15 = VAR18->VAR25;
        memcpy(FUN5(VAR18), VAR5, sizeof(struct VAR4));
    }
    return sendmsg(VAR1, &VAR7, VAR6 | VAR26);
}