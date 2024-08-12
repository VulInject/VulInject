static void FUN1(VAR1 *VAR2, hwaddr VAR3, int *VAR4, int *VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2->VAR8);
    int VAR9, VAR10;
    drawfn VAR11 = NULL;
    if (VAR2->VAR10)
    {
        VAR11 = VAR2->VAR12[VAR2->VAR13][VAR2->VAR14];
    }
    if (!VAR11)
    {
        return;
    }
    VAR9 = (VAR2->VAR15 + 3) & ~3;
    if (VAR2->VAR14 == VAR16 || VAR2->VAR14 == VAR17)
    {
        VAR9 *= 3;
    }
    else if (VAR2->VAR14 > VAR18)
    {
        VAR9 *= 4;
    }
    else if (VAR2->VAR14 > VAR19)
    {
        VAR9 *= 2;
    }
    VAR10 = VAR2->VAR20 * VAR2->VAR10;
    *VAR4 = 0;
    if (VAR2->VAR21)
    {
        FUN3(&VAR2->VAR22, VAR2->VAR23, VAR3, VAR2->VAR20, VAR9);
    }
    FUN4(VAR7, &VAR2->VAR22, VAR2->VAR15, VAR2->VAR20, VAR9, -VAR2->VAR10, VAR10, VAR2->VAR21, VAR11, VAR2->VAR24[0].VAR25, VAR4, VAR5);
}