void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8 = FUN2(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7);
    if (VAR2->VAR9->VAR10.VAR11 != 0)
    {
        int VAR12 = VAR2->VAR13->VAR14;
        VAR2->VAR9->VAR8 = ((VAR8 + VAR2->VAR9->VAR10.VAR11 + 52 + 2 * VAR12) % (52 + VAR12)) - VAR12;
    }
    else
        VAR2->VAR9->VAR8 = VAR8;
}