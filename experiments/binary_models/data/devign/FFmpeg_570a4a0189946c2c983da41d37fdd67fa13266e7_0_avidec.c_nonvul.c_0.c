static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR8;
    int VAR9, VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    unsigned int VAR15, VAR16, VAR17, VAR18, VAR19, VAR20 = 1;
    unsigned VAR21 = -1;
    int64_t VAR22, VAR23 = 0, VAR24 = 0;
    VAR9 = VAR3 / 16;
    if (VAR9 <= 0)
        return VAR25;
    VAR22 = FUN2(VAR8);
    FUN3(VAR8, VAR5->VAR26 + 4, VAR27);
    if (FUN4(VAR2, 1) == 0)
    {
        VAR23 = FUN2(VAR8) - 8;
    }
    VAR5->VAR28 = -1;
    FUN3(VAR8, VAR22, VAR27);
    for (VAR10 = 0; VAR10 < VAR9; VAR10++)
    {
        VAR16 = FUN5(VAR8);
        VAR17 = FUN5(VAR8);
        VAR18 = FUN5(VAR8);
        VAR19 = FUN5(VAR8);
        FUN6(VAR2, "", VAR10, VAR16, VAR17, VAR18, VAR19);
        VAR15 = ((VAR16 & 0xff) - '') * 10;
        VAR15 += ((VAR16 >> 8) & 0xff) - '';
        if (VAR15 >= VAR2->VAR29)
            continue;
        VAR12 = VAR2->VAR30[VAR15];
        VAR14 = VAR12->VAR6;
        if (VAR20 && VAR23 && VAR19)
        {
            VAR24 = VAR23 - VAR18;
            VAR20 = 0;
        }
        VAR18 += VAR24;
        FUN6(VAR2, "" VAR31 "", VAR19, VAR14->VAR32);
        if (VAR8->VAR33)
            return VAR25;
        if (VAR21 == VAR18)
            VAR5->VAR34 = 1;
        else if (VAR19 || !VAR14->VAR35)
            FUN7(VAR12, VAR18, VAR14->VAR32, VAR19, 0, (VAR17 & VAR36) ? VAR37 : 0);
        VAR14->VAR32 += FUN8(VAR14, VAR19);
        VAR21 = VAR18;
    }
    return 0;
}