static int FUN1(VAR1 *VAR2)
{
    struct kvm_fpu VAR3;
    int VAR4;
    memset(&VAR3, 0, sizeof VAR3);
    VAR3.VAR5 = VAR2->VAR6 & ~(7 << 11);
    VAR3.VAR5 |= (VAR2->VAR7 & 7) << 11;
    VAR3.VAR8 = VAR2->VAR9;
    for (VAR4 = 0; VAR4 < 8; ++VAR4)
    {
        VAR3.VAR10 |= (!VAR2->VAR11[VAR4]) << VAR4;
    }
    memcpy(VAR3.VAR12, VAR2->VAR13, sizeof VAR2->VAR13);
    memcpy(VAR3.VAR14, VAR2->VAR15, sizeof VAR2->VAR15);
    VAR3.VAR16 = VAR2->VAR16;
    return FUN2(VAR2, VAR17, &VAR3);
}