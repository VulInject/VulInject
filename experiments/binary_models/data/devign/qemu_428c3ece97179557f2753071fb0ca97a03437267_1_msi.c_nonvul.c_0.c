static bool FUN1(const VAR1 *VAR2, unsigned int VAR3)
{
    uint16_t VAR4 = FUN2(VAR2->VAR5 + FUN3(VAR2));
    uint32_t VAR6, VAR7;
    bool VAR8 = VAR4 & VAR9;
    assert(VAR3 < VAR10);
    if (!(VAR4 & VAR11))
    {
        return false;
    }
    VAR7 = FUN2(VAR2->VAR5 + FUN4(VAR2, VAR8));
    if (FUN5(VAR7))
    {
        return false;
    }
    VAR6 = FUN6(VAR2->VAR5 + FUN7(VAR2, VAR4 & VAR9));
    return VAR6 & (1U << VAR3);
}