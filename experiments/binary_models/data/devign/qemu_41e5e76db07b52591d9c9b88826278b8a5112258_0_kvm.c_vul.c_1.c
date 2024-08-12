VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4, uint32_t VAR5, int VAR6)
{
    struct VAR7 *VAR8;
    uint32_t VAR9 = 0;
    uint32_t VAR10;
    bool VAR11 = false;
    VAR8 = FUN2(VAR3);
    struct VAR12 *VAR13 = FUN3(VAR8, VAR4, VAR5);
    if (VAR13)
    {
        VAR11 = true;
        VAR9 = FUN4(VAR13, VAR6);
        if (VAR4 == 1 && VAR6 == VAR14)
        {
            VAR9 |= VAR15 | VAR16 | VAR17 | VAR18;
        }
        else if (VAR4 == 1 && VAR6 == VAR19)
        {
            if ((VAR4 == VAR20) && !VAR11)
            {
                VAR9 = FUN5(VAR3);
                return VAR9