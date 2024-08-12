FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2, sizeof *VAR7);
    unsigned VAR8 = sizeof(VAR7->VAR9);
    unsigned VAR10 = (char *)&VAR7->VAR9 - VAR2->VAR11;
    FUN3(VAR4, VAR12, VAR2, 16, true);
    memcpy(&VAR7->VAR13, "", sizeof(VAR7->VAR13));
    memcpy(VAR7->VAR14, VAR15, sizeof(VAR7->VAR14));
    VAR7->VAR16 = FUN4(sizeof(*VAR7));
    VAR7->VAR17 = 0x02;
    FUN5(VAR4, VAR12, VAR10, VAR8, VAR18, VAR5);
    FUN6(VAR4, VAR12, (char *)VAR7 - VAR2->VAR11, sizeof *VAR7, (char *)&VAR7->VAR19 - VAR2->VAR11);
    return VAR2;
}