static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    const int VAR6 = VAR4->VAR7;
    const int VAR8 = VAR6 > 8;
    VAR2->VAR9 = VAR10;
    if (!VAR8)
    {
        VAR2->VAR11[0][1] = VAR12;
        VAR2->VAR11[0][2] = VAR13;
        VAR2->VAR14[0][0] = VAR15;
        VAR2->VAR14[0][1] = VAR16;
        VAR2->VAR14[0][2] = VAR17;
        VAR2->VAR11[1][1] = VAR18;
        VAR2->VAR11[1][2] = VAR19;
        VAR2->VAR14[1][0] = VAR20;
        VAR2->VAR14[1][1] = VAR21;
        VAR2->VAR14[1][2] = VAR22;
    }
    if (!(VAR4->VAR23 & VAR24))
    {
        if (!VAR8)
        {
            VAR2->VAR25[0][1] = VAR26;
            VAR2->VAR25[0][2] = VAR27;
            VAR2->VAR25[1][1] = VAR28;
            VAR2->VAR25[1][2] = VAR29;
            VAR2->VAR14[0][3] = VAR30;
            VAR2->VAR14[1][3] = VAR31;
        }
    }
    if (VAR32 && (VAR4->VAR33 == VAR34 || VAR4->VAR33 == VAR35))
    {
        VAR2->VAR25[1][1] = VAR36;
        VAR2->VAR25[1][2] = VAR37;
    }
    if (VAR38)
    {
        FUN2(VAR39, 0, 16, VAR40, );
        FUN2(VAR39, 1, 8, VAR40, );
        FUN2(VAR41, 0, 16, VAR40, );
        FUN2(VAR41, 1, 8, VAR40, );
        FUN2(VAR42, 0, 16, VAR40, );
        FUN2(VAR42, 1, 8, VAR40, );
        if (!VAR8)
        {
            FUN2(VAR43, 0, 16, VAR40, );
            FUN2(VAR43, 1, 8, VAR40, );
            FUN2(VAR43, 2, 4, VAR40, );
            FUN2(VAR44, 0, 16, VAR40, );
            FUN2(VAR44, 1, 8, VAR40, );
            FUN2(VAR44, 2, 4, VAR40, );
        }
        else if (VAR6 == 10)
        {
            FUN2(VAR44, 0, 16, 10_mmxext, VAR45);
            FUN2(VAR43, 0, 16, 10_mmxext, VAR45);
            FUN2(VAR43, 1, 8, 10_mmxext, VAR45);
            FUN2(VAR44, 1, 8, 10_mmxext, VAR45);
            FUN2(VAR43, 2, 4, 10_mmxext, VAR45);
            FUN2(VAR44, 2, 4, 10_mmxext, VAR45);
        }
        FUN2(VAR46, 0, 16, VAR40, );
        FUN2(VAR46, 1, 8, VAR40, );
        FUN2(VAR47, 0, 16, VAR40, );
        FUN2(VAR47, 1, 8, VAR40, );
    }
    if (!VAR8 && VAR48)
    {
        VAR2->VAR49[0] = VAR50;
        VAR2->VAR49[1] = VAR51;
        VAR2->VAR49[2] = VAR52;
        VAR2->VAR53[2] = VAR54;
    }
    if (VAR6 == 10 && VAR48)
    {
        VAR2->VAR53[2] = VAR55;
        VAR2->VAR49[2] = VAR56;
        VAR2->VAR53[1] = VAR57;
        VAR2->VAR49[1] = VAR58;
    }
    VAR2->VAR59 = VAR60;
    VAR2->VAR61 = VAR62;
    VAR2->VAR63 = VAR64;
    if (VAR4->VAR23 & VAR24)
    {
        VAR2->VAR65 = VAR66;
    }
    else
    {
        VAR2->VAR65 = VAR67;
    }
}