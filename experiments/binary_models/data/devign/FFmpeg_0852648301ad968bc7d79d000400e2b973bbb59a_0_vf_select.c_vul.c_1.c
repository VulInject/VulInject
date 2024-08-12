static double FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    double VAR5 = 0;
    VAR6 *VAR7 = VAR2->VAR8;
    VAR3 *VAR9 = VAR7->VAR9;
    if (VAR9 && VAR4->VAR10->VAR11 == VAR9->VAR10->VAR11 && VAR4->VAR10->VAR12 == VAR9->VAR10->VAR12 && VAR4->VAR13[0] == VAR9->VAR13[0])
    {
        int VAR14, VAR15;
        int64_t VAR16 = 0;
        double VAR17, VAR18;
        VAR19 *VAR20 = VAR4->VAR21[0];
        VAR19 *VAR22 = VAR9->VAR21[0];
        const int VAR13 = VAR4->VAR13[0];
        for (VAR15 = 0; VAR15 < VAR4->VAR10->VAR11; VAR15 += 8)
            for (VAR14 = 0; VAR14 < VAR13; VAR14 += 8)
                VAR16 += VAR7->VAR23.VAR16[1](VAR7, VAR20 + VAR15 * VAR13 + VAR14, VAR22 + VAR15 * VAR13 + VAR14, VAR13, 8);
        FUN2();
        VAR17 = VAR16 / (VAR4->VAR10->VAR11 * VAR4->VAR10->VAR12 * 3);
        VAR18 = FUN3(VAR17 - VAR7->VAR24);
        VAR5 = FUN4(FUN5(VAR17, VAR18) / 100., 0, 1);
        VAR7->VAR24 = VAR17;
        FUN6(VAR9);
    }
    VAR7->VAR9 = FUN7(VAR4, ~0);
    return VAR5;
}