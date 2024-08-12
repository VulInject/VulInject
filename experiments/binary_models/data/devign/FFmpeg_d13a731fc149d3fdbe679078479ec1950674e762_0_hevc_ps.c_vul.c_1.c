int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    uint8_t VAR11 = 0;
    int VAR12;
    int VAR13 = 0;
    int VAR14 = 0;
    int VAR15 = 0;
    int VAR16;
    VAR17 *VAR18 = &VAR9->VAR18;
    if (VAR4 != VAR6->VAR19 && VAR6->VAR20)
        VAR11 = FUN2(VAR18);
    if (VAR11)
    {
        const VAR3 *VAR21;
        int VAR22, VAR23;
        uint8_t VAR24 = 0;
        uint8_t VAR25;
        if (VAR7)
        {
            unsigned int VAR26 = FUN3(VAR18) + 1;
            if (VAR26 > VAR6->VAR20)
            {
                FUN4(VAR2->VAR27, VAR28, "", VAR26, VAR6->VAR20);
                return VAR29;
            }
            VAR21 = &VAR6->VAR19[VAR6->VAR20 - VAR26];
        }
        else
            VAR21 = &VAR6->VAR19[VAR4 - VAR6->VAR19 - 1];
        VAR25 = FUN2(VAR18);
        VAR23 = FUN3(VAR18) + 1;
        VAR22 = (1 - (VAR25 << 1)) * VAR23;
        for (VAR16 = 0; VAR16 <= VAR21->VAR30; VAR16++)
        {
            int VAR31 = VAR4->VAR31[VAR15] = FUN2(VAR18);
            if (!VAR31)
                VAR24 = FUN2(VAR18);
            if (VAR31 || VAR24)
            {
                if (VAR16 < VAR21->VAR30)
                    VAR12 = VAR22 + VAR21->VAR12[VAR16];
                else
                    VAR12 = VAR22;
                VAR4->VAR12[VAR15] = VAR12;
                if (VAR12 < 0)
                    VAR13++;
                else
                    VAR14++;
                VAR15++;
            }
        }
        VAR4->VAR30 = VAR15;
        VAR4->VAR32 = VAR13;
        if (VAR4->VAR30 != 0)
        {
            int VAR31, VAR33;
            for (VAR16 = 1; VAR16 < VAR4->VAR30; VAR16++)
            {
                VAR12 = VAR4->VAR12[VAR16];
                VAR31 = VAR4->VAR31[VAR16];
                for (VAR15 = VAR16 - 1; VAR15 >= 0; VAR15--)
                {
                    VAR33 = VAR4->VAR12[VAR15];
                    if (VAR12 < VAR33)
                    {
                        VAR4->VAR12[VAR15 + 1] = VAR33;
                        VAR4->VAR31[VAR15 + 1] = VAR4->VAR31[VAR15];
                        VAR4->VAR12[VAR15] = VAR12;
                        VAR4->VAR31[VAR15] = VAR31;
                    }
                }
            }
        }
        if ((VAR4->VAR32 >> 1) != 0)
        {
            int VAR31;
            VAR15 = VAR4->VAR32 - 1;
            for (VAR16 = 0; VAR16 < VAR4->VAR32 >> 1; VAR16++)
            {
                VAR12 = VAR4->VAR12[VAR16];
                VAR31 = VAR4->VAR31[VAR16];
                VAR4->VAR12[VAR16] = VAR4->VAR12[VAR15];
                VAR4->VAR31[VAR16] = VAR4->VAR31[VAR15];
                VAR4->VAR12[VAR15] = VAR12;
                VAR4->VAR31[VAR15] = VAR31;
                VAR15--;
            }
        }
    }
    else
    {
        unsigned int VAR34, VAR35;
        VAR4->VAR32 = FUN3(VAR18);
        VAR35 = FUN3(VAR18);
        if (VAR4->VAR32 >= VAR36 || VAR35 >= VAR36)
        {
            FUN4(VAR2->VAR27, VAR28, "");
            return VAR29;
        }
        VAR4->VAR30 = VAR4->VAR32 + VAR35;
        if (VAR4->VAR30)
        {
            VAR34 = 0;
            for (VAR16 = 0; VAR16 < VAR4->VAR32; VAR16++)
            {
                VAR12 = FUN3(VAR18) + 1;
                VAR34 -= VAR12;
                VAR4->VAR12[VAR16] = VAR34;
                VAR4->VAR31[VAR16] = FUN2(VAR18);
            }
            VAR34 = 0;
            for (VAR16 = 0; VAR16 < VAR35; VAR16++)
            {
                VAR12 = FUN3(VAR18) + 1;
                VAR34 += VAR12;
                VAR4->VAR12[VAR4->VAR32 + VAR16] = VAR34;
                VAR4->VAR31[VAR4->VAR32 + VAR16] = FUN2(VAR18);
            }
        }
    }
    return 0;
}