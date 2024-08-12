int FUN1(VAR1 *VAR2, target_ulong VAR3, target_ulong VAR4, bool VAR5)
{
    void *VAR6, *VAR7;
    sPAPRDeviceTreeUpdateHeader VAR8 = {.VAR9 = 1};
    VAR10 *VAR11 = FUN2(FUN3());
    VAR4 -= sizeof(VAR8);
    VAR7 = FUN4(VAR4);
    FUN5((FUN6(VAR7, VAR4)));
    FUN5((FUN7(VAR7, "")));
    FUN5((FUN8(VAR7)));
    FUN5((FUN9(VAR7)));
    VAR6 = FUN4(VAR4);
    FUN5((FUN10(VAR7, VAR6, VAR4)));
    FUN11(VAR7);
    if (VAR5)
    {
        FUN5((FUN12(VAR6, VAR2)));
    }
    if (FUN13(VAR2->VAR12, VAR13))
    {
        FUN14(VAR11->VAR14);
        FUN5((FUN15(VAR2, VAR6)));
    }
    FUN5((FUN16(VAR6)));
    if (FUN17(VAR6) + sizeof(VAR8) > VAR4)
    {
        FUN18(VAR4);
        return -1;
    }
    FUN19(VAR3, &VAR8, sizeof(VAR8));
    FUN19(VAR3 + sizeof(VAR8), VAR6, FUN17(VAR6));
    FUN20(FUN17(VAR6) + sizeof(VAR8));
    FUN11(VAR6);
    return 0;
}