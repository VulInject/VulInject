static void FUN1(VAR1 *restrict VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6;
    vector unsigned char VAR7 = FUN2(0, VAR4);
    vector unsigned char VAR8;
    const vector unsigned char VAR9 = (const vector unsigned char)FUN3(0);
    vector signed short VAR10;
    for (VAR6 = 0; VAR6 < 8; VAR6++)
    {
        vector unsigned char VAR11 = FUN4(0, VAR4);
        vector unsigned char VAR12 = FUN4(15, VAR4);
        VAR8 = FUN5(VAR11, VAR12, VAR7);
        VAR10 = (vector signed short)FUN6(VAR9, VAR8);
        FUN7(VAR10, VAR6 * 16, (vector signed short *)VAR2);
        VAR4 += VAR5;
    }
}