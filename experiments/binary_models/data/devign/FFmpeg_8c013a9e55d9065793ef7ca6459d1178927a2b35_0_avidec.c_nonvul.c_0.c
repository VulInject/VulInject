static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6)
{
    VAR7 *VAR8 = VAR2->VAR8;
    char VAR9[5] = {0};
    char *VAR10;
    VAR6 += (VAR6 & 1);
    if (VAR6 == VAR11)
        return FUN2(VAR12);
    VAR10 = FUN3(VAR6 + 1);
    if (!VAR10)
        return FUN2(VAR13);
    if (FUN4(VAR8, VAR10, VAR6) != VAR6)
        return VAR14;
    VAR10[VAR6] = 0;
    FUN5(VAR9, VAR5);
    return FUN6(VAR4 ? &VAR4->VAR15 : &VAR2->VAR15, VAR9, VAR10, VAR16);
}