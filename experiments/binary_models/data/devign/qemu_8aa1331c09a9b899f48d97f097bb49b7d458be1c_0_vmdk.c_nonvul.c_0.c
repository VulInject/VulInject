static int FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4)
{
    int VAR5;
    uint32_t VAR6;
    VMDK3Header VAR7;
    VAR8 *VAR9;
    VAR5 = FUN2(VAR3, sizeof(VAR6), &VAR7, sizeof(VAR7));
    if (VAR5 < 0)
    {
        return VAR5;
    }
    VAR5 = FUN3(VAR2, VAR2->VAR3, false, FUN4(VAR7.VAR10), FUN4(VAR7.VAR11) << 9, 0, 1 << 6, 1 << 9, FUN4(VAR7.VAR12), &VAR9);
    if (VAR5 < 0)
    {
        return VAR5;
    }
    VAR5 = FUN5(VAR2, VAR9);
    if (VAR5)
    {
        FUN6(VAR2);
    }
    return VAR5;
}