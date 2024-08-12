static void FUN1(void)
{
    IVState VAR1, VAR2, *VAR3, *VAR4;
    ServerThread VAR5;
    IvshmemServer VAR6;
    int VAR7, VAR8, VAR9;
    int VAR10 = 2;
    guint64 VAR11 = FUN2() + 5 * VAR12;
    memset(VAR13, 0x42, VAR14);
    VAR7 = FUN3(&VAR6, VAR15, VAR16, VAR14, VAR10, FUN4());
    FUN5(VAR7, ==, 0);
    VAR7 = FUN6(&VAR6);
    FUN5(VAR7, ==, 0);
    FUN7(&VAR1, VAR10);
    VAR3 = &VAR1;
    FUN7(&VAR2, VAR10);
    VAR4 = &VAR2;
    FUN8(FUN9(VAR3, VAR17), ==, 0xffffffff);
    FUN8(FUN9(VAR4, VAR17), ==, 0xffffffff);
    FUN8(FUN10(VAR3->VAR18, (VAR19)VAR3->VAR20), ==, 0x00);
    VAR5.VAR6 = &VAR6;
    VAR7 = FUN11(VAR5.VAR21);
    FUN5(VAR7, ==, 0);
    VAR5.VAR5 = FUN12("", VAR22, &VAR5);
    FUN13(VAR5.VAR5 != NULL);
    while (FUN2() < VAR11)
    {
        FUN14(1000);
        if (FUN10(VAR3->VAR18, (VAR19)VAR3->VAR20) == 0x42 && FUN10(VAR4->VAR18, (VAR19)VAR4->VAR20) == 0x42)
        {
            break;
        }
    }
    VAR8 = FUN9(VAR3, VAR17);
    VAR9 = FUN9(VAR4, VAR17);
    FUN8(VAR8, !=, VAR9);
    VAR23 = VAR3->VAR18;
    VAR7 = FUN15(VAR3->VAR24);
    FUN8(VAR7, ==, VAR10);
    VAR7 = FUN16(VAR3->VAR24, 0);
    FUN8(VAR7, ==, 0);
    FUN17(VAR4, VAR25, VAR8 << 16);
    do
    {
        FUN14(10000);
        VAR7 = FUN16(VAR3->VAR24, 0);
    } while (VAR7 == 0 && FUN2() < VAR11);
    FUN8(VAR7, !=, 0);
    VAR23 = VAR4->VAR18;
    VAR7 = FUN16(VAR4->VAR24, 0);
    FUN8(VAR7, ==, 0);
    FUN17(VAR3, VAR25, VAR9 << 16);
    do
    {
        FUN14(10000);
        VAR7 = FUN16(VAR4->VAR24, 0);
    } while (VAR7 == 0 && FUN2() < VAR11);
    FUN8(VAR7, !=, 0);
    FUN18(VAR4->VAR18);
    FUN18(VAR3->VAR18);
    if (FUN19(VAR5.VAR21[1], "", 1) != 1)
    {
        FUN20("", FUN21(VAR26));
    }
    FUN22(VAR5.VAR5);
    FUN23(&VAR6);
    close(VAR5.VAR21[1]);
    close(VAR5.VAR21[0]);
}