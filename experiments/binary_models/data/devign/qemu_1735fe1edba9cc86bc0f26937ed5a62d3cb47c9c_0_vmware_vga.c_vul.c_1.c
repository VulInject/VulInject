static inline void FUN1(struct VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2->VAR9.VAR10);
    int VAR11;
    int VAR12;
    int VAR13;
    int VAR14;
    VAR15 *VAR16;
    VAR15 *VAR17;
    if (VAR3 < 0)
    {
        fprintf(VAR18, "", VAR19, VAR3);
        VAR5 += VAR3;
        VAR3 = 0;
    }
    if (VAR5 < 0)
    {
        fprintf(VAR18, "", VAR19, VAR5);
        VAR5 = 0;
    }
    if (VAR3 + VAR5 > FUN3(VAR8))
    {
        fprintf(VAR18, "", VAR19, VAR3, VAR5);
        VAR3 = FUN4(VAR3, FUN3(VAR8));
        VAR5 = FUN3(VAR8) - VAR3;
    }
    if (VAR4 < 0)
    {
        fprintf(VAR18, "", VAR19, VAR4);
        VAR6 += VAR4;
        VAR4 = 0;
    }
    if (VAR6 < 0)
    {
        fprintf(VAR18, "", VAR19, VAR6);
        VAR6 = 0;
    }
    if (VAR4 + VAR6 > FUN5(VAR8))
    {
        fprintf(VAR18, "", VAR19, VAR4, VAR6);
        VAR4 = FUN4(VAR4, FUN5(VAR8));
        VAR6 = FUN5(VAR8) - VAR4;
    }
    VAR12 = FUN6(VAR8);
    VAR13 = FUN7(VAR8) * VAR5;
    VAR14 = FUN7(VAR8) * VAR3 + VAR12 * VAR4;
    VAR16 = VAR2->VAR9.VAR20 + VAR14;
    VAR17 = FUN8(VAR8) + VAR14;
    for (VAR11 = VAR6; VAR11 > 0; VAR11--, VAR16 += VAR12, VAR17 += VAR12)
    {
        memcpy(VAR17, VAR16, VAR13);
    }
    FUN9(VAR2->VAR9.VAR10, VAR3, VAR4, VAR5, VAR6);
}