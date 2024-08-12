static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR8;
    int VAR9 = FUN2(VAR8);
    int VAR10 = FUN3(VAR8);
    int VAR11 = FUN3(VAR8);
    int VAR12 = FUN4(VAR8);
    int VAR13 = FUN4(VAR8);
    int64_t VAR14 = FUN5(VAR8);
    int VAR15 = 10 * ((VAR13 & 0xFF) - '') + (((VAR13 >> 8) & 0xFF) - '');
    VAR16 *VAR17;
    VAR18 *VAR19;
    int VAR20;
    int64_t VAR21 = -1;
    int64_t VAR22 = FUN6(VAR2->VAR8);
    FUN7(VAR2, "" VAR23 "", VAR9, VAR11, VAR12, VAR13, VAR14);
    if (VAR15 >= VAR2->VAR24 || VAR15 < 0)
        return VAR25;
    VAR17 = VAR2->VAR26[VAR15];
    VAR19 = VAR17->VAR6;
    if (VAR10)
        return VAR25;
    FUN4(VAR8);
    if (VAR11 && VAR9 != 2)
        return VAR25;
    if (VAR11 > 1)
        return VAR25;
    if (VAR22 > 0 && VAR14 >= VAR22)
    {
        FUN8(VAR2, VAR27, "");
        if (VAR14 >> 32 == (VAR14 & 0xFFFFFFFF) && (VAR14 & 0xFFFFFFFF) < VAR22 && VAR22 <= 0xFFFFFFFF)
            VAR14 &= 0xFFFFFFFF;
        else
            return VAR25;
    }
    for (VAR20 = 0; VAR20 < VAR12; VAR20++)
    {
        if (VAR11)
        {
            int64_t VAR28 = FUN4(VAR8) + VAR14 - 8;
            int VAR29 = FUN4(VAR8);
            int VAR30 = VAR29 >= 0;
            VAR29 &= 0x7FFFFFFF;
            FUN7(VAR2, "" VAR31 "", VAR28, VAR29);
            if (VAR8->VAR32)
                return VAR25;
            if (VAR21 == VAR28 || VAR28 == VAR14 - 8)
                VAR5->VAR33 = 1;
            if (VAR21 != VAR28 && (VAR29 || !VAR19->VAR34))
                FUN9(VAR17, VAR28, VAR19->VAR35, VAR29, 0, VAR30 ? VAR36 : 0);
            VAR19->VAR35 += FUN10(VAR19, VAR29);
            VAR21 = VAR28;
        }
        else
        {
            int64_t VAR37, VAR28;
            int VAR38;
            VAR37 = FUN5(VAR8);
            FUN4(VAR8);
            VAR38 = FUN4(VAR8);
            if (VAR8->VAR32)
                return VAR25;
            VAR28 = FUN11(VAR8);
            if (VAR5->VAR39 > VAR40)
            {
                FUN8(VAR2, VAR27, "");
                return VAR25;
            }
            FUN12(VAR8, VAR37 + 8, VAR41);
            VAR5->VAR39++;
            FUN1(VAR2, VAR3);
            VAR5->VAR39--;
            VAR3 += VAR38;
            FUN12(VAR8, VAR28, VAR41);
        }
    }
    VAR5->VAR42 = 1;
    return 0;
}