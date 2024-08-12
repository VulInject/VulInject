static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6 = &VAR2->VAR6;
    uint64_t VAR7;
    int VAR8;
    VAR7 = FUN2(VAR4, VAR9, 0);
    if (VAR7)
    {
        if ((VAR7 - 1) & VAR7)
        {
            return -VAR10;
        }
        VAR8 = FUN3(VAR7);
        if (VAR8 < 20 || VAR8 > 31)
        {
            return -VAR10;
        }
        VAR6->VAR11 = (VAR12)VAR8;
    }
    return 0;
}