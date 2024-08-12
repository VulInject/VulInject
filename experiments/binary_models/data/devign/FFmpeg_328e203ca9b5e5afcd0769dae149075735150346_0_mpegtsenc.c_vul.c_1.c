static int FUN1(void *VAR1, VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    if (VAR6->VAR7 + VAR4 > VAR6->VAR8)
        return FUN2(VAR9);
    memcpy(VAR6->VAR10 + VAR6->VAR7, VAR3, VAR4);
    VAR6->VAR7 += VAR4;
    return 0;
}