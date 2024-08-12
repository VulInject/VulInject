static inline void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4 = VAR2->VAR5 ? (1 << (VAR2->VAR5 + 4)) : 0;
    VAR2->VAR6 += ((VAR3 + 1) / 2) - ((VAR2->VAR6 + 16) >> 5);
    if (VAR2->VAR6 < VAR4)
        VAR2->VAR5--;
    else if (VAR2->VAR6 >= (1 << (VAR2->VAR5 + 5)))
        VAR2->VAR5++;
}