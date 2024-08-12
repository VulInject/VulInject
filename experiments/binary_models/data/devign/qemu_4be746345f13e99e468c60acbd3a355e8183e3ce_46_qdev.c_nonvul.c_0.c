int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR6 *VAR8)
{
    VAR9 *VAR10 = &FUN2(VAR11, VAR12, VAR2)->VAR13[VAR3];
    if (VAR10->VAR14 != VAR15 || !VAR10->VAR16)
    {
        return -1;
    }
    *VAR5 = VAR10->VAR17;
    *VAR7 = VAR10->VAR7;
    *VAR8 = VAR10->VAR18;
    return 0;
}