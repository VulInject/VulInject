static int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    uint64_t VAR7;
    int VAR8;
    if (!FUN2(VAR3, VAR5->VAR9.VAR10, VAR5->VAR9.VAR11))
    {
        return -VAR12;
    }
    if ((VAR13)VAR3 < VAR5->VAR9.VAR14)
    {
        return -VAR15;
    }
    VAR7 = VAR5->VAR9.VAR14;
    VAR5->VAR9.VAR14 = VAR3;
    VAR8 = FUN3(VAR5);
    if (VAR8 < 0)
    {
        VAR5->VAR9.VAR14 = VAR7;
    }
    return VAR8;
}