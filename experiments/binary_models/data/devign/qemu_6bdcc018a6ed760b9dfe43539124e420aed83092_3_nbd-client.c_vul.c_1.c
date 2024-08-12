int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    NBDRequest VAR5 = {.VAR6 = VAR7};
    NBDReply VAR8;
    ssize_t VAR9;
    if (!(VAR4->VAR10 & VAR11))
    {
        return 0;
    }
    VAR5.VAR12 = 0;
    VAR5.VAR13 = 0;
    FUN3(VAR4, &VAR5);
    VAR9 = FUN4(VAR2, &VAR5, NULL);
    if (VAR9 < 0)
    {
        VAR8.VAR14 = -VAR9;
    }
    else
    {
        FUN5(VAR4, &VAR5, &VAR8, NULL);
    }
    FUN6(VAR2, &VAR5);
    return -VAR8.VAR14;
}