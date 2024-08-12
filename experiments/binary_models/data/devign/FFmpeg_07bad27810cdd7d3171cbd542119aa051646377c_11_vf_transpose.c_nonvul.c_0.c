static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5->VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    VAR7 *VAR10 = VAR2->VAR5->VAR11[0]->VAR12;
    VAR1 *VAR13 = VAR2->VAR5->VAR11[0];
    int VAR14;
    for (VAR14 = 0; VAR10->VAR15[VAR14]; VAR14++)
    {
        int VAR16 = VAR14 == 1 || VAR14 == 2 ? VAR4->VAR16 : 0;
        int VAR17 = VAR14 == 1 || VAR14 == 2 ? VAR4->VAR17 : 0;
        int VAR18 = VAR4->VAR19[VAR14];
        int VAR20 = VAR8->VAR21->VAR22 >> VAR17;
        int VAR23 = VAR10->VAR21->VAR24 >> VAR16;
        int VAR25 = VAR10->VAR21->VAR22 >> VAR17;
        VAR26 *VAR27, *VAR28;
        int VAR29, VAR30;
        int VAR31, VAR32;
        VAR27 = VAR10->VAR15[VAR14];
        VAR29 = VAR10->VAR33[VAR14];
        VAR28 = VAR8->VAR15[VAR14];
        VAR30 = VAR8->VAR33[VAR14];
        if (VAR4->VAR34 & 1)
        {
            VAR28 += VAR8->VAR33[VAR14] * (VAR20 - 1);
            VAR30 *= -1;
        }
        if (VAR4->VAR34 & 2)
        {
            VAR27 += VAR10->VAR33[VAR14] * (VAR25 - 1);
            VAR29 *= -1;
        }
        for (VAR32 = 0; VAR32 < VAR25; VAR32++)
        {
            switch (VAR18)
            {
            case 1:
                for (VAR31 = 0; VAR31 < VAR23; VAR31++)
                    VAR27[VAR31] = VAR28[VAR31 * VAR30 + VAR32];
                break;
            case 2:
                for (VAR31 = 0; VAR31 < VAR23; VAR31++)
                    *((VAR35 *)(VAR27 + 2 * VAR31)) = *((VAR35 *)(VAR28 + VAR31 * VAR30 + VAR32 * 2));
                break;
            case 3:
                for (VAR31 = 0; VAR31 < VAR23; VAR31++)
                {
                    int32_t VAR36 = FUN2(VAR28 + VAR31 * VAR30 + VAR32 * 3);
                    FUN3(VAR27 + 3 * VAR31, VAR36);
                }
                break;
            case 4:
                for (VAR31 = 0; VAR31 < VAR23; VAR31++)
                    *((VAR37 *)(VAR27 + 4 * VAR31)) = *((VAR37 *)(VAR28 + VAR31 * VAR30 + VAR32 * 4));
                break;
            }
            VAR27 += VAR29;
        }
    }
    FUN4(VAR13, 0, VAR10->VAR21->VAR22, 1);
    FUN5(VAR13);
    FUN6(VAR10);
}