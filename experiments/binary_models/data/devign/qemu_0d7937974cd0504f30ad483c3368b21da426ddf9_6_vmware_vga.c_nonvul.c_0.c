static inline void FUN1(struct VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7;
    int VAR8;
    int VAR9;
    int VAR10;
    VAR11 *VAR12;
    VAR11 *VAR13;
    if (VAR3 + VAR5 > VAR2->VAR9)
    {
        fprintf(VAR14, "", VAR15, VAR3, VAR5);
        VAR3 = FUN2(VAR3, VAR2->VAR9);
        VAR5 = VAR2->VAR9 - VAR3;
    }
    if (VAR4 + VAR6 > VAR2->VAR16)
    {
        fprintf(VAR14, "", VAR15, VAR4, VAR6);
        VAR4 = FUN2(VAR4, VAR2->VAR16);
        VAR6 = VAR2->VAR16 - VAR4;
    }
    VAR8 = VAR2->VAR17 * VAR2->VAR9;
    VAR9 = VAR2->VAR17 * VAR5;
    VAR10 = VAR2->VAR17 * VAR3 + VAR8 * VAR4;
    VAR12 = VAR2->VAR18.VAR19 + VAR10;
    VAR13 = FUN3(VAR2->VAR18.VAR20) + VAR10;
    for (VAR7 = VAR6; VAR7 > 0; VAR7--, VAR12 += VAR8, VAR13 += VAR8)
    {
        memcpy(VAR13, VAR12, VAR9);
    }
    FUN4(VAR2->VAR18.VAR20, VAR3, VAR4, VAR5, VAR6);
}