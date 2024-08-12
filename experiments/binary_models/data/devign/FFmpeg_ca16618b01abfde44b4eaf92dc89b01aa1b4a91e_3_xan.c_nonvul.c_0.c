static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR4->VAR2 = VAR2;
    VAR4->VAR6 = 0;
    if ((VAR2->VAR7->VAR8 == VAR9) && (VAR4->VAR2->VAR10 == NULL))
    {
        FUN2(VAR2, VAR11, "");
        return -1;
    }
    VAR2->VAR12 = VAR13;
    VAR2->VAR14 = 0;
    if (FUN3(VAR2, VAR2->VAR15, VAR2->VAR16))
        return -1;
    VAR4->VAR17 = VAR2->VAR15 * VAR2->VAR16;
    VAR4->VAR18 = FUN4(VAR4->VAR17);
    VAR4->VAR19 = VAR2->VAR15 * VAR2->VAR16;
    VAR4->VAR20 = FUN4(VAR4->VAR19);
    if (!VAR4->VAR18 || !VAR4->VAR20)
        return -1;
    return 0;
}