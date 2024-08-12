int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR4;
    struct kvm_ppc_pvinfo VAR8;
    if (!FUN2(VAR2, &VAR8))
    {
        memcpy(VAR4, VAR8.VAR9, VAR5);
        return 0;
    }
    VAR7[0] = 0x3860ffff;
    VAR7[1] = 0x60000000;
    VAR7[2] = 0x60000000;
    VAR7[3] = 0x60000000;
    return 0;
}