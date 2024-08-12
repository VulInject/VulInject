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
    int64_t VAR22 = VAR5->VAR23;
    FUN6(VAR2, "" VAR24 "", VAR9, VAR11, VAR12, VAR13, VAR14);
    if (VAR15 >= VAR2->VAR25 || VAR15 < 0)
        return -1;
    VAR17 = VAR2->VAR26[VAR15];
    VAR19 = VAR17->VAR6;
    if (VAR10)
        return -1;
    FUN4(VAR8);
    if (VAR11 && VAR9 != 2)
        return -1;
    if (VAR11 > 1)
        return -1;
    if (VAR22 > 0 && VAR14 >= VAR22)
    {
        FUN7(VAR2, VAR27, "");
        if (VAR14 >> 32 == (VAR14 & 0xFFFFFFFF) && (VAR14 & 0xFFFFFFFF) < VAR22 && VAR22 <= 0xFFFFFFFF)
            VAR14 &= 0xFFFFFFFF;
        else
            return -1;
    }
    for (VAR20 = 0; VAR20 < VAR12; VAR20++)
    {
        if (VAR11)
        {
            int64_t VAR28 = FUN4(VAR8) + VAR14 - 8;
            int VAR29 = FUN4(VAR8);
            int VAR30 = VAR29 >= 0;
            VAR29 &= 0x7FFFFFFF;
            FUN7(VAR2, VAR27, "" VAR31 "", VAR28, VAR29);
            if (FUN8(VAR8))
                return -1;
            if (VAR21 == VAR28 || VAR28 == VAR14 - 8)
                VAR5->VAR32 = 1;
            if (VAR21 != VAR28 && (VAR29 || !VAR19->VAR33))
                FUN9(VAR17, VAR28, VAR19->VAR34, VAR29, 0, VAR30 ? VAR35 : 0);
            VAR19->VAR34 += FUN10(VAR19, VAR29);
            VAR21 = VAR28;
        }
        else
        {
            int64_t VAR36, VAR28;
            int VAR37;
            VAR36 = FUN5(VAR8);
            FUN4(VAR8);
            VAR37 = FUN4(VAR8);
            if (FUN8(VAR8))
                return -1;
            VAR28 = FUN11(VAR8);
            if (VAR5->VAR38 > VAR39)
            {
                FUN7(VAR2, VAR27, "");
                return -1;
            }
            FUN12(VAR8, VAR36 + 8, VAR40);
            VAR5->VAR38++;
            FUN1(VAR2, VAR3);
            VAR5->VAR38--;
            VAR3 += VAR37;
            FUN12(VAR8, VAR28, VAR40);
        }
    }
    VAR5->VAR41 = 1;
    return 0;
}