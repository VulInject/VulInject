static void FUN1(struct VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    struct VAR6 *VAR7 = FUN2(VAR2);
    uint16_t VAR8;
    int VAR9, VAR10;
    struct VAR11 *VAR12;
    if (VAR5 < VAR13)
    {
        fprintf(VAR14, "", VAR15, VAR5);
        return;
    }
    VAR8 = FUN3((VAR4[1] << 8) | VAR4[0]);
    VAR10 = FUN4((VAR4[1] << 8) | VAR4[0]);
    VAR9 = (VAR4[3] << 8) | VAR4[2];
    VAR4 += VAR13;
    VAR5 -= VAR13;
    if (FUN5(VAR7, VAR8))
    {
        fprintf(VAR14, "", VAR15, VAR8);
        return;
    }
    VAR8 &= ~VAR16;
    if (VAR9 > VAR5)
    {
        fprintf(VAR14, "", VAR15, VAR5, VAR9);
        return;
    }
    VAR12 = VAR7->VAR17.VAR8[VAR8].VAR12;
    if ((VAR10 & ~3) == VAR18)
    {
        if (!VAR7->VAR19)
            VAR7->VAR19 = VAR8;
        else if (VAR8 != VAR7->VAR19)
        {
            fprintf(VAR14, "", VAR15, VAR8);
            return;
        }
    }
    if ((VAR10 & ~3) == VAR20)
    {
        if (!VAR7->VAR21)
            VAR7->VAR21 = VAR8;
        else if (VAR8 != VAR7->VAR21)
        {
            fprintf(VAR14, "", VAR15, VAR8);
            return;
        }
    }
    FUN6(VAR7, VAR8 | VAR16, 1);
    VAR7->VAR17.VAR8[VAR8].FUN7(VAR12, VAR4, (VAR10 & 3) == VAR22, VAR5);
}