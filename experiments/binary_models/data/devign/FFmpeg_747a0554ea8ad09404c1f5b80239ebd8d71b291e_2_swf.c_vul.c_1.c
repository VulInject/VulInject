static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = &VAR2->VAR9;
    static int VAR10 = 0;
    if (VAR4->VAR11 > 1)
    {
        FUN2(VAR2, VAR12);
        FUN3(VAR9, VAR13);
        FUN3(VAR9, 1);
        FUN4(VAR2);
        FUN2(VAR2, VAR14);
        FUN3(VAR9, VAR15);
        FUN4(VAR2);
    }
    FUN2(VAR2, VAR16 | VAR17);
    FUN3(VAR9, VAR10);
    FUN5(VAR9, 0xff);
    FUN5(VAR9, 0xd8);
    FUN5(VAR9, 0xff);
    FUN5(VAR9, 0xd9);
    FUN6(VAR9, VAR6, VAR7);
    FUN4(VAR2);
    FUN2(VAR2, VAR18);
    FUN3(VAR9, VAR13);
    FUN3(VAR9, 1);
    FUN7(VAR9, 1 << VAR19, 0, 0, 1 << VAR19, 0, 0);
    FUN4(VAR2);
    FUN2(VAR2, VAR20);
    FUN4(VAR2);
    FUN8(&VAR2->VAR9);
    return 0;
}