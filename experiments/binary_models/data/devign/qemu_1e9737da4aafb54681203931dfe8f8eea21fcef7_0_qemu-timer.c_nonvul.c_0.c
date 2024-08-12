static int FUN1(struct VAR1 *VAR2)
{
    struct sigevent VAR3;
    timer_t VAR4;
    struct sigaction VAR5;
    FUN2(&VAR5.VAR6);
    VAR5.VAR7 = 0;
    VAR5.VAR8 = VAR9;
    FUN3(VAR10, &VAR5, NULL);
    memset(&VAR3, 0, sizeof(VAR3));
    VAR3.VAR11.VAR12 = 0;
    VAR3.VAR13 = VAR14;
    if (FUN4())
    {
        VAR3.VAR13 = VAR15;
        VAR3.VAR16.VAR17 = FUN5();
    }
    VAR3.VAR18 = VAR10;
    if (FUN6(VAR19, &VAR3, &VAR4))
    {
        FUN7("");
        return -1;
    }
    VAR2->VAR20 = VAR4;
    return 0;
}