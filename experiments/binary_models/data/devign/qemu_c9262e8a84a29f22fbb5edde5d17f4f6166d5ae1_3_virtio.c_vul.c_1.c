unsigned long FUN1(ulong VAR1, ulong VAR2, ulong VAR3, void *VAR4)
{
    u8 VAR5;
    int VAR6 = VAR1;
    int VAR7 = ((VAR2 >> 32) & 0xffff) + 1;
    int VAR8 = VAR2 >> 48;
    ulong VAR9 = (VAR10)VAR4;
    if (VAR8 != FUN2())
    {
        return -1;
    }
    FUN3("");
    VAR5 = FUN4(VAR6, (void *)VAR9, VAR7);
    if (VAR5)
    {
        FUN5("");
    }
    VAR9 += VAR7 * FUN2();
    return VAR9;
}