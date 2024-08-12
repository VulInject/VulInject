static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR9[VAR5];
    const int VAR10 = VAR2->VAR11 << VAR2->VAR12;
    const int VAR13 = VAR2->VAR14 << VAR2->VAR12;
    const int VAR15 = VAR10;
    int VAR16, VAR17, VAR18, VAR19;
    int VAR20 = VAR5 ? VAR2->VAR21 : 2 * VAR2->VAR21;
    int VAR22 = VAR23 >> VAR2->VAR12;
    int VAR24 = VAR5 ? VAR22 / 2 : VAR22;
    VAR25 *VAR26 = VAR5 ? VAR27[VAR2->VAR12 + 1] : VAR27[VAR2->VAR12];
    int VAR28 = VAR5 ? VAR22 : 2 * VAR22;
    int VAR29 = VAR2->VAR30.VAR31[VAR5];
    VAR25 *VAR32 = VAR2->VAR30.VAR33[VAR5];
    int VAR34 = VAR8->VAR35;
    int VAR36 = VAR8->VAR37;
    if (VAR2->VAR38->VAR39 & 512)
    {
        for (VAR17 = 0; VAR17 < VAR36; VAR17++)
        {
            for (VAR16 = 0; VAR16 < VAR34; VAR16++)
            {
                if (VAR6)
                    VAR4[VAR16 + VAR17 * VAR34] += 128 * 256;
                else
                    VAR4[VAR16 + VAR17 * VAR34] -= 128 * 256;
            }
        }
        return;
    }
    for (VAR19 = -1; VAR19 <= VAR13; VAR19++)
    {
        for (VAR18 = -1; VAR18 <= VAR10; VAR18++)
        {
            int VAR40 = FUN2(VAR18, 0, VAR10 - 1) + FUN2(VAR19, 0, VAR13 - 1) * VAR15;
            FUN3(VAR2, VAR4, VAR32, VAR26, VAR24 * VAR18 - VAR24 / 2, VAR24 * VAR19 - VAR24 / 2, 2 * VAR24, 2 * VAR24, VAR2->VAR41[VAR40].VAR42 * VAR20, VAR2->VAR41[VAR40].VAR43 * VAR20, VAR34, VAR36, VAR34, VAR29, VAR28, VAR2->VAR41[VAR40].VAR44, VAR6, VAR2->VAR41[VAR40].VAR45[VAR5]);
        }
    }
}