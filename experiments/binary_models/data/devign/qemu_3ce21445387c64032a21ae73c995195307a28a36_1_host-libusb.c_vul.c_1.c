void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 **VAR6;
    struct libusb_device_descriptor VAR7;
    char VAR8[16];
    int VAR9, VAR10;
    if (FUN2() != 0)
    {
        return;
    }
    VAR10 = FUN3(VAR11, &VAR6);
    for (VAR9 = 0; VAR9 < VAR10; VAR9++)
    {
        if (FUN4(VAR6[VAR9], &VAR7) != 0)
        {
            continue;
        }
        if (VAR7.VAR12 == VAR13)
        {
            continue;
        }
        FUN5(VAR6[VAR9], VAR8, sizeof(VAR8));
        FUN6(VAR2, "", FUN7(VAR6[VAR9]), FUN8(VAR6[VAR9]), VAR8, VAR14[FUN9(VAR6[VAR9])]);
        FUN6(VAR2, "", VAR7.VAR12);
        FUN6(VAR2, "", VAR7.VAR15, VAR7.VAR16);
        if (VAR7.VAR17)
        {
            VAR18 *VAR19;
            if (FUN10(VAR6[VAR9], &VAR19) == 0)
            {
                unsigned char VAR20[64] = "";
                FUN11(VAR19, VAR7.VAR17, VAR20, sizeof(VAR20));
                FUN12(VAR19);
                FUN6(VAR2, "", VAR20);
            }
        }
        FUN6(VAR2, "");
    }
    FUN13(VAR6, 1);
}