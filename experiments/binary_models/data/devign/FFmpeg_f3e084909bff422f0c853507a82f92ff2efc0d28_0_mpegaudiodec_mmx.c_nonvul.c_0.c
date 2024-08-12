static void FUN1(float *VAR1, float *VAR2, int *VAR3, float *VAR4, int VAR5)
{
    FUN2(float, VAR6, [17]);
    FUN2(float, VAR7, [17]);
    FUN2(float, VAR8, [17]);
    FUN2(float, VAR9, [17]);
    float VAR10;
    VAR11 volatile(""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     :
                     : ""(VAR1), ""(VAR1 + 512)
                     : "");
    FUN3(VAR1 + 16, VAR2, VAR2 + 512, VAR6, VAR8, 16);
    FUN3(VAR1 + 32, VAR2 + 48, VAR2 + 640, VAR7, VAR9, 16);
    FUN4(VAR12, VAR6[0], VAR2 + 32, VAR1 + 48);
    VAR8[0] = 0;
    VAR7[16] = 0;
    VAR9[16] = 0;
    "" #VAR9 ""
    ""
    "" #VAR6 ""
    "" #VAR13 ""

    "" #VAR8 ""
    ""
    "" #VAR7 ""
    "" #VAR14 "" if (VAR5 == 1)
    {
        VAR11 volatile(FUN5(0, 48, 4, 52, 0, 112) FUN5(16, 32, 20, 36, 16, 96) FUN5(32, 16, 36, 20, 32, 80) FUN5(48, 0, 52, 4, 48, 64)
                         : ""(VAR4)
                         : ""(&VAR6[0]), ""(&VAR7[0]), ""(&VAR8[0]), ""(&VAR9[0])
                         : "");
        VAR4 += 16 * VAR5;
    }
    else
    {
        int VAR15;
        float *VAR14 = VAR4 + 32 * VAR5;
        VAR4[0] = -VAR6[0];
        VAR4 += VAR5;
        VAR14 -= VAR5;
        for (VAR15 = 1; VAR15 < 16; VAR15++)
        {
            *VAR4 = -VAR6[VAR15] + VAR9[16 - VAR15];
            *VAR14 = VAR7[16 - VAR15] + VAR8[VAR15];
            VAR4 += VAR5;
            VAR14 -= VAR5;
        }
    }
    VAR10 = 0;
    FUN4(VAR16, VAR10, VAR2 + 16 + 32, VAR1 + 32);
    *VAR4 = VAR10;
}