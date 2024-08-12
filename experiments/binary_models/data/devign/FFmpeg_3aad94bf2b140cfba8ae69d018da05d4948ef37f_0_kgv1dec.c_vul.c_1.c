static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10 = VAR6->VAR3;
    const VAR9 *VAR11 = VAR10 + VAR6->VAR12;
    VAR13 *const VAR14 = VAR2->VAR15;
    int VAR16[8];
    VAR9 *VAR17, *VAR18;
    int VAR19 = 0, VAR20;
    int VAR21, VAR22, VAR23, VAR24;
    if (VAR6->VAR12 < 2)
        VAR21 = (VAR10[0] + 1) * 8;
    VAR22 = (VAR10[1] + 1) * 8;
    VAR10 += 2;
    if (VAR21 != VAR2->VAR25 || VAR22 != VAR2->VAR26)
    {
        FUN2(&VAR14->VAR27);
        FUN2(&VAR14->VAR28);
        if ((VAR24 = FUN3(VAR2, VAR21, VAR22)) < 0)
            return VAR24;
    }
    if (!VAR14->VAR27)
    {
        VAR14->VAR27 = FUN4(VAR2->VAR25 * VAR2->VAR26 * 2);
        VAR14->VAR28 = FUN4(VAR2->VAR25 * VAR2->VAR26 * 2);
        if (!VAR14->VAR27 || !VAR14->VAR28)
        {
            FUN5(VAR2);
            return FUN6(VAR29);
        }
    }
    VAR20 = VAR21 * VAR22;
    if ((VAR24 = FUN7(VAR2, VAR8, 0)) < 0)
        return VAR24;
    VAR17 = (VAR9 *)VAR14->VAR27;
    VAR18 = (VAR9 *)VAR14->VAR28;
    for (VAR23 = 0; VAR23 < 8; VAR23++)
        VAR16[VAR23] = -1;
    while (VAR19 < VAR20 && VAR11 - 2 >= VAR10)
    {
        int VAR30 = FUN8(VAR10);
        VAR10 += 2;
        if (!(VAR30 & 0x8000))
        {
            FUN9(&VAR17[2 * VAR19], VAR30);
            VAR19++;
        }
        else
        {
            int VAR31;
            if ((VAR30 & 0x6000) == 0x6000)
            {
                int VAR32 = (VAR30 >> 10) & 7;
                int VAR33;
                VAR31 = (VAR30 & 0x3FF) + 3;
                if (VAR16[VAR32] < 0)
                {
                    if (VAR11 - 3 < VAR10)
                        break;
                    VAR16[VAR32] = FUN10(VAR10);
                    VAR10 += 3;
                }
                VAR33 = (VAR19 + VAR16[VAR32]) % VAR20;
                if (VAR20 - VAR33 < VAR31 || VAR20 - VAR19 < VAR31)
                    break;
                if (!VAR18)
                {
                    FUN11(VAR2, VAR34, "");
                    break;
                }
                memcpy(VAR17 + 2 * VAR19, VAR18 + 2 * VAR33, 2 * VAR31);
            }
            else
            {
                int VAR35 = (VAR30 & 0x1FFF) + 1;
                if (!(VAR30 & 0x6000))
                {
                    VAR31 = 2;
                }
                else if ((VAR30 & 0x6000) == 0x2000)
                {
                    VAR31 = 3;
                }
                else
                {
                    if (VAR11 - 1 < VAR10)
                        break;
                    VAR31 = 4 + *VAR10++;
                }
                if (VAR19 < VAR35 || VAR20 - VAR19 < VAR31)
                    break;
                FUN12(VAR17 + 2 * VAR19, 2 * VAR35, 2 * VAR31);
            }
            VAR19 += VAR31;
        }
    }
    if (VAR19 - VAR20)
        FUN11(VAR2, VAR36, "", VAR19 - VAR20);
    FUN13(VAR8->VAR3[0], VAR8->VAR37[0], (const VAR9 *)VAR14->VAR27, VAR2->VAR25 * 2, VAR2->VAR25 * 2, VAR2->VAR26);
    FUN14(VAR38 *, VAR14->VAR27, VAR14->VAR28);
    *VAR4 = 1;
    return VAR6->VAR12;