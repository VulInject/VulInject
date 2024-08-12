static inline void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2->VAR3.VAR4);
    VAR2->VAR3.VAR5 -= FUN3(VAR6);
    if (VAR2->VAR3.VAR5 < 1)
        VAR2->VAR3.VAR5 = 1;
}