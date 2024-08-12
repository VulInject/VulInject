static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    int VAR8 = 0;
    if (VAR4->VAR9 != 8)
        memcpy(VAR2->VAR10, VAR4->VAR11, 8);
    VAR2->VAR12 = (VAR2->VAR10[7] << 8) | VAR2->VAR10[6];
    VAR2->VAR13 = 0;
    VAR5 = (VAR2->VAR10[0] << 8) | VAR2->VAR10[1];
    VAR6 = (VAR2->VAR10[3] << 8) | VAR2->VAR10[2];
    VAR7 = (VAR2->VAR10[5] << 8) | VAR2->VAR10[4];
    if (VAR2->VAR10[0] & VAR14)
    {
        VAR8 = VAR2->VAR15->FUN2(VAR2, VAR5, VAR6, VAR7, VAR2->VAR12, VAR2->VAR16);
        if (VAR8 < 0)
            return VAR8;
        if (VAR8 < VAR2->VAR12)
            VAR2->VAR12 = VAR8;
        VAR2->VAR17 = VAR18;
    }
    else
    {
        if (VAR2->VAR12 == 0)
            VAR2->VAR17 = VAR19;
        else
            VAR2->VAR17 = VAR18;
        return VAR8;