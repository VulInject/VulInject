static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    int VAR6, VAR7, VAR8;
    int VAR9 = 0;
    int64_t VAR10 = 0;
    for (VAR8 = 0; VAR8 < 3; VAR8++)
    {
        const int VAR11 = VAR4->VAR12[VAR8];
        const int VAR13 = VAR8 ? 1 : 2;
        for (VAR7 = 0; VAR7 < VAR2->VAR14 * VAR13; VAR7++)
        {
            for (VAR6 = 0; VAR6 < VAR2->VAR15 * VAR13; VAR6++)
            {
                int VAR16 = VAR4->VAR17 == VAR18 ? 0 : 16;
                int VAR19 = VAR2->VAR20.VAR21[1](VAR2, VAR4->VAR22[VAR8] + 8 * (VAR6 + VAR7 * VAR11) + VAR16, VAR5->VAR22[VAR8] + 8 * (VAR6 + VAR7 * VAR11), VAR11, 8);
                switch (VAR2->VAR23->VAR24)
                {
                case 0:
                    VAR9 = FUN2(VAR9, VAR19);
                    break;
                case 1:
                    VAR9 += FUN3(VAR19);
                    break;
                case 2:
                    VAR9 += VAR19 * VAR19;
                    break;
                case 3:
                    VAR10 += FUN3(VAR19 * VAR19 * (VAR25)VAR19);
                    break;
                case 4:
                    VAR10 += VAR19 * VAR19 * (VAR25)(VAR19 * VAR19);
                    break;
                }
            }
        }
    }
    if (VAR9)
        VAR10 = VAR9;
    if (VAR10 < VAR2->VAR23->VAR26)
        return 1;
    if (VAR10 < ((VAR2->VAR23->VAR27 * (VAR25)VAR2->VAR28) >> 8))
        return 1;
    return 0;
}