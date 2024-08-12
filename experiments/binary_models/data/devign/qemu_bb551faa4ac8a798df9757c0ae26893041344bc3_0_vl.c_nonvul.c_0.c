static inline void FUN1(VAR1 *VAR2, int VAR3)
{
    if (VAR3 == 0)
        VAR3 = 0x10000;
    VAR2->VAR4 = FUN2();
    VAR2->VAR5 = VAR2->VAR4;
    VAR2->VAR6 = VAR3;
    if (VAR2 == &VAR7[0] && VAR3 <= VAR8)
    {
        fprintf(VAR9, "", VAR10 / VAR8);
    }
}