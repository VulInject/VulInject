static int FUN1(VAR1 *VAR2)
{
    struct kvm_debugregs VAR3;
    int VAR4, VAR5;
    if (!FUN2())
    {
        return 0;
    }
    VAR5 = FUN3(VAR2, VAR6, &VAR3);
    if (VAR5 < 0)
    {
        return VAR5;
    }
    for (VAR4 = 0; VAR4 < 4; VAR4++)
    {
        VAR2->VAR7[VAR4] = VAR3.VAR8[VAR4];
    }
    VAR2->VAR7[4] = VAR2->VAR7[6] = VAR3.VAR9;
    VAR2->VAR7[5] = VAR2->VAR7[7] = VAR3.VAR10;
    return 0;
}