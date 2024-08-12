static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    const vector unsigned int VAR6 = (const vector unsigned int)FUN2(0);
    vector unsigned int VAR7 = (vector unsigned int)FUN2(0);
    vector signed int VAR8;
    for (VAR4 = 0; VAR4 < 16; VAR4++)
    {
        vector unsigned char VAR9 = FUN3(0, VAR2);
        VAR7 = FUN4(VAR9, VAR7);
        VAR2 += VAR3;
    }
    VAR8 = FUN5((vector signed int)VAR7, (vector signed int)VAR6);
    VAR8 = FUN6(VAR8, 3);
    FUN7(VAR8, 0, &VAR5);
    return VAR5;
}