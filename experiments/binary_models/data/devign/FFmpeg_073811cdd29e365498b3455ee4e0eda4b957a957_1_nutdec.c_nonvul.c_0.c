static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR7->VAR11;
    int64_t VAR12, VAR13;
    AVRational VAR14;
    VAR2->VAR15 = FUN2(VAR10) - 8;
    VAR12 = FUN3(VAR2, VAR10, 1, VAR16);
    VAR12 += FUN2(VAR10);
    VAR13 = FUN4(VAR10);
    *VAR5 = VAR2->VAR15 - 16 * FUN4(VAR10);
    if (*VAR5 < 0)
        return -1;
    FUN5(VAR2, VAR2->VAR14[VAR13 % VAR2->VAR17], VAR13);
    if (FUN6(VAR10, VAR12) || FUN7(VAR10))
    {
        FUN8(VAR7, VAR18, "");
        return -1;
    }
    *VAR4 = VAR13 / VAR7->VAR19 * FUN9(VAR2->VAR14[VAR13 % VAR7->VAR19]) * VAR20;
    FUN10(VAR2, VAR2->VAR15, *VAR5, *VAR4);
    return 0;
}