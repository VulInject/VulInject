static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    VAR6 = VAR8 * VAR2->VAR9[0]->VAR10->VAR11;
    VAR5 = FUN2(VAR2->VAR12, VAR4, VAR6);
    VAR4->VAR13 = 0;
    if (VAR5 < 0)
        return VAR5;
    VAR7 = FUN3(VAR2->VAR9[0]->VAR10->VAR14);
    if (!VAR7)
    {
        FUN4(VAR2, VAR15, "");
        return FUN5(VAR16);
    }
    VAR4->VAR17 = VAR4->VAR18 = VAR4->VAR19 * 8 / (VAR7 * VAR2->VAR9[0]->VAR10->VAR20);
    return VAR5;
}