static void FUN1(bool VAR1)
{
    IVState VAR2, VAR3, *VAR4, *VAR5;
    ServerThread VAR6;
    IvshmemServer VAR7;
    int VAR8, VAR9, VAR10;
    int VAR11 = 2;
    guint64 VAR12 = FUN2() + 5 * VAR13;
    VAR8 = FUN3(&VAR7, VAR14, VAR15, true, VAR16, VAR11, FUN4());
    FUN5(VAR8, ==, 0);
    VAR8 = FUN6(&VAR7);
    FUN5(VAR8, ==, 0);
    FUN7(&VAR2, VAR11, VAR1);
    VAR4 = &VAR2;
    FUN7(&VAR3, VAR11, VAR1);
    VAR5 = &VAR3;
    FUN8(FUN9(VAR4, VAR17), ==, 0xffffffff);
    FUN8(FUN9(VAR5, VAR17), ==, 0xffffffff);
    FUN8(FUN10(VAR4->VAR18, (VAR19)VAR4->VAR20), ==, 0x00);
    VAR6.VAR7 = &VAR7;
    VAR8 = FUN11(VAR6.VAR21);
    FUN5(VAR8, ==, 0);
    VAR6.VAR6 = FUN12("", VAR22, &VAR6);
    FUN13(VAR6.VAR6 != NULL);
    while (FUN2() < VAR12)
    {
        FUN14(1000);
        if ((int)FUN9(VAR4, VAR17) >= 0 && (int)FUN9(VAR5, VAR17) >= 0)
        {
            break;
        }
    }
    VAR9 = FUN9(VAR4, VAR17);
    VAR10 = FUN9(VAR5, VAR17);
    FUN8(VAR9, !=, VAR10);
    VAR23 = VAR4->VAR18;
    if (VAR1)
    {
        VAR8 = FUN15(VAR4->VAR24);
        FUN8(VAR8, ==, VAR11);
    }
    if (VAR1)
    {
        VAR8 = FUN16(VAR4->VAR24, 0);
        FUN8(VAR8, ==, 0);
    }
    else
    {
        FUN8(FUN9(VAR4, VAR25), ==, 0);
    }
    FUN17(VAR5, VAR26, VAR9 << 16);
    do
    {
        FUN14(10000);
        VAR8 = VAR1 ? FUN16(VAR4->VAR24, 0) : FUN9(VAR4, VAR25);
    } while (VAR8 == 0 && FUN2() < VAR12);
    FUN8(VAR8, !=, 0);
    VAR23 = VAR5->VAR18;
    if (VAR1)
    {
        VAR8 = FUN16(VAR5->VAR24, 1);
        FUN8(VAR8, ==, 0);
    }
    else
    {
        FUN8(FUN9(VAR5, VAR25), ==, 0);
    }
    FUN17(VAR4, VAR26, VAR10 << 16 | 1);
    do
    {
        FUN14(10000);
        VAR8 = VAR1 ? FUN16(VAR5->VAR24, 1) : FUN9(VAR5, VAR25);
    } while (VAR8 == 0 && FUN2() < VAR12);
    FUN8(VAR8, !=, 0);
    FUN18(VAR5);
    FUN18(VAR4);
    if (FUN19(VAR6.VAR21[1], "", 1) != 1)
    {
        FUN20("", FUN21(VAR27));
    }
    FUN22(VAR6.VAR6);
    FUN23(&VAR7);
    close(VAR6.VAR21[1]);
    close(VAR6.VAR21[0]);
}