static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = FUN2(VAR2->VAR6);
    VAR4 *VAR7 = FUN2(VAR2->VAR8);
    FUN3(&VAR2->VAR9, "", 0x2000);
    FUN4(&VAR2->VAR10, &VAR11, VAR2, "", 0x100);
    FUN5(&VAR2->VAR9, 0, &VAR2->VAR10);
    for (VAR3 = 0; VAR3 < (VAR2->VAR12 + 1); VAR3++)
    {
        hwaddr VAR13 = 0x100 + (VAR3 * 0x100);
        FUN5(&VAR2->VAR9, VAR13, FUN6(VAR5, VAR3 + 1));
    }
    for (VAR3 = 0; VAR3 < (VAR2->VAR12 + 1) * 2; VAR3++)
    {
        hwaddr VAR13 = 0x600 + (VAR3 >> 1) * 0x100 + (VAR3 & 1) * 0x20;
        FUN5(&VAR2->VAR9, VAR13, FUN6(VAR7, VAR3));
    }
    FUN5(&VAR2->VAR9, 0x1000, FUN6(VAR5, 0));
    for (VAR3 = 0; VAR3 < VAR2->VAR12; VAR3++)
    {
        int VAR14 = (VAR2->VAR15 - 32) + VAR3 * 32;
        FUN7(VAR7, VAR3 * 2, FUN8(VAR2->VAR6, VAR14 + 29));
        FUN7(VAR7, VAR3 * 2 + 1, FUN8(VAR2->VAR6, VAR14 + 30));
    }
}