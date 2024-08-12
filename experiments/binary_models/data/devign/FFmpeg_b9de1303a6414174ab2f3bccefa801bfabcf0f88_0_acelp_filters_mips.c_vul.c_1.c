static void FUN1(float *VAR1, const float *VAR2, const float *VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8, VAR9;
    int VAR10 = VAR4 * 4;
    int VAR11 = VAR4 - VAR5;
    float VAR12, VAR13, VAR14, VAR15;
    for (VAR8 = 0; VAR8 < VAR7; VAR8++)
    {
        const float *VAR16 = &VAR2[VAR8];
        const float *VAR17 = &VAR2[VAR8 - 1];
        const float *VAR18 = &VAR3[VAR5];
        const float *VAR19 = VAR3 + VAR11;
        float VAR20 = 0;
        for (VAR9 = 0; VAR9 < VAR6; VAR9++)
        {
            VAR21 volatile(""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             : [VAR20] ""(VAR20), [VAR16] ""(VAR16), [VAR17] ""(VAR17), [VAR18] ""(VAR18), [VAR12] ""(VAR12), [VAR13] ""(VAR13), [VAR14] ""(VAR14), [VAR15] ""(VAR15), [VAR19] ""(VAR19)
                             : [VAR10] ""(VAR10)
                             : "");
        }
        VAR1[VAR8] = VAR20;
    }
}