int FUN1(VAR1 *VAR2, target_ulong VAR3, target_ulong VAR4, VAR5 *VAR6)
{
    void *VAR7, *VAR8;
    sPAPRDeviceTreeUpdateHeader VAR9 = {.VAR10 = 1};
    VAR4 -= sizeof(VAR9);
    VAR8 = FUN2(VAR4);
    FUN3((FUN4(VAR8, VAR4)));
    FUN3((FUN5(VAR8, "")));
    FUN3((FUN6(VAR8)));
    FUN3((FUN7(VAR8)));
    VAR7 = FUN2(VAR4);
    FUN3((FUN8(VAR8, VAR7, VAR4)));
    FUN9(VAR8);
    FUN3((FUN10(VAR7, VAR2)));
    if (FUN11(VAR2, VAR7, VAR6))
    {
        return -1;
    }
    FUN3((FUN12(VAR7)));
    if (FUN13(VAR7) + sizeof(VAR9) > VAR4)
    {
        FUN14(VAR4);
        return -1;
    }
    FUN15(VAR3, &VAR9, sizeof(VAR9));
    FUN15(VAR3 + sizeof(VAR9), VAR7, FUN13(VAR7));
    FUN16(FUN13(VAR7) + sizeof(VAR9));
    FUN9(VAR7);
    return 0;
}