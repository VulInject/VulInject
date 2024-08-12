FUN1(VAR1 *VAR2, VAR3 *VAR4, struct VAR5 *VAR6, const VAR7 *VAR8, uint16_t VAR9)
{
    uint32_t VAR10, VAR11, VAR12;
    uint16_t VAR13;
    struct VAR14 *VAR15 = (struct VAR14 *)VAR4;
    memset(VAR15, 0, sizeof(*VAR15));
    assert(!VAR8->VAR16);
    VAR15->VAR9 = FUN2(VAR9);
    FUN3(VAR2, VAR6, VAR6 != NULL, VAR8, &VAR11, &VAR12, &VAR10, &VAR13, &VAR15->VAR17);
    VAR15->VAR18 = (VAR3)(FUN4(VAR10) >> 24);
    VAR15->VAR19 = (VAR3)FUN4(VAR10);
}