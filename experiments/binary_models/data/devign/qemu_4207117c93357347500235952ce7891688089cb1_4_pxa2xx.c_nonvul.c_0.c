struct VAR1 *FUN1(VAR2 *VAR3, const char *VAR4)
{
    struct VAR1 *VAR5;
    struct VAR6 *VAR7;
    int VAR8, VAR9;
    VAR5 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    if (VAR4 && FUN3(VAR4, "", 5))
    {
        fprintf(VAR10, "");
        FUN4(1);
    }
    VAR5->VAR11 = FUN5();
    FUN6(VAR5->VAR11, VAR4 ?: "");
    VAR5->VAR12 = FUN7(0x40d00000, VAR5->VAR11);
    VAR5->VAR13 = FUN8(0x40000000, VAR5->VAR12[VAR14]);
    FUN9(0x40a00000, &VAR5->VAR12[VAR15], VAR5->VAR12[VAR16], VAR5->VAR11);
    VAR5->VAR17 = FUN10(0x40e00000, VAR5->VAR11, VAR5->VAR12, 121);
    VAR5->VAR18 = FUN11(0x41100000, VAR5->VAR12[VAR19], VAR5->VAR13);
    for (VAR9 = 0; VAR20[VAR9].VAR21; VAR9++)
        if (VAR22[VAR9])
            FUN12(VAR20[VAR9].VAR21, 2, VAR5->VAR12[VAR20[VAR9].VAR23], VAR22[VAR9], 1);
        else
            break;
    if (VAR22[VAR9])
        VAR5->VAR24 = FUN13(0x40800000, VAR5->VAR12[VAR25], VAR5->VAR13, VAR22[VAR9]);
    if (VAR3)
        VAR5->VAR26 = FUN14(0x44000000, VAR5->VAR12[VAR27], VAR3);
    VAR5->VAR28 = 0x41300000;
    VAR5->VAR29[VAR30 >> 4] = 0x02000210;
    VAR5->VAR31 = 0x00000009;
    VAR8 = FUN15(0, VAR32, VAR33, VAR5);
    FUN16(VAR5->VAR28, 0xfff, VAR8);
    FUN17(VAR5->VAR11, 14, VAR34, VAR35, VAR5);
    VAR5->VAR36 = 0x48000000;
    VAR5->VAR37[VAR38 >> 2] = 0x00020002;
    VAR5->VAR37[VAR39 >> 2] = 0x03ca4000;
    VAR5->VAR37[VAR40 >> 2] = 0x00000001;
    VAR8 = FUN15(0, VAR41, VAR42, VAR5);
    FUN16(VAR5->VAR36, 0xfff, VAR8);
    for (VAR9 = 0; VAR43[VAR9].VAR21; VAR9++)
        ;
    VAR5->VAR7 = (struct VAR6 **)FUN2(sizeof(struct VAR6 *) * VAR9);
    VAR7 = (struct VAR6 *)FUN2(sizeof(struct VAR6) * VAR9);
    for (VAR9 = 0; VAR43[VAR9].VAR21; VAR9++)
    {
        VAR5->VAR7[VAR9] = &VAR7[VAR9];
        VAR7[VAR9].VAR44 = VAR43[VAR9].VAR21;
        VAR7[VAR9].VAR45 = VAR5->VAR12[VAR43[VAR9].VAR23];
        VAR8 = FUN15(0, VAR46, VAR47, &VAR7[VAR9]);
        FUN16(VAR7[VAR9].VAR44, 0xfff, VAR8);
    }
    if (VAR48)
    {
        FUN18(0x4c000000, 3, -1, VAR5->VAR12[VAR49]);
    }
    VAR5->VAR50[0] = FUN19(0x20000000);
    VAR5->VAR50[1] = FUN19(0x30000000);
    VAR5->VAR51 = 0x40900000;
    VAR8 = FUN15(0, VAR52, VAR53, VAR5);
    FUN16(VAR5->VAR51, 0xfff, VAR8);
    FUN20(VAR5);
    VAR5->VAR54 = 0x40f00000;
    VAR8 = FUN15(0, VAR55, VAR56, VAR5);
    FUN16(VAR5->VAR54, 0xfff, VAR8);
    VAR5->VAR57 = FUN21(0x40400000, VAR5->VAR12[VAR58], VAR5->VAR13);
    FUN22(VAR5->VAR17, 1, VAR59, VAR5);
    return VAR5;
}