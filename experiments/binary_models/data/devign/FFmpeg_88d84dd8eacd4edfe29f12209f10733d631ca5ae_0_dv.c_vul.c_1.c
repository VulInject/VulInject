static int FUN1(VAR1 *VAR2, VAR1 *VAR3[4], const VAR4 *VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    uint16_t VAR16, VAR17;
    const VAR1 *VAR18;
    VAR1 *VAR19, VAR20;
    VAR18 = FUN2(VAR2, VAR21);
    if (!VAR18)
        return 0;
    VAR12 = VAR18[1] & 0x3f;
    VAR13 = (VAR18[4] >> 3) & 0x07;
    VAR14 = VAR18[4] & 0x07;
    if (VAR14 > 1)
        return -1;
    VAR6 = (VAR5->VAR22[VAR13] + VAR12) * 4;
    VAR15 = VAR5->VAR23 / 2;
    VAR20 = (VAR5->VAR24 == 720 && !(VAR2[1] & 0x0C)) ? 2 : 0;
    VAR19 = VAR3[VAR20++];
    for (VAR7 = 0; VAR7 < VAR5->VAR25; VAR7++)
    {
        for (VAR8 = 0; VAR8 < VAR5->VAR23; VAR8++)
        {
            VAR2 += 6 * 80;
            if (VAR14 == 1 && VAR8 == VAR15)
            {
                VAR19 = VAR3[VAR20++];
                if (!VAR19)
                    break;
            }
            for (VAR9 = 0; VAR9 < 9; VAR9++)
            {
                for (VAR10 = 8; VAR10 < 80; VAR10 += 2)
                {
                    if (VAR14 == 0)
                    {
                        VAR11 = VAR5->VAR26[VAR8][VAR9] + (VAR10 - 8) / 2 * VAR5->VAR27;
                        if (VAR11 * 2 >= VAR6)
                            continue;
                        VAR19[VAR11 * 2] = VAR2[VAR10 + 1];
                        VAR19[VAR11 * 2 + 1] = VAR2[VAR10];
                        if (VAR19[VAR11 * 2 + 1] == 0x80 && VAR19[VAR11 * 2] == 0x00)
                            VAR19[VAR11 * 2 + 1] = 0;
                    }
                    else
                    {
                        VAR16 = ((VAR28)VAR2[VAR10] << 4) | ((VAR28)VAR2[VAR10 + 2] >> 4);
                        VAR17 = ((VAR28)VAR2[VAR10 + 1] << 4) | ((VAR28)VAR2[VAR10 + 2] & 0x0f);
                        VAR16 = (VAR16 == 0x800 ? 0 : FUN3(VAR16));
                        VAR17 = (VAR17 == 0x800 ? 0 : FUN3(VAR17));
                        VAR11 = VAR5->VAR26[VAR8 % VAR15][VAR9] + (VAR10 - 8) / 3 * VAR5->VAR27;
                        if (VAR11 * 2 >= VAR6)
                            continue;
                        VAR19[VAR11 * 2] = VAR16 & 0xff;
                        VAR19[VAR11 * 2 + 1] = VAR16 >> 8;
                        VAR11 = VAR5->VAR26[VAR8 % VAR15 + VAR15][VAR9] + (VAR10 - 8) / 3 * VAR5->VAR27;
                        VAR19[VAR11 * 2] = VAR17 & 0xff;
                        VAR19[VAR11 * 2 + 1] = VAR17 >> 8;
                        ++VAR10;
                    }
                }
                VAR2 += 16 * 80;
            }
        }
        VAR19 = VAR3[VAR20++];
        if (!VAR19)
            break;
    }
    return VAR6;
}