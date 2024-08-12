static void FUN1(VAR1 *VAR2, int VAR3, VAR1 *VAR4, int VAR5, int VAR6, int VAR7, AVRational VAR8, int VAR9, int VAR10, int VAR11, int VAR12, unsigned int VAR13, int VAR14, int VAR15)
{
    int VAR16, VAR17;
    uint64_t VAR18, VAR19, VAR20, VAR21, VAR22;
    VAR1 *VAR23, *VAR24;
    VAR1 *VAR25, *VAR26, *VAR27;
    unsigned int VAR28, VAR29;
    int VAR30, VAR31, VAR32, VAR33;
    int VAR34, VAR35, VAR36, VAR37;
    VAR30 = FUN2(-VAR9, 0);
    VAR31 = FUN2(VAR9 + VAR11 - VAR6, 0);
    VAR32 = FUN2(-VAR10, 0);
    VAR33 = FUN2(VAR10 + VAR12 - VAR7, 0);
    VAR34 = VAR9 + VAR30;
    VAR35 = VAR9 + VAR11 - VAR31;
    VAR36 = VAR10 + VAR32;
    VAR37 = VAR10 + VAR12 - VAR33;
    VAR25 = VAR4 + VAR36 * VAR5 + VAR34;
    VAR27 = VAR4 + VAR36 * VAR5 + VAR35 - 1;
    VAR26 = VAR4 + (VAR37 - 1) * VAR5 + VAR34;
    if (!VAR15)
        FUN3(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7);
    VAR2 += (VAR36 + 1) * VAR3;
    VAR4 += (VAR36 + 1) * VAR5;
    for (VAR17 = VAR36 + 1; VAR17 < VAR37 - 1; VAR17++)
    {
        VAR28 = VAR25[VAR5 * (VAR17 - VAR36)] + VAR25[VAR5 * (VAR17 - VAR36 - 1)] + VAR25[VAR5 * (VAR17 - VAR36 + 1)];
        VAR29 = VAR27[VAR5 * (VAR17 - VAR36)] + VAR27[VAR5 * (VAR17 - VAR36 - 1)] + VAR27[VAR5 * (VAR17 - VAR36 + 1)];
        for (VAR16 = VAR34 + 1, VAR23 = VAR2 + VAR34 + 1, VAR24 = VAR4 + VAR34 + 1; VAR16 < VAR35 - 1; VAR16++, VAR23++, VAR24++)
        {
            VAR19 = (VAR38)(VAR35 - 1 - VAR16) * (VAR17 - VAR36) * (VAR37 - 1 - VAR17) * VAR8.VAR39;
            VAR20 = (VAR38)(VAR16 - VAR34) * (VAR17 - VAR36) * (VAR37 - 1 - VAR17) * VAR8.VAR39;
            VAR21 = (VAR38)(VAR16 - VAR34) * (VAR35 - 1 - VAR16) * (VAR37 - 1 - VAR17) * VAR8.VAR40;
            VAR22 = (VAR38)(VAR16 - VAR34) * (VAR35 - 1 - VAR16) * (VAR17 - VAR36) * VAR8.VAR40;
            VAR18 = VAR28 * VAR19 + VAR29 * VAR20 + (VAR25[VAR16 - VAR34] + VAR25[VAR16 - VAR34 - 1] + VAR25[VAR16 - VAR34 + 1]) * VAR21 + (VAR26[VAR16 - VAR34] + VAR26[VAR16 - VAR34 - 1] + VAR26[VAR16 - VAR34 + 1]) * VAR22;
            VAR18 /= (VAR19 + VAR20 + VAR21 + VAR22) * 3U;
            if (VAR17 >= VAR10 + VAR13 && VAR17 < VAR10 + VAR12 - VAR13 && VAR16 >= VAR9 + VAR13 && VAR16 < VAR9 + VAR11 - VAR13)
            {
                *VAR23 = VAR18;
            }
            else
            {
                unsigned VAR41 = 0;
                if (VAR16 < VAR9 + VAR13)
                    VAR41 = FUN2(VAR41, VAR9 - VAR16 + VAR13);
                else if (VAR16 >= VAR9 + VAR11 - VAR13)
                    VAR41 = FUN2(VAR41, VAR16 - (VAR9 + VAR11 - 1 - VAR13));
                if (VAR17 < VAR10 + VAR13)
                    VAR41 = FUN2(VAR41, VAR10 - VAR17 + VAR13);
                else if (VAR17 >= VAR10 + VAR12 - VAR13)
                    VAR41 = FUN2(VAR41, VAR17 - (VAR10 + VAR12 - 1 - VAR13));
                *VAR23 = (*VAR24 * VAR41 + VAR18 * (VAR13 - VAR41)) / VAR13;
                if (VAR14 && (VAR41 == VAR13 - 1))
                    *VAR23 = 0;
            }
        }
        VAR2 += VAR3;
        VAR4 += VAR5;
    }
}