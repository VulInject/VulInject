static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8 = VAR4->VAR8;
    int VAR9 = VAR4->VAR9;
    VAR10 *VAR11 = VAR4->VAR12;
    VAR13 *VAR14 = VAR2->VAR15[VAR8];
    VAR16 *VAR17 = VAR14->VAR7;
    int64_t VAR18, VAR19, VAR20, VAR21;
    int VAR22, VAR23;
    VAR18 = VAR4->VAR18;
    VAR19 = VAR4->VAR19;
    if (VAR6->VAR24)
    {
        VAR18 = (VAR18 + 2) & ((1LL << 33) - 1);
        VAR19 = (VAR19 + 2) & ((1LL << 33) - 1);
        if (VAR17->VAR25 == 0 && VAR19 == VAR18)
            VAR19 = (VAR19 - 2) & ((1LL << 33) - 1);
    }
    if (VAR6->VAR26)
    {
        VAR18 = (VAR18 + 36000 + 3600) & ((1LL << 33) - 1);
        VAR19 = (VAR19 + 36000 + 3600) & ((1LL << 33) - 1);
    }
    FUN2(VAR2, VAR8, VAR18);
    FUN3("", VAR8, VAR18 / 90000.0, VAR19 / 90000.0, VAR6->VAR27 / 90000.0);
    VAR20 = VAR17->VAR28;
    VAR21 = VAR17->VAR29;
    if (VAR17->VAR28 == VAR30)
    {
        VAR20 = VAR18;
        VAR21 = VAR19;
    }
    VAR23 = FUN4(VAR2, VAR8, VAR20, VAR21);
    if (VAR17->VAR31 >= VAR23)
    {
        FUN2(VAR2, VAR8, VAR17->VAR28);
        FUN5(VAR2, VAR8, VAR17->VAR28, VAR17->VAR29, VAR6->VAR27);
        VAR17->VAR31 = 0;
    }
    VAR17->VAR28 = VAR20;
    VAR17->VAR29 = VAR21;
    VAR17->VAR32++;
    if (VAR17->VAR33 == 0)
        VAR17->VAR33 = VAR17->VAR31;
    while (VAR9 > 0)
    {
        VAR23 = FUN4(VAR2, VAR8, VAR17->VAR28, VAR17->VAR29);
        VAR22 = VAR23 - VAR17->VAR31;
        if (VAR22 > VAR9)
            VAR22 = VAR9;
        memcpy(VAR17->VAR34 + VAR17->VAR31, VAR11, VAR22);
        VAR17->VAR31 += VAR22;
        VAR11 += VAR22;
        VAR9 -= VAR22;
        if (VAR17->VAR31 >= VAR23)
        {
            FUN2(VAR2, VAR8, VAR17->VAR28);
            FUN5(VAR2, VAR8, VAR17->VAR28, VAR17->VAR29, VAR6->VAR27);
            VAR17->VAR31 = 0;
            if (VAR6->VAR26)
            {
                int VAR35;
                while ((VAR35 = FUN6(VAR2, VAR17->VAR28)) >= VAR6->VAR36)
                    FUN7(VAR2);
            }
            VAR17->VAR28 = VAR30;
            VAR17->VAR29 = VAR30;
        }
    }
    return 0;
}