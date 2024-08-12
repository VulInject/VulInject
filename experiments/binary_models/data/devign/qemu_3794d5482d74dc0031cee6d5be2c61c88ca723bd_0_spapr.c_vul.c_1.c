int FUN1(target_ulong VAR1, target_ulong VAR2)
{
    void *VAR3, *VAR4;
    sPAPRDeviceTreeUpdateHeader VAR5 = {.VAR6 = 1};
    VAR2 -= sizeof(VAR5);
    VAR4 = FUN2(VAR2);
    FUN3((FUN4(VAR4, VAR2)));
    FUN3((FUN5(VAR4, "")));
    FUN3((FUN6(VAR4)));
    FUN3((FUN7(VAR4)));
    VAR3 = FUN2(VAR2);
    FUN3((FUN8(VAR4, VAR3, VAR2)));
    FUN9(VAR4);
    FUN3((FUN10(VAR3)));
    if (FUN11(VAR3) + sizeof(VAR5) > VAR2)
    {
        FUN12(VAR2);
        return -1;
    }
    FUN13(VAR1, &VAR5, sizeof(VAR5));
    FUN13(VAR1 + sizeof(VAR5), VAR3, FUN11(VAR3));
    FUN14(FUN11(VAR3) + sizeof(VAR5));
    FUN9(VAR3);
    return 0;
}