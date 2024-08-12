int FUN1(VAR1 *VAR2, int32_t VAR3, uint32_t VAR4, int32_t VAR5, uint32_t VAR6)
{
    VAR7 *VAR8;
    if (VAR3 == VAR9 && VAR5 == VAR9)
        return 0;
    VAR8 = (VAR7 *)FUN2(VAR2, VAR10, sizeof(*VAR8));
    if (!VAR8)
        return FUN3(VAR11);
    VAR8->VAR12 = VAR3;
    VAR8->VAR13 = VAR4;
    VAR8->VAR14 = VAR5;
    VAR8->VAR15 = VAR6;
    return 0;
}