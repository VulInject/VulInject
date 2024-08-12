static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11 = VAR2->VAR12[VAR4->VAR13];
    int64_t VAR14 = FUN2(VAR9);
    int VAR15 = 0;
    int VAR16 = FUN2(VAR9) / 1024;
    int VAR17;
    FUN3(VAR9, VAR18);
    if (VAR11->VAR19->VAR20 == VAR21 && VAR4->VAR22 % 4)
        VAR15 = 4 - VAR4->VAR22 % 4;
    else if (VAR11->VAR19->VAR23 == VAR24)
        VAR15 = VAR25 - VAR4->VAR22;
    FUN4(VAR2, VAR4, VAR4->VAR22 + VAR15);
    FUN5(VAR9, VAR4->VAR26, VAR4->VAR22);
    FUN6(VAR9, VAR15);
    if (VAR11->VAR19->VAR23 == VAR27)
    {
        if (!(VAR6->VAR28 % 500))
        {
            int VAR29;
            if ((VAR29 = FUN7(&VAR6->VAR30, VAR6->VAR28 + 500, sizeof(*VAR6->VAR30))) < 0)
            {
                VAR6->VAR28 = 0;
                FUN8(VAR2, VAR31, "");
                return VAR29;
            }
        }
        VAR6->VAR30[VAR6->VAR28++] = VAR16;
        VAR6->VAR32 += 2;
    }
    FUN9(VAR9, VAR14);
    VAR6->VAR33++;
    if (VAR6->VAR33 == 100)
    {
        if ((VAR17 = FUN10(VAR2, 0)) < 0)
            return VAR17;
        VAR6->VAR33 = 0;
    }
    return 0;
}