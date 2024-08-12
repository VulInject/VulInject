static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    if (VAR5 < 32)
    {
        target_ulong VAR6 = (VAR7)VAR2->VAR8[VAR5];
        target_ulong VAR9 = (VAR10)FUN2(VAR4) << 32;
        VAR2->VAR8[VAR5] = VAR6 | VAR9;
        VAR2->VAR11[VAR5] = FUN2(VAR4);
        return 4;
    }
    if (VAR5 == 33)
    {
        VAR2->VAR12 = FUN3(VAR4);
        return 8;
    }
    if (VAR5 == 34)
    {
        return 4;
    }
    return 0;
}