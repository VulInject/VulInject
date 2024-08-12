static int FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5, VAR6 *VAR7)
{
    int VAR8 = 0;
    int VAR9 = 0;
    uint64_t VAR10 = VAR11;
    VAR12 *VAR13;
    VAR12 *VAR14;
    if (VAR4->VAR15 == 0)
    {
        VAR9 = 1;
        VAR10 = VAR16;
    }
    VAR13 = VAR4->VAR17[VAR4->VAR15];
    VAR14 = VAR4->VAR17[VAR9];
    VAR14->VAR18 = VAR13->VAR18 + 1;
    VAR14->VAR19 = VAR4->VAR20;
    if (VAR5)
    {
        FUN2(&VAR14->VAR21);
    }
    if (VAR7)
    {
        VAR14->VAR7 = *VAR7;
    }
    VAR8 = FUN3(VAR2->VAR22, VAR14, VAR10, true);
    if (VAR8 < 0)
    {
        goto VAR23;
    }
    VAR4->VAR15 = VAR9;
VAR23:
    return VAR8;
}