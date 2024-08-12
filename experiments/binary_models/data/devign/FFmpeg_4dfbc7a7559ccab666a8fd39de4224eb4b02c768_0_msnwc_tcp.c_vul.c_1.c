static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    uint16_t VAR7;
    uint32_t VAR8, VAR9;
    FUN2(VAR6, 1);
    FUN2(VAR6, 2);
    FUN2(VAR6, 2);
    VAR7 = FUN3(VAR6);
    VAR8 = FUN4(VAR6);
    FUN2(VAR6, 4);
    FUN2(VAR6, 4);
    VAR9 = FUN4(VAR6);
    if (!VAR8 || FUN5(VAR6, VAR4, VAR8) != VAR8)
        return -1;
    FUN2(VAR6, 1);
    VAR4->VAR10 = VAR9;
    VAR4->VAR11 = VAR9;
    VAR4->VAR12 = 0;
    if (VAR7 & 1)
        VAR4->VAR13 |= VAR14;
    return VAR15 + VAR8;
}