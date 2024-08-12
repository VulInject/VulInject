bool FUN1(VAR1 *VAR2, uint16_t VAR3)
{
    uint8_t VAR4;
    uint16_t VAR5;
    void *VAR6 = VAR2->VAR7 + (VAR3 * VAR8);
    FUN2(VAR2->VAR9);
    VAR4 = FUN3(VAR2, VAR10);
    FUN4(VAR4, !=, 0);
    VAR5 = FUN5(VAR2, VAR4 + VAR11);
    if (VAR5 & VAR12)
    {
        return true;
    }
    else
    {
        return (FUN6(VAR2, VAR6 + VAR13) & VAR14) != 0;
    }
}