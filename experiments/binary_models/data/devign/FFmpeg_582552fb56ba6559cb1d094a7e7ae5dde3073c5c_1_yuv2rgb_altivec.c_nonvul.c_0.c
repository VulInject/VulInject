static int FUN1(VAR1 *VAR2, unsigned char **VAR3, int *VAR4, int VAR5, int VAR6, unsigned char **VAR7, int *VAR8)
{
    int VAR9 = VAR2->VAR10;
    int VAR11 = VAR6;
    int VAR12, VAR13;
    vector unsigned char VAR14;
    vector signed short VAR15, VAR16, VAR17;
    vector signed short VAR18, VAR19, VAR20;
    vector signed short VAR21, VAR22, VAR23, VAR24, VAR25, VAR26;
    vector unsigned char VAR27, VAR28, VAR29;
    vector unsigned char *VAR30;
    VAR31 *VAR32;
    VAR32 = VAR3[0];
    VAR30 = (vector unsigned char *)(VAR7[0] + VAR5 * VAR8[0]);
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        for (VAR13 = 0; VAR13 < VAR9 / 16; VAR13++)
        {
            VAR14 = FUN2(0, VAR32);
            VAR16 = (vector signed short)FUN3(VAR14, (vector unsigned char)FUN4(0), VAR33);
            VAR17 = (vector signed short)FUN3(VAR14, (vector unsigned char)FUN4(0), VAR34);
            VAR15 = (vector signed short)FUN3(VAR14, (vector unsigned char)FUN4(0), VAR35);
            FUN5(VAR2, VAR15, VAR16, VAR17, &VAR21, &VAR22, &VAR23);
            VAR14 = FUN2(16, VAR32);
            VAR16 = (vector signed short)FUN3(VAR14, (vector unsigned char)FUN4(0), VAR33);
            VAR17 = (vector signed short)FUN3(VAR14, (vector unsigned char)FUN4(0), VAR34);
            VAR15 = (vector signed short)FUN3(VAR14, (vector unsigned char)FUN4(0), VAR35);
            FUN5(VAR2, VAR15, VAR16, VAR17, &VAR24, &VAR25, &VAR26);
            VAR27 = FUN6(VAR21, VAR24);
            VAR28 = FUN6(VAR22, VAR25);
            VAR29 = FUN6(VAR23, VAR26);
            FUN7(VAR27, VAR28, VAR29, VAR30);
            VAR32 += 32;
        }
    }
    return VAR6;
}