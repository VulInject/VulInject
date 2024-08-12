static int FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, VAR5 **VAR6)
{
    int VAR7;
    uint32_t VAR8;
    VMDK3Header VAR9;
    VAR10 *VAR11;
    VAR7 = FUN2(VAR3, sizeof(VAR8), &VAR9, sizeof(VAR9));
    if (VAR7 < 0)
    {
        FUN3(VAR6, -VAR7, "", VAR3->VAR12);
        return VAR7;
    }
    VAR7 = FUN4(VAR2, VAR3, false, FUN5(VAR9.VAR13), FUN5(VAR9.VAR14) << 9, 0, FUN5(VAR9.VAR15), 4096, FUN5(VAR9.VAR16), &VAR11, VAR6);
    if (VAR7 < 0)
    {
        return VAR7;
    }
    VAR7 = FUN6(VAR2, VAR11, VAR6);
    if (VAR7)
    {
        FUN7(VAR2);
    }
    return VAR7;
}