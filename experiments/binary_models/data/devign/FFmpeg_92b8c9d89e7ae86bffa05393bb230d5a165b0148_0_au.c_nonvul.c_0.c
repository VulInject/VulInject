static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    int VAR6 = FUN2(VAR2->VAR7[0]->VAR8->VAR9);
    if (!VAR6)
        return FUN3(VAR10);
    VAR5 = FUN4(VAR2->VAR11, VAR4, VAR12 * VAR2->VAR7[0]->VAR8->VAR13 * VAR6 >> 3);
    if (VAR5 < 0)
        return VAR5;
    VAR4->VAR14 &= ~VAR15;
    VAR4->VAR16 = 0;
    return 0;
}