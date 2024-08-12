static inline void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    target_ulong VAR6, VAR7;
    VAR8 *VAR9;
    DisasContext VAR10, *VAR11 = &VAR10;
    VAR12 *VAR13;
    int VAR14, VAR15 = -1;
    int VAR16;
    int VAR17;
    memset(VAR11, 0, sizeof(VAR18));
    VAR11->VAR2 = VAR2;
    VAR6 = VAR2->VAR19;
    VAR11->VAR19 = VAR6;
    VAR7 = VAR11->VAR19;
    VAR11->VAR20 = (VAR21)VAR2->VAR22;
    VAR11->VAR23 = VAR24;
    VAR11->VAR25 = FUN2(VAR5);
    VAR11->VAR26 = VAR5->VAR26;
    if ((VAR11->VAR26->VAR27 & VAR28))
        VAR11->VAR29 = FUN3(VAR5);
    else
        VAR11->VAR29 = 0;
    VAR11->VAR30 = VAR5->VAR31 & VAR32;
    VAR9 = VAR33 + VAR34;
    VAR35 = FUN4();
    VAR36 = FUN5();
    VAR37 = FUN6();
    VAR38 = FUN7();
    VAR39 = FUN7();
    VAR40 = FUN7();
    VAR16 = 0;
    VAR17 = VAR2->VAR41 & VAR42;
    if (VAR17 == 0)
        VAR17 = VAR42;
    FUN8();
    do
    {
        if (FUN9(!FUN10(&VAR5->VAR43)))
        {
            FUN11(VAR13, &VAR5->VAR43, VAR44)
            {
                if (VAR13->VAR19 == VAR11->VAR19)
                {
                    if (VAR11->VAR19 != VAR6)
                        FUN12(VAR11, VAR45);
                    FUN13();
                    FUN14(0);
                    VAR11->VAR46 = 1;
                    goto VAR47;
                }
            }
        }
        if (VAR3)
        {
            FUN15("");
            VAR14 = VAR48 - VAR33;
            if (VAR15 < VAR14)
            {
                VAR15++;
                while (VAR15 < VAR14)
                    VAR49[VAR15++] = 0;
                VAR50[VAR15] = VAR11->VAR19;
                VAR51[VAR15] = VAR11->VAR20;
                VAR49[VAR15] = 1;
                VAR52[VAR15] = VAR16;
            }
        }
        if (VAR16 + 1 == VAR17 && (VAR2->VAR41 & VAR53))
            FUN16();
        VAR7 = VAR11->VAR19;
        FUN17(VAR11);
        VAR16++;
        if (VAR11->VAR46)
            break;
        if (VAR11->VAR19 != (VAR7 + 4))
            break;
        if ((VAR11->VAR19 & (VAR54 - 1)) == 0)
            break;
        if (VAR5->VAR55 || VAR56)
        {
            FUN18(VAR57, VAR11->VAR19);
            FUN14(0);
            break;
        }
    } while ((VAR48 < VAR9) && (VAR11->VAR19 - VAR6) < (VAR54 - 32) && VAR16 < VAR17);
VAR47:
    FUN19(VAR40);
    FUN19(VAR39);
    FUN19(VAR38);
    FUN20(VAR37);
    FUN21(VAR36);
    FUN19(VAR35);
    if (VAR2->VAR41 & VAR53)
        FUN22();
    if (!VAR11->VAR46)
    {
        if (VAR11->VAR19 != VAR58 && (VAR11->VAR20 != VAR58 && VAR11->VAR20 != VAR59))
        {
            FUN23(VAR11, 0, VAR11->VAR19, VAR11->VAR20);
        }
        else
        {
            if (VAR11->VAR19 != VAR58)
                FUN18(VAR57, VAR11->VAR19);
            FUN24(VAR11, VAR45);
            FUN14(0);
        }
    }
    FUN25(VAR2, VAR16);
    *VAR48 = VAR60;
    if (VAR3)
    {
        VAR14 = VAR48 - VAR33;
        VAR15++;
        while (VAR15 <= VAR14)
            VAR49[VAR15++] = 0;
        FUN26();
        VAR61[0] = VAR11->VAR62[0];
        VAR61[1] = VAR11->VAR62[1];
    }
    else
    {
        VAR2->VAR63 = VAR7 + 4 - VAR6;
        VAR2->VAR64 = VAR16;
    }
    if (FUN27(VAR65))
    {
        FUN15("");
        FUN15("", FUN28(VAR6));
        FUN29(VAR6, VAR7 + 4 - VAR6, 0);
        FUN15("");
    }
}