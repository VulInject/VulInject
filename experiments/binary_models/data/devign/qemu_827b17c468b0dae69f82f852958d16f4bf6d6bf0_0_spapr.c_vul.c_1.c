int FUN1(VAR1 *VAR2, target_ulong VAR3, target_ulong VAR4, VAR5 *VAR6)
{
    void *VAR7, *VAR8;
    sPAPRDeviceTreeUpdateHeader VAR9 = {.VAR10 = 1};
    if (FUN2())
    {
        return 1;
        VAR4 -= sizeof(VAR9);
        VAR8 = FUN3(VAR4);
        FUN4((FUN5(VAR8, VAR4)));
        FUN4((FUN6(VAR8, "")));
        FUN4((FUN7(VAR8)));
        FUN4((FUN8(VAR8)));
        VAR7 = FUN3(VAR4);
        FUN4((FUN9(VAR8, VAR7, VAR4)));
        FUN10(VAR8);
        FUN4((FUN11(VAR7, VAR2)));
        if (FUN12(VAR2, VAR7, VAR6))
        {
            return -1;
            FUN4((FUN13(VAR7)));
            if (FUN14(VAR7) + sizeof(VAR9) > VAR4)
            {
                FUN15(VAR4);
                return -1;
                FUN16(VAR3, &VAR9, sizeof(VAR9));
                FUN16(VAR3 + sizeof(VAR9), VAR7, FUN14(VAR7));
                FUN17(FUN14(VAR7) + sizeof(VAR9));
                FUN10(VAR7);
                return 0