void FUN1(VAR1 *VAR2, int VAR3, const VAR1 *VAR4, int VAR5, VAR6 *VAR7)
{
    int VAR8, VAR9;
    const VAR1 *VAR10;
    vector unsigned char *VAR11, VAR12, VAR13, VAR14;
    vec_ss_t VAR15[4], VAR16[4], VAR17[4];
    vector signed short VAR18, VAR19, VAR20;
    VAR10 = VAR4;
    for (VAR9 = 0; VAR9 < 4; VAR9++)
    {
        VAR17[VAR9].VAR10[0] = VAR7[VAR9] << (15 - VAR21);
        VAR17[VAR9].VAR22 = FUN2(VAR17[VAR9].VAR22, 0);
    }
    VAR14 = FUN3(0);
    VAR18 = FUN4(0);
    VAR9 = (-(int)VAR2) & 0xf;
    while (VAR9 > 0)
    {
        VAR8 = VAR10[0 * VAR5] * VAR7[0] + VAR10[1 * VAR5] * VAR7[1] + VAR10[2 * VAR5] * VAR7[2] + VAR10[3 * VAR5] * VAR7[3];
        VAR8 = VAR8 >> VAR21;
        if (VAR8 < 0)
            VAR8 = 0;
        else if (VAR8 > 255)
            VAR8 = 255;
        VAR2[0] = VAR8;
        VAR2++;
        VAR10++;
        VAR3--;
        VAR9--;
    }
    while (VAR3 >= 16)
    {
        VAR11 = (vector unsigned char *)&VAR10[0 * VAR5];
        VAR12 = FUN5(VAR11[0], VAR11[1], FUN6(0, &VAR10[VAR9 * VAR5]));
        VAR15[0].VAR22 = (vector signed short)FUN7(VAR14, VAR12);
        VAR16[0].VAR22 = (vector signed short)FUN8(VAR14, VAR12);
        VAR19 = FUN9(VAR15[0].VAR22, VAR17[0].VAR22, VAR18);
        VAR20 = FUN9(VAR16[0].VAR22, VAR17[0].VAR22, VAR18);
        VAR11 = (vector unsigned char *)&VAR10[1 * VAR5];
        VAR12 = FUN5(VAR11[0], VAR11[1], FUN6(0, &VAR10[1 * VAR5]));
        VAR15[1].VAR22 = (vector signed short)FUN7(VAR14, VAR12);
        VAR16[1].VAR22 = (vector signed short)FUN8(VAR14, VAR12);
        VAR19 = FUN9(VAR15[1].VAR22, VAR17[1].VAR22, VAR19);
        VAR20 = FUN9(VAR16[1].VAR22, VAR17[1].VAR22, VAR20);
        VAR11 = (vector unsigned char *)&VAR10[2 * VAR5];
        VAR12 = FUN5(VAR11[0], VAR11[1], FUN6(0, &VAR10[2 * VAR5]));
        VAR15[2].VAR22 = (vector signed short)FUN7(VAR14, VAR12);
        VAR16[2].VAR22 = (vector signed short)FUN8(VAR14, VAR12);
        VAR19 = FUN9(VAR15[2].VAR22, VAR17[2].VAR22, VAR19);
        VAR20 = FUN9(VAR16[2].VAR22, VAR17[2].VAR22, VAR20);
        VAR11 = (vector unsigned char *)&VAR10[3 * VAR5];
        VAR12 = FUN5(VAR11[0], VAR11[1], FUN6(0, &VAR10[3 * VAR5]));
        VAR15[3].VAR22 = (vector signed short)FUN7(VAR14, VAR12);
        VAR16[3].VAR22 = (vector signed short)FUN8(VAR14, VAR12);
        VAR19 = FUN9(VAR15[3].VAR22, VAR17[3].VAR22, VAR19);
        VAR20 = FUN9(VAR16[3].VAR22, VAR17[3].VAR22, VAR20);
        VAR13 = FUN10(VAR19, VAR20);
        FUN11(VAR13, 0, (vector unsigned char *)VAR2);
        VAR2 += 16;
        VAR10 += 16;
        VAR3 -= 16;
    }
    while (VAR3 > 0)
    {
        VAR8 = VAR10[0 * VAR5] * VAR7[0] + VAR10[1 * VAR5] * VAR7[1] + VAR10[2 * VAR5] * VAR7[2] + VAR10[3 * VAR5] * VAR7[3];
        VAR8 = VAR8 >> VAR21;
        if (VAR8 < 0)
            VAR8 = 0;
        else if (VAR8 > 255)
            VAR8 = 255;
        VAR2[0] = VAR8;
        VAR2++;
        VAR10++;
        VAR3--;
    }
}