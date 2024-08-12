static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    int VAR6, VAR7, VAR8;
    int VAR9 = 0;
    int64_t VAR10 = 0;
    for (VAR8 = 0; VAR8 < 3; VAR8++)
    {
        const int VAR11 = VAR4->VAR12.VAR13[VAR8];
        const int VAR14 = VAR8 ? 1 : 2;
        for (VAR7 = 0; VAR7 < VAR2->VAR15 * VAR14; VAR7++)
        {
            for (VAR6 = 0; VAR6 < VAR2->VAR16 * VAR14; VAR6++)
            {
                int VAR17 = VAR4->VAR18 ? 0 : 16;
                VAR19 *VAR20 = VAR4->VAR12.VAR21[VAR8] + 8 * (VAR6 + VAR7 * VAR11) + VAR17;
                VAR19 *VAR22 = VAR5->VAR12.VAR21[VAR8] + 8 * (VAR6 + VAR7 * VAR11);
                int VAR23 = VAR2->VAR24.VAR25[1](VAR2, VAR20, VAR22, VAR11, 8);
                switch (VAR2->VAR26->VAR27)
                {
                case 0:
                    VAR9 = FUN2(VAR9, VAR23);
                    break;
                case 1:
                    VAR9 += FUN3(VAR23);
                    break;
                case 2:
                    VAR9 += VAR23 * VAR23;
                    break;
                case 3:
                    VAR10 += FUN3(VAR23 * VAR23 * (VAR28)VAR23);
                    break;
                case 4:
                    VAR10 += VAR23 * VAR23 * (VAR28)(VAR23 * VAR23);
                    break;
                }
            }
        }
    }
    if (VAR9)
        VAR10 = VAR9;
    if (VAR10 < VAR2->VAR26->VAR29)
        return 1;
    if (VAR10 < ((VAR2->VAR26->VAR30 * (VAR28)VAR2->VAR31) >> 8))
        return 1;
    return 0;
}