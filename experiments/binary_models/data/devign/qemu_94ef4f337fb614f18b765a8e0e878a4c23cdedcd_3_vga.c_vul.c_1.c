static void FUN1(VAR1 *VAR2, int *VAR3, int *VAR4, int *VAR5, int *VAR6)
{
    int VAR7, VAR8, VAR9, VAR10;
    VAR10 = (VAR2->VAR11[VAR12] & 0x1f) + 1;
    VAR8 = 8;
    if (!(VAR2->VAR13[VAR14] & VAR15))
    {
        VAR8 = 9;
    }
    if (VAR2->VAR13[VAR14] & 0x08)
    {
        VAR8 = 16;
    }
    VAR7 = (VAR2->VAR11[VAR16] + 1);
    if (VAR2->VAR11[VAR17] == 100)
    {
        VAR9 = 100;
    }
    else
    {
        VAR9 = VAR2->VAR11[VAR18] | ((VAR2->VAR11[VAR19] & 0x02) << 7) | ((VAR2->VAR11[VAR19] & 0x40) << 3);
        VAR9 = (VAR9 + 1) / VAR10;
    }
    *VAR3 = VAR7;
    *VAR4 = VAR9;
    *VAR5 = VAR8;
    *VAR6 = VAR10;
}