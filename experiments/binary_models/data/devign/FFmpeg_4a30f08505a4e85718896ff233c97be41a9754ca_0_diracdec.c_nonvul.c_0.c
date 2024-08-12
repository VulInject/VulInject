static int FUN1(VAR1 *VAR2)
{
    int VAR3 = FUN2(VAR2->VAR4.VAR5, 4);
    int VAR6 = FUN2(VAR2->VAR4.VAR7, 4);
    int VAR8, VAR9, VAR10, VAR11;
    for (VAR8 = 0; VAR8 < 3; VAR8++)
    {
        int VAR12 = VAR13 >> (VAR8 ? VAR2->VAR14 : 0);
        int VAR15 = VAR13 >> (VAR8 ? VAR2->VAR16 : 0);
        VAR9 = VAR2->VAR4.VAR5 >> (VAR8 ? VAR2->VAR14 : 0);
        VAR10 = VAR2->VAR4.VAR7 >> (VAR8 ? VAR2->VAR16 : 0);
        VAR11 = FUN3(1 << VAR17, VAR15 / 2);
        VAR9 = FUN4(FUN5(VAR9, VAR17), 8);
        VAR10 = VAR11 + FUN5(VAR10, VAR17) + VAR15 / 2;
        VAR2->VAR18[VAR8].VAR19 = FUN6((VAR9 + VAR12), VAR10 * sizeof(VAR20));
        VAR2->VAR18[VAR8].VAR21 = FUN7((VAR9 + 16), sizeof(VAR20));
        VAR2->VAR18[VAR8].VAR22 = VAR2->VAR18[VAR8].VAR19 + VAR11 * VAR9;
        if (!VAR2->VAR18[VAR8].VAR19 || !VAR2->VAR18[VAR8].VAR21)
            return FUN8(VAR23);
    }
    VAR2->VAR24 = FUN7(VAR3, VAR6);
    VAR2->VAR25 = FUN7(VAR3, VAR6 * 16 * sizeof(*VAR2->VAR25));
    if (!VAR2->VAR24 || !VAR2->VAR25)
        return FUN8(VAR23);
    return 0;
}