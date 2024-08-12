static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    if (VAR2->VAR8 && VAR2->VAR9 && VAR2->VAR10)
    {
        if (VAR2->VAR11 == VAR12)
        {
            FUN2(VAR2->VAR13, VAR14, ""
                                         "");
            return VAR15;
        }
        if (VAR2->VAR11 != VAR16)
        {
            VAR2->VAR8 += 6;
            VAR2->VAR17 -= 6;
        }
        FUN3(VAR4, VAR2->VAR8, VAR18);
        VAR2->VAR8 = 0;
        if (VAR2->VAR17 != FUN4(VAR4, VAR6, VAR2->VAR17))
            return VAR19;
        VAR6->VAR20 = VAR2->VAR21;
        VAR6->VAR22 = VAR2->VAR23;
        if (VAR2->VAR11 != VAR16)
            VAR2->VAR23 += (VAR2->VAR17 / VAR2->VAR9 / (VAR2->VAR10 / 8));
        else
            VAR2->VAR23 += (VAR2->VAR17 - 6 - VAR2->VAR9) / VAR2->VAR9;
        FUN2(VAR2->VAR13, VAR24, "" VAR25 "", VAR6->VAR22, VAR2->VAR23);
        VAR7 = VAR26;
    }
    else if (VAR2->VAR27)
    {
        if (FUN5(VAR6, 3 + VAR2->VAR28 + VAR2->VAR29))
            return VAR30;
        if (VAR2->VAR31)
        {
            VAR32 *VAR33;
            VAR33 = FUN6(VAR6, VAR34, VAR35);
            if (VAR33)
            {
                memcpy(VAR33, VAR2->VAR36, VAR35);
                VAR2->VAR31 = 0;
            }
        }
        if (VAR2->VAR37)
        {
            FUN7(VAR6, 0, 0, 0, VAR2->VAR38, VAR2->VAR39);
            VAR2->VAR37 = 0;
        }
        VAR6->VAR40 = VAR2->VAR27;
        FUN3(VAR4, VAR2->VAR27, VAR18);
        VAR2->VAR27 = 0;
        FUN8(VAR6->VAR41, VAR2->VAR42);
        VAR2->VAR42 = 0;
        FUN9(VAR6->VAR41 + 1, VAR2->VAR28);
        if (FUN10(VAR4, VAR6->VAR41 + 3, VAR2->VAR28) != VAR2->VAR28)
        {
            FUN11(VAR6);
            return VAR19;
        }
        FUN3(VAR4, VAR2->VAR43, VAR18);
        VAR2->VAR43 = 0;
        if (FUN10(VAR4, VAR6->VAR41 + 3 + VAR2->VAR28, VAR2->VAR29) != VAR2->VAR29)
        {
            FUN11(VAR6);
            return VAR19;
        }
        VAR6->VAR20 = VAR2->VAR44;
        VAR6->VAR22 = VAR2->VAR45;
        FUN2(VAR2->VAR13, VAR24, "" VAR25 "", VAR6->VAR22);
        VAR2->VAR45 += VAR2->VAR46;
        VAR7 = VAR26;
    }
    else
    {
        FUN3(VAR4, VAR2->VAR47, VAR18);
        VAR7 = VAR48;
    }
    return VAR7;
}