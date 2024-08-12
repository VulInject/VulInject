int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR4;
    struct kvm_ppc_pvinfo VAR8;
    if (!FUN2(VAR2, &VAR8))
    {
        memcpy(VAR4, VAR8.VAR9, VAR5);
        return 0;
    }
    VAR7[0] = FUN3(0x08000048);
    VAR7[1] = FUN3(0x3860ffff);
    VAR7[2] = FUN3(0x48000008);
    VAR7[3] = FUN3(FUN4(0x3860ffff));
    return 0;
}