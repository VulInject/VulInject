static void FUN1(const VAR1 *VAR2, const int VAR3, VAR4 *VAR5, const VAR6 *VAR7, const float *VAR8)
{
    int VAR9, VAR10, VAR11;
    int VAR12 = 0;
    for (VAR10 = 0; VAR10 < VAR2->VAR13 * 16; VAR10 += 16)
    {
        for (VAR11 = 0; VAR11 < VAR3; VAR11++)
        {
            VAR14 *VAR15 = &VAR5->VAR15[VAR10 + VAR11];
            float VAR16 = 0.0f;
            float VAR17;
            VAR15->VAR18 = 0.0f;
            for (VAR9 = 0; VAR9 < VAR7[VAR11]; VAR9++)
            {
                VAR15->VAR18 += VAR8[VAR12 + VAR9] * VAR8[VAR12 + VAR9];
                VAR16 += FUN2(FUN3(VAR8[VAR12 + VAR9]));
            }
            VAR17 = VAR15->VAR18 > 0 ? FUN2((float)VAR7[VAR11] / VAR15->VAR18) : 0;
            VAR15->VAR19 = VAR15->VAR18 * 0.001258925f;
            VAR15->VAR20 = VAR16 * FUN2(VAR17);
            VAR12 += VAR7[VAR11];
        }
    }
}