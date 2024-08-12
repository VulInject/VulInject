static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
    const int VAR10 = VAR2->VAR11->VAR12[VAR6].VAR10;
    const int VAR13 = VAR2->VAR13;
    const int VAR14 = (VAR6 == 1 || VAR6 == 2);
    const int VAR15 = (VAR14 ? VAR2->VAR11->VAR16 : 0);
    const int VAR17 = (VAR14 ? VAR2->VAR11->VAR18 : 0);
    const int VAR19 = VAR4->VAR20[VAR10] / 2;
    const int VAR21 = VAR5->VAR20[VAR10] / 2;
    const int VAR22 = VAR21 * (VAR13 == 1 ? -1 : 1);
    const int VAR23 = VAR2->VAR24 - 1;
    const int VAR24 = VAR23 - VAR7;
    const int VAR25 = FUN2(VAR4->VAR26, VAR17);
    const int VAR27 = FUN2(VAR4->VAR28, VAR15);
    const VAR29 *VAR30 = (const VAR29 *)VAR4->VAR31[VAR10];
    VAR29 *VAR32 = (VAR29 *)VAR5->VAR31[VAR10] + (VAR9 ? (VAR8 >> VAR17) * VAR21 : VAR8 >> VAR15);
    VAR29 *const VAR33 = VAR32 + VAR21 * ((VAR2->VAR34 >> VAR17) - 1);
    VAR29 *const VAR35 = (VAR13 ? VAR33 : VAR32);
    const VAR29 *VAR36;
    int VAR37;
    if (!VAR9 && VAR13)
        VAR32 += VAR2->VAR34 >> VAR15;
    for (VAR37 = 0; VAR37 < VAR25; VAR37++)
    {
        const VAR29 *VAR38 = VAR30 + VAR27;
        VAR29 *VAR39 = VAR35;
        for (VAR36 = VAR30; VAR36 < VAR38; VAR36++)
        {
            VAR29 *VAR40;
            int VAR41 = FUN3(*VAR36, VAR23);
            if (VAR9)
            {
                VAR40 = VAR39++ + VAR22 * (VAR41 >> VAR17);
            }
            else
            {
                if (VAR13)
                    VAR40 = VAR32 - (VAR41 >> VAR15) - 1;
                else
                    VAR40 = VAR32 + (VAR41 >> VAR15);
            }
            FUN4(VAR40, VAR24, VAR7, VAR23);
        }
        VAR30 += VAR19;
        VAR32 += VAR21;
    }
    FUN5(VAR2, VAR5, VAR10, VAR10);
}