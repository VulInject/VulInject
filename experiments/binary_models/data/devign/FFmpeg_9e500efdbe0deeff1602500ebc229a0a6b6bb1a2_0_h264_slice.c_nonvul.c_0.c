static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4 = (VAR5 && VAR2->VAR6->VAR7 & VAR8) ? VAR2->VAR6->VAR9 : 1;
    int VAR10, VAR11;
    FUN2(VAR2->VAR6, VAR2->VAR12.VAR13);
    FUN3(VAR2->VAR6->VAR14, &VAR2->VAR15, &VAR2->VAR16);
    if (VAR2->VAR12.VAR17)
    {
        int64_t VAR18 = VAR2->VAR12.VAR19;
        if (VAR2->VAR20 < 44U)
            VAR18 *= 2;
        FUN4(&VAR2->VAR6->VAR21.VAR22, &VAR2->VAR6->VAR21.VAR18, VAR2->VAR12.VAR23, VAR18, 1 << 30);
    }
    if (VAR3)
        FUN5(VAR2, 0);
    VAR2->VAR24 = 0;
    VAR2->VAR25 = 1;
    FUN6(VAR2);
    VAR11 = FUN7(VAR2);
    if (VAR11 < 0)
    {
        FUN8(VAR2->VAR6, VAR26, "");
        return VAR11;
    }
    if (VAR4 > VAR27 || (VAR4 > VAR2->VAR28 && VAR2->VAR28))
    {
        int VAR29;
        if (VAR2->VAR28)
            VAR29 = FUN9(VAR27, VAR2->VAR28);
        else
            VAR29 = VAR27;
        FUN8(VAR2->VAR6, VAR30, ""
                                         "",
               VAR4, VAR29);
        VAR4 = VAR29;
    }
    VAR2->VAR31 = VAR4;
    if (!VAR5 || !(VAR2->VAR6->VAR7 & VAR8))
    {
        VAR11 = FUN10(VAR2);
        if (VAR11 < 0)
        {
            FUN8(VAR2->VAR6, VAR26, "");
            return VAR11;
        }
    }
    else
    {
        for (VAR10 = 1; VAR10 < VAR2->VAR31; VAR10++)
        {
            VAR1 *VAR32;
            VAR32 = VAR2->VAR33[VAR10] = FUN11(sizeof(VAR1));
            if (!VAR32)
                return FUN12(VAR34);
            VAR32->VAR6 = VAR2->VAR6;
            VAR32->VAR35 = VAR2->VAR35;
            VAR32->VAR36 = VAR2->VAR36;
            VAR32->VAR37 = VAR2->VAR37;
            VAR32->VAR38 = VAR2->VAR38;
            VAR32->VAR39 = VAR2->VAR39;
            VAR32->VAR12 = VAR2->VAR12;
            VAR32->VAR40 = VAR2->VAR40;
            VAR32->VAR41 = VAR2->VAR41;
            VAR32->VAR42 = VAR2->VAR42;
            VAR32->VAR43 = VAR2->VAR43;
            VAR32->VAR44 = VAR2->VAR44;
            VAR32->VAR45 = VAR2->VAR45;
            VAR32->VAR15 = VAR2->VAR15;
            VAR32->VAR16 = VAR2->VAR16;
            VAR32->VAR46 = VAR2->VAR46;
            VAR32->VAR47 = VAR2->VAR47;
            VAR32->VAR48 = VAR2->VAR48;
            VAR32->VAR49 = VAR2->VAR49;
            VAR32->VAR50 = VAR2->VAR50;
            VAR32->VAR28 = VAR2->VAR28;
            VAR32->VAR51 = VAR2->VAR51;
            VAR32->VAR52 = VAR2->VAR52;
            VAR32->VAR53 = VAR2->VAR53;
            VAR32->VAR54 = VAR2->VAR54;
            VAR32->VAR55 = VAR2->VAR55;
            FUN6(VAR32);
            FUN13(VAR32, VAR2, VAR10);
            VAR32->VAR56 = 1;
        }
        for (VAR10 = 0; VAR10 < VAR2->VAR31; VAR10++)
            if ((VAR11 = FUN10(VAR2->VAR33[VAR10])) < 0)
            {
                FUN8(VAR2->VAR6, VAR26, "");
                return VAR11;
            }
    }
    VAR2->VAR56 = 1;
    return 0;
}