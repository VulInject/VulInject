static void FUN1(VAR1 *VAR2)
{
    int VAR3[6] = {VAR4, 0, VAR5, 0, VAR6, VAR7};
    GLXPbuffer VAR8;
    GLuint VAR9;
    void *VAR10;
    hwaddr VAR11;
    void *VAR12;
    hwaddr VAR13;
    float VAR14;
    FUN2();
    VAR3[1] = VAR2->VAR15[VAR16];
    VAR3[3] = VAR2->VAR15[VAR17];
    VAR8 = FUN3(VAR2->VAR18, VAR2->VAR19, VAR3);
    FUN4(VAR2->VAR18, VAR8, VAR8, VAR2->VAR20);
    FUN5(VAR21, 1);
    FUN5(VAR22, 1);
    FUN5(VAR23, 2);
    FUN5(VAR24, 2);
    FUN6(1, &VAR9);
    FUN7(VAR25, VAR9);
    VAR11 = 2ULL * VAR2->VAR15[VAR26] * VAR2->VAR15[VAR27];
    VAR10 = FUN8(VAR2->VAR15[VAR28], &VAR11, 0);
    if (VAR10 == NULL)
    {
        FUN9(1, &VAR9);
        FUN4(VAR2->VAR18, VAR29, VAR29, NULL);
        FUN10(VAR2->VAR18, VAR8);
        return;
    }
    FUN11(VAR25, 0, 3, VAR2->VAR15[VAR26], VAR2->VAR15[VAR27], 0, VAR30, VAR31, VAR10);
    FUN12(VAR10, VAR11, 0, VAR11);
    if ((VAR2->VAR15[VAR32] & 0x3f) > 0x20)
    {
        FUN13(VAR25, VAR33, VAR34);
        FUN13(VAR25, VAR35, VAR34);
    }
    else
    {
        FUN13(VAR25, VAR33, VAR36);
        FUN13(VAR25, VAR35, VAR36);
    }
    if ((VAR2->VAR15[VAR32] >> 6) & VAR2->VAR15[VAR26])
    {
        FUN13(VAR25, VAR37, VAR38);
    }
    else
    {
        FUN13(VAR25, VAR37, VAR39);
    }
    if ((VAR2->VAR15[VAR40] >> 6) & VAR2->VAR15[VAR27])
    {
        FUN13(VAR25, VAR41, VAR38);
    }
    else
    {
        FUN13(VAR25, VAR41, VAR39);
    }
    FUN14(VAR42);
    FUN15(VAR43, VAR44);
    VAR14 = (float)(VAR2->VAR15[VAR45] + 1) / 64.0f;
    FUN16(VAR14, VAR14, VAR14, (float)(VAR2->VAR15[VAR46] + 1) / 64.0f);
    VAR11 = 2ULL * VAR2->VAR15[VAR16] * VAR2->VAR15[VAR17];
    VAR10 = FUN8(VAR2->VAR15[VAR47], &VAR11, 0);
    if (VAR10 == NULL)
    {
        FUN9(1, &VAR9);
        FUN4(VAR2->VAR18, VAR29, VAR29, NULL);
        FUN10(VAR2->VAR18, VAR8);
        return;
    }
    FUN17(VAR2->VAR15[VAR16], VAR2->VAR15[VAR17], VAR30, VAR31, VAR10);
    FUN12(VAR10, VAR11, 0, VAR11);
    FUN18(0, 0, VAR2->VAR15[VAR16], VAR2->VAR15[VAR17]);
    FUN19(VAR48);
    FUN20();
    FUN21(0.0, VAR2->VAR15[VAR16], 0.0, VAR2->VAR15[VAR17], -1.0, 1.0);
    FUN19(VAR49);
    VAR13 = VAR50 * VAR50 * sizeof(struct VAR51);
    VAR12 = FUN8(VAR2->VAR15[VAR52], &VAR13, 0);
    if (VAR12 == NULL)
    {
        FUN9(1, &VAR9);
        FUN4(VAR2->VAR18, VAR29, VAR29, NULL);
        FUN10(VAR2->VAR18, VAR8);
        return;
    }
    FUN22((struct VAR51 *)VAR12, VAR2->VAR15[VAR26], VAR2->VAR15[VAR27], VAR2->VAR15[VAR53], VAR2->VAR15[VAR54], VAR2->VAR15[VAR55], VAR2->VAR15[VAR56], VAR2->VAR15[VAR57], VAR2->VAR15[VAR58]);
    FUN12(VAR12, VAR13, 0, VAR13);
    VAR11 = 2 * VAR2->VAR15[VAR16] * VAR2->VAR15[VAR17];
    VAR10 = FUN8(VAR2->VAR15[VAR47], &VAR11, 1);
    if (VAR10 == NULL)
    {
        FUN9(1, &VAR9);
        FUN4(VAR2->VAR18, VAR29, VAR29, NULL);
        FUN10(VAR2->VAR18, VAR8);
        return;
    }
    FUN23(0, 0, VAR2->VAR15[VAR16], VAR2->VAR15[VAR17], VAR30, VAR31, VAR10);
    FUN12(VAR10, VAR11, 1, VAR11);
    FUN9(1, &VAR9);
    FUN4(VAR2->VAR18, VAR29, VAR29, NULL);
    FUN10(VAR2->VAR18, VAR8);
    VAR2->VAR15[VAR59] &= ~VAR60;
    FUN24();
    FUN25(VAR2->VAR61);
}