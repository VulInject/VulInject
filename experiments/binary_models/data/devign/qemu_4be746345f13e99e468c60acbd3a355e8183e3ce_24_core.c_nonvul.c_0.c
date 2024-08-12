static bool FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    bool VAR4 = (VAR3 == VAR5);
    if (!VAR2->VAR6)
    {
        FUN2(VAR2);
        return true;
    }
    FUN3(VAR2, VAR4);
    FUN4(VAR2, VAR7);
    VAR2->VAR8 = 1;
    return false;
}