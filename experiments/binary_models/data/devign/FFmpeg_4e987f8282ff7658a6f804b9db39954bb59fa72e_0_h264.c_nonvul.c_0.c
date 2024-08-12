static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *const VAR6 = &VAR2->VAR6;
    VAR7 *VAR8, *VAR9, *VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    const int VAR15 = VAR6->VAR14 + VAR16;
    const int VAR17 = VAR2->VAR18;
    const int VAR19 = VAR2->VAR19;
    if (VAR2->VAR20)
    {
        for (VAR13 = VAR3; VAR13 < VAR4; VAR13++)
        {
            for (VAR14 = VAR15 - VAR16; VAR14 <= VAR15; VAR14++)
            {
                int VAR21, VAR22;
                VAR21 = VAR2->VAR21 = VAR13 + VAR14 * VAR6->VAR23;
                VAR2->VAR24 = VAR2->VAR25[VAR21];
                VAR22 = VAR6->VAR26.VAR22[VAR21];
                VAR2->VAR27 = VAR2->VAR28[VAR21];
                if (VAR16)
                    VAR2->VAR29 = VAR2->VAR30 = !!FUN2(VAR22);
                VAR6->VAR13 = VAR13;
                VAR6->VAR14 = VAR14;
                VAR8 = VAR6->VAR26.VAR31[0] + ((VAR13 << VAR19) + VAR14 * VAR6->VAR11) * 16;
                VAR9 = VAR6->VAR26.VAR31[1] + ((VAR13 << VAR19) + VAR14 * VAR6->VAR12) * 8;
                VAR10 = VAR6->VAR26.VAR31[2] + ((VAR13 << VAR19) + VAR14 * VAR6->VAR12) * 8;
                if (VAR32)
                {
                    VAR11 = VAR2->VAR33 = VAR6->VAR11 * 2;
                    VAR12 = VAR2->VAR34 = VAR6->VAR12 * 2;
                    if (VAR14 & 1)
                    {
                        VAR8 -= VAR6->VAR11 * 15;
                        VAR9 -= VAR6->VAR12 * 7;
                        VAR10 -= VAR6->VAR12 * 7;
                    }
                }
                else
                {
                    VAR11 = VAR2->VAR33 = VAR6->VAR11;
                    VAR12 = VAR2->VAR34 = VAR6->VAR12;
                }
                FUN3(VAR2, VAR8, VAR9, VAR10, VAR11, VAR12, 0);
                if (FUN4(VAR2, VAR22))
                    continue;
                VAR2->VAR35[0] = FUN5(VAR2, 0, VAR6->VAR26.VAR36[VAR21]);
                VAR2->VAR35[1] = FUN5(VAR2, 1, VAR6->VAR26.VAR36[VAR21]);
                if (VAR16)
                {
                    FUN6(VAR2, VAR13, VAR14, VAR8, VAR9, VAR10, VAR11, VAR12);
                }
                else
                {
                    FUN7(VAR2, VAR13, VAR14, VAR8, VAR9, VAR10, VAR11, VAR12);
                }
            }
        }
    }
    VAR2->VAR18 = VAR17;
    VAR6->VAR13 = VAR4;
    VAR6->VAR14 = VAR15 - VAR16;
    VAR2->VAR35[0] = FUN5(VAR2, 0, VAR6->VAR37);
    VAR2->VAR35[1] = FUN5(VAR2, 1, VAR6->VAR37);
}