static inline int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    VAR4 = FUN2(&VAR2->VAR5, VAR2->VAR6[0][VAR3].VAR7, 9, 2);
    if (VAR4 < 0)
    {
        FUN3(VAR2->VAR8, VAR9, "", 0, VAR3, &VAR2->VAR6[0][VAR3]);
        return 0xffff;
    }
    if (VAR4)
        return FUN4(&VAR2->VAR5, VAR4);
    else
        return 0;
}