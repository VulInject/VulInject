static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    if (VAR4->VAR8.VAR9 != 8)
    {
        VAR4->VAR10 = VAR11;
        return;
    }
    FUN2(VAR4, VAR2->VAR12, VAR4->VAR8.VAR9);
    VAR2->VAR13 = 0;
    VAR4->VAR14 = 0;
    VAR2->VAR15 = (VAR2->VAR12[7] << 8) | VAR2->VAR12[6];
    if (VAR2->VAR15 > sizeof(VAR2->VAR16))
    {
        fprintf(VAR17, "", VAR2->VAR15, sizeof(VAR2->VAR16));
        VAR4->VAR10 = VAR11;
        return;
    }
    VAR5 = (VAR2->VAR12[0] << 8) | VAR2->VAR12[1];
    VAR6 = (VAR2->VAR12[3] << 8) | VAR2->VAR12[2];
    VAR7 = (VAR2->VAR12[5] << 8) | VAR2->VAR12[4];
    if (VAR2->VAR12[0] & VAR18)
    {
        FUN3(VAR2, VAR4, VAR5, VAR6, VAR7, VAR2->VAR15, VAR2->VAR16);
        if (VAR4->VAR10 == VAR19)
        {
            VAR2->VAR20 = VAR21;
        }
        if (VAR4->VAR10 != VAR22)
        {
            return;
        }
        if (VAR4->VAR14 < VAR2->VAR15)
        {
            VAR2->VAR15 = VAR4->VAR14;
        }
        VAR2->VAR20 = VAR23;
    }
    else
    {
        if (VAR2->VAR15 == 0)
            VAR2->VAR20 = VAR24;
        else
            VAR2->VAR20 = VAR23;
    }
    VAR4->VAR14 = 8;
}