void FUN1(struct VAR1 *VAR2)
{
    uint16_t VAR3;
    uint32_t VAR4, VAR5;
    assert(VAR2);
    uint8_t VAR6 = VAR2->VAR7.VAR6 & ~VAR8;
    void *VAR9 = VAR2->VAR10[VAR11].VAR12;
    if (VAR2->VAR13 + VAR2->VAR10[VAR11].VAR14 > VAR15)
    {
        return;
    }
    if (VAR6 == VAR16 || VAR6 == VAR17)
    {
        FUN2(VAR2);
        VAR4 = FUN3(VAR9, VAR2->VAR13, &VAR5);
        VAR3 = FUN4(~FUN5(VAR4));
    }
    else if (VAR6 == VAR18)
    {
        VAR4 = FUN6(VAR9, VAR2->VAR13, VAR19, &VAR5);
        VAR3 = FUN4(~FUN5(VAR4));
    }
    else
    {
        return;
    }
    FUN7(&VAR2->VAR10[VAR20], VAR2->VAR21, VAR2->VAR7.VAR22, &VAR3, sizeof(VAR3));
}