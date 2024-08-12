static inline void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
    VAR2->VAR5[1] = VAR4->VAR6;
    if (FUN2(VAR4) < 2)
    {
        VAR2->VAR5[2] = FUN3(VAR4->VAR7 + 8) + VAR4->VAR8;
        VAR4->VAR7 = FUN3(VAR4->VAR7) + VAR4->VAR8;
    }
    else
    {
        VAR2->VAR5[12] = VAR4->VAR7;
    }
    VAR2->VAR9 = VAR4->VAR7;
}