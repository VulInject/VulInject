static int FUN1(void *VAR1, VAR2 *VAR3, VAR2 *VAR4, int VAR5, int VAR6)
{
    int VAR7;
    int VAR8;
    const vector unsigned int VAR9 = (const vector unsigned int)FUN2(0);
    const vector unsigned char VAR10 = (vector unsigned char){255, 255, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0};
    vector unsigned char VAR11 = FUN3(0, VAR3);
    vector unsigned char VAR12 = FUN3(0, VAR4);
    vector unsigned char VAR13, VAR14, VAR15, VAR16, VAR17;
    vector unsigned int VAR18;
    vector signed int VAR19;
    VAR18 = (vector unsigned int)FUN2(0);
    for (VAR7 = 0; VAR7 < VAR6; VAR7++)
    {
        vector unsigned char VAR20 = FUN4(0, VAR3);
        vector unsigned char VAR21 = FUN4(15, VAR3);
        vector unsigned char VAR22 = FUN4(0, VAR4);
        vector unsigned char VAR23 = FUN4(15, VAR4);
        VAR13 = FUN5(FUN6(VAR20, VAR21, VAR11), VAR10);
        VAR14 = FUN5(FUN6(VAR22, VAR23, VAR12), VAR10);
        VAR15 = FUN7(VAR13, VAR14);
        VAR16 = FUN8(VAR13, VAR14);
        VAR17 = FUN9(VAR15, VAR16);
        VAR18 = FUN10(VAR17, VAR17, VAR18);
        VAR3 += VAR5;
        VAR4 += VAR5;
    }
    VAR19 = FUN11((vector signed int)VAR18, (vector signed int)VAR9);
    VAR19 = FUN12(VAR19, 3);
    FUN13(VAR19, 0, &VAR8);
    return VAR8;
}