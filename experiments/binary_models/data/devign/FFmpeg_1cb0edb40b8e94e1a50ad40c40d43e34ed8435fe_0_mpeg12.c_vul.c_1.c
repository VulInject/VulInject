static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    int VAR5, VAR6, VAR7;
    int VAR8, VAR9;
    FUN2(&VAR2->VAR10, 8);
    FUN2(&VAR2->VAR10, 1);
    FUN2(&VAR2->VAR10, 2);
    VAR3 = FUN3(&VAR2->VAR10, 2);
    VAR4 = FUN3(&VAR2->VAR10, 2);
    VAR2->VAR11 |= (VAR3 << 12);
    VAR2->VAR12 |= (VAR4 << 12);
    VAR5 = FUN3(&VAR2->VAR10, 12);
    VAR2->VAR13 = ((VAR2->VAR13 / 400) | (VAR5 << 12)) * 400;
    FUN4(&VAR2->VAR10);
    VAR6 = FUN3(&VAR2->VAR10, 8);
    VAR7 = FUN5(&VAR2->VAR10);
    VAR8 = FUN3(&VAR2->VAR10, 2);
    VAR9 = FUN3(&VAR2->VAR10, 5);
    if (VAR9 >= 1)
        VAR2->VAR14 = (VAR2->VAR14 * VAR8) / VAR9;
    FUN6("");
    VAR2->VAR15 = 1;
}