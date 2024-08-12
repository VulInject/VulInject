int FUN1(target_ulong VAR1, target_ulong VAR2, int VAR3)
{
    int VAR4;
    VAR4 = FUN2(VAR1, (VAR3 == VAR5) ? 1 : VAR2, VAR3);
    if (VAR4 < 0)
    {
        return -VAR6;
    }
    VAR7--;
    VAR8[VAR4] = VAR8[VAR7];
    return 0;
}