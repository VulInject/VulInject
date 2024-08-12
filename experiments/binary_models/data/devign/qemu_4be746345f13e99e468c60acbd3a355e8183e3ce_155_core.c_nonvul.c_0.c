static bool FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    bool VAR4 = (VAR3 == VAR5);
    if (VAR2->VAR6 == VAR7)
    {
        FUN2(VAR2);
        FUN3(VAR2);
        return true;
    }
    if (!VAR2->VAR8)
    {
        FUN3(VAR2);
        return true;
    }
    FUN4(VAR2, VAR4);
    VAR2->VAR9 = 1;
    FUN5(VAR2);
    return false;
}