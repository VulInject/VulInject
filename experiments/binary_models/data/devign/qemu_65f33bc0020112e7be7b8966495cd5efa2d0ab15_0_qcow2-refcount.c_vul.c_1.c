static VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4)
{
    VAR5 *VAR6 = VAR3->VAR7;
    uint64_t VAR8, VAR9;
    int VAR10;
    VAR9 = FUN2(VAR6, VAR4);
VAR11:
    for (VAR8 = 0; VAR8 < VAR9; VAR8++)
    {
        uint64_t VAR12 = VAR6->VAR13++;
        VAR10 = FUN3(VAR3, VAR12);
        if (VAR10 < 0)
        {
            return VAR10;
        }
        else if (VAR10 != 0)
        {
            goto VAR11;
        }
    }
    if (VAR6->VAR13 - 1 > (VAR14 >> VAR6->VAR15))
    {
        return -VAR16;
    }
    fprintf(VAR17, "" VAR18 "" VAR18 "", VAR4, (VAR6->VAR13 - VAR9) << VAR6->VAR15);
    return (VAR6->VAR13 - VAR9) << VAR6->VAR15;
}