static int FUN1(struct VAR1 *VAR2, char *VAR3)
{
    VhostUserMsg VAR4 = {0};
    int VAR5;
    assert(VAR2->VAR6->VAR7 == VAR8);
    if (FUN2(VAR2->VAR9, VAR10))
    {
        return 0;
    }
    if (FUN2(VAR2->VAR11, VAR12))
    {
        VAR4.VAR13 = VAR14;
        VAR4.VAR15 = VAR16;
        memcpy((char *)&VAR4.VAR17, VAR3, 6);
        VAR4.VAR18 = sizeof(VAR19.VAR17);
        VAR5 = FUN3(VAR2, &VAR4, NULL, 0);
        return VAR5;
    }
    return -1;
}