FUN1(VAR1 *VAR2, VAR3 *VAR4, struct VAR5 *VAR6, const VAR7 *VAR8, uint16_t VAR9)
{
    union VAR10 *VAR11 = (union VAR10 *)VAR4;
    memset(VAR11, 0, sizeof(*VAR11));
    VAR11->VAR12.VAR13.VAR9 = FUN2(VAR9);
    FUN3(VAR2, VAR6, VAR6 != NULL, VAR8, &VAR11->VAR12.VAR14.VAR15.VAR16, &VAR11->VAR12.VAR14.VAR17, &VAR11->VAR12.VAR13.VAR18, &VAR11->VAR12.VAR14.VAR15.VAR19.VAR20, &VAR11->VAR12.VAR13.VAR21);
}