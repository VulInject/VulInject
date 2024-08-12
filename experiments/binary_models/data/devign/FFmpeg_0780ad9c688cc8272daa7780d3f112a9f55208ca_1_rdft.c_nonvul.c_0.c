static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    FFTComplex VAR8, VAR9;
    const int VAR10 = 1 << VAR2->VAR11;
    const float VAR12 = 0.5;
    const float VAR13 = 0.5 - VAR2->VAR14;
    const VAR3 *VAR15 = VAR2->VAR15;
    const VAR3 *VAR16 = VAR2->VAR16;
    if (!VAR2->VAR14)
    {
        VAR2->VAR17.FUN2(&VAR2->VAR17, (VAR18 *)VAR4);
        VAR2->VAR17.FUN3(&VAR2->VAR17, (VAR18 *)VAR4);
    }
    VAR8.VAR19 = VAR4[0];
    VAR4[0] = VAR8.VAR19 + VAR4[1];
    VAR4[1] = VAR8.VAR19 - VAR4[1];
    for (VAR5 = 1; VAR5 < (VAR10 >> 2); VAR5++)
    {
        VAR6 = 2 * VAR5;
        VAR7 = VAR10 - VAR6;
        VAR8.VAR19 = VAR12 * (VAR4[VAR6] + VAR4[VAR7]);
        VAR9.VAR20 = -VAR13 * (VAR4[VAR6] - VAR4[VAR7]);
        VAR8.VAR20 = VAR12 * (VAR4[VAR6 + 1] - VAR4[VAR7 + 1]);
        VAR9.VAR19 = VAR13 * (VAR4[VAR6 + 1] + VAR4[VAR7 + 1]);
        VAR4[VAR6] = VAR8.VAR19 + VAR9.VAR19 * VAR15[VAR5] sign0 VAR9.VAR20 * VAR16[VAR5];
        VAR4[VAR6 + 1] = VAR8.VAR20 + VAR9.VAR20 * VAR15[VAR5] sign1 VAR9.VAR19 * VAR16[VAR5];
        VAR4[VAR7] = VAR8.VAR19 - VAR9.VAR19 * VAR15[VAR5] sign1 VAR9.VAR20 * VAR16[VAR5];
        VAR4[VAR7 + 1] = -VAR8.VAR20 + VAR9.VAR20 * VAR15[VAR5] sign1 VAR9.VAR19 * VAR16[VAR5];
    }
    if (VAR2->VAR21)
    {
        FUN4(+, -)
    }
    else
    {
        FUN4(-, +)
    }
    VAR4[2 * VAR5 + 1] = VAR2->VAR22 * VAR4[2 * VAR5 + 1];
    if (VAR2->VAR14)
    {
        VAR4[0] *= VAR12;
        VAR4[1] *= VAR12;
        VAR2->VAR17.FUN2(&VAR2->VAR17, (VAR18 *)VAR4);
        VAR2->VAR17.FUN3(&VAR2->VAR17, (VAR18 *)VAR4);
    }
}