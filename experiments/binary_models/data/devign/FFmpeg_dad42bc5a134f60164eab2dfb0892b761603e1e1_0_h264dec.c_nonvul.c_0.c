static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR3 *VAR7 = VAR6->VAR8;
    int VAR9;
    if (VAR7->VAR10 == VAR11 && VAR7->VAR12[0]->VAR13 == 1)
        return VAR14;
    VAR9 = FUN2(VAR4, VAR7);
    if (VAR9 < 0)
        return VAR9;
    FUN3(&VAR4->VAR15, "", FUN4(&VAR2->VAR16.VAR17), 0);
    if (VAR6->VAR18 == 0)
        VAR4->VAR19 = 1;
    return 0;
}