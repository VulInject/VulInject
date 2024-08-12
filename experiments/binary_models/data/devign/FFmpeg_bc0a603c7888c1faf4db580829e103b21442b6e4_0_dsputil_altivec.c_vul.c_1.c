static int FUN1(void *VAR1, VAR2 *VAR3, VAR2 *VAR4, int VAR5, int VAR6)
{
    int VAR7;
    int VAR8;
    const vector unsigned int VAR9 = (const vector unsigned int)FUN2(0);
    vector unsigned char VAR10, VAR11, *VAR12, *VAR13;
    vector unsigned char VAR14, VAR15, VAR16, VAR17, VAR18;
    vector unsigned int VAR19;
    vector signed int VAR20;
    VAR19 = (vector unsigned int)FUN2(0);
    for (VAR7 = 0; VAR7 < VAR6; VAR7++)
    {
        VAR10 = FUN3(0, VAR3);
        VAR12 = (vector unsigned char *)VAR3;
        VAR11 = FUN3(0, VAR4);
        VAR13 = (vector unsigned char *)VAR4;
        VAR14 = FUN4(VAR12[0], VAR12[1], VAR10);
        VAR15 = FUN4(VAR13[0], VAR13[1], VAR11);
        VAR16 = FUN5(VAR14, VAR15);
        VAR17 = FUN6(VAR14, VAR15);
        VAR18 = FUN7(VAR16, VAR17);
        VAR19 = FUN8(VAR18, VAR19);
        VAR3 += VAR5;
        VAR4 += VAR5;
    }
    VAR20 = FUN9((vector signed int)VAR19, (vector signed int)VAR9);
    VAR20 = FUN10(VAR20, 3);
    FUN11(VAR20, 0, &VAR8);
    return VAR8;
}