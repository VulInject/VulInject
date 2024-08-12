static void FUN1(VAR1 *VAR2, enum TiffTags VAR3, enum TiffTypes VAR4, int VAR5, const void *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9 + 12 * VAR2->VAR10;
    FUN2(VAR2->VAR10 < VAR11);
    FUN3(&VAR8, VAR3);
    FUN3(&VAR8, VAR4);
    FUN4(&VAR8, VAR5);
    if (VAR12[VAR4] * VAR5 <= 4)
    {
        FUN5(&VAR8, VAR5, VAR6, VAR4, 0);
    }
    else
    {
        FUN4(&VAR8, *VAR2->VAR13 - VAR2->VAR14);
        FUN6(VAR2, VAR5 * VAR15[VAR4]);
        FUN5(VAR2->VAR13, VAR5, VAR6, VAR4, 0);
    }
    VAR2->VAR10++;
}