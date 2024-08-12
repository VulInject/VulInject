static bool FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    bool VAR4 = (VAR3 == VAR5);
    int VAR6;
    if (!VAR2->VAR7 || !VAR2->VAR8)
    {
        FUN2(VAR2);
        return true;
    }
    FUN3(VAR2, VAR4);
    VAR2->VAR9 = VAR2->VAR8;
    VAR6 = FUN4(VAR2->VAR10, VAR2->VAR9);
    VAR2->VAR11 = VAR12 | VAR13;
    FUN5(VAR2, VAR2->VAR14, 512 * VAR6, VAR15);
    VAR2->VAR16 = 1;
    return false;
}