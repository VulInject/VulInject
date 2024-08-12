static int FUN1(VAR1 *VAR2)
{
    struct kvm_fpu VAR3;
    int VAR4, VAR5;
    VAR5 = FUN2(VAR2, VAR6, &VAR3);
    if (VAR5 < 0)
    {
        return VAR5;
    }
    VAR2->VAR7 = (VAR3.VAR8 >> 11) & 7;
    VAR2->VAR9 = VAR3.VAR8;
    VAR2->VAR10 = VAR3.VAR11;
    for (VAR4 = 0; VAR4 < 8; ++VAR4)
    {
        VAR2->VAR12[VAR4] = !((VAR3.VAR13 >> VAR4) & 1);
    }
    memcpy(VAR2->VAR14, VAR3.VAR15, sizeof VAR2->VAR14);
    memcpy(VAR2->VAR16, VAR3.VAR17, sizeof VAR2->VAR16);
    VAR2->VAR18 = VAR3.VAR18;
    return 0;
}