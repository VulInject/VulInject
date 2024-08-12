int FUN1(VAR1 *VAR2, uint64_t VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    uint64_t VAR8;
    int VAR9;
    if (VAR6->VAR10 < 3)
    {
        return -VAR11;
    }
    VAR8 = FUN2(VAR6, VAR4 << VAR12);
    VAR6->VAR13 = true;
    while (VAR8 > 0)
    {
        VAR9 = FUN3(VAR2, VAR3, VAR8);
        if (VAR9 < 0)
        {
            goto VAR14;
        }
        VAR8 -= VAR9;
        VAR3 += (VAR9 * VAR6->VAR15);
    }
    VAR9 = 0;
VAR14:
    VAR6->VAR13 = false;
    FUN4(VAR2, VAR9);
    return VAR9;
}