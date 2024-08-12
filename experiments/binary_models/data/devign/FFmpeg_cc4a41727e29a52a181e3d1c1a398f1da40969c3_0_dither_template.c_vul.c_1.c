void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, const VAR4 *VAR6, const VAR4 *VAR7, int VAR8)
{
    int VAR9, VAR10, VAR11, VAR12;
    int VAR13 = VAR3->VAR14.VAR15;
    float VAR16 = VAR3->VAR14.VAR17;
    float VAR18 = VAR3->VAR14.VAR19;
    FUN2((VAR13 & 3) != 2);
    FUN2((VAR13 & 3) != 3 || VAR3->VAR14.VAR20[VAR13] == 0);
    for (VAR12 = 0; VAR12 < VAR6->VAR21; VAR12++)
    {
        const float *VAR22 = ((const float *)VAR7->VAR12[VAR12]) + VAR3->VAR14.VAR23;
        const VAR24 *VAR25 = (const VAR24 *)VAR6->VAR12[VAR12];
        VAR24 *VAR26 = (VAR24 *)VAR5->VAR12[VAR12];
        float *VAR27 = VAR3->VAR14.VAR27[VAR12];
        const float *VAR20 = VAR3->VAR14.VAR20;
        VAR11 = VAR3->VAR14.VAR28;
        for (VAR9 = 0; VAR9 < VAR8; VAR9++)
        {
            double VAR29, VAR30 = VAR25[VAR9] * VAR18;
            for (VAR10 = 0; VAR10 < VAR13 - 2; VAR10 += 4)
            {
                VAR30 -= VAR20[VAR10] * VAR27[VAR11 + VAR10] + VAR20[VAR10 + 1] * VAR27[VAR11 + VAR10 + 1] + VAR20[VAR10 + 2] * VAR27[VAR11 + VAR10 + 2] + VAR20[VAR10 + 3] * VAR27[VAR11 + VAR10 + 3];
            }
            if (VAR10 < VAR13)
                VAR30 -= VAR20[VAR10] * VAR27[VAR11 + VAR10];
            VAR11 = VAR11 ? VAR11 - 1 : VAR13 - 1;
            VAR29 = FUN3(VAR30 + VAR22[VAR9]);
            VAR27[VAR11 + VAR13] = VAR27[VAR11] = VAR29 - VAR30;
            VAR29 *= VAR16;
            FUN4(VAR29);
            VAR26[VAR9] = VAR29;
        }
    }
    VAR3->VAR14.VAR28 = VAR11;
}