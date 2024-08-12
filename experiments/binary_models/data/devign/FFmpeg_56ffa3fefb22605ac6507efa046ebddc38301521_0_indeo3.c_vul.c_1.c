static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, const VAR9 *VAR10, const VAR9 *VAR11)
{
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    int VAR19;
    int VAR20, VAR21 = 0, VAR22[2];
    uint8_t VAR23, *VAR24, *VAR25 = 0;
    const VAR26 *VAR27[2];
    const VAR9 *VAR28 = VAR10;
    VAR23 = *VAR10++;
    VAR15 = VAR23 >> 4;
    VAR16 = VAR23 & 0xF;
    VAR20 = (VAR8->VAR29 << 2) * VAR6->VAR30 + (VAR8->VAR31 << 2);
    VAR24 = VAR6->VAR32[VAR2->VAR33] + VAR20;
    if (!VAR8->VAR34)
    {
        VAR25 = VAR24 - VAR6->VAR30;
    }
    else if (VAR15 >= 10)
    {
        FUN2(VAR2, VAR6, VAR8);
    }
    else
    {
        VAR14 = VAR8->VAR34[0];
        VAR13 = VAR8->VAR34[1];
        VAR20 += VAR14 * VAR6->VAR30 + VAR13;
        VAR25 = VAR6->VAR32[VAR2->VAR33 ^ 1] + VAR20;
        if (VAR15 == 1 || VAR15 == 4)
        {
            VAR23 = VAR2->VAR35[VAR16];
            VAR17 = (VAR23 >> 4) + VAR2->VAR36;
            VAR18 = (VAR23 & 0xF) + VAR2->VAR36;
        }
        else
        {
            VAR16 += VAR2->VAR36;
            VAR17 = VAR18 = VAR16;
            if (VAR17 >= 24 || VAR18 >= 24)
            {
                FUN3(VAR4, VAR37, "", VAR17, VAR18);
                VAR27[0] = &VAR38[VAR18];
                VAR27[1] = &VAR38[VAR17];
                VAR22[0] = VAR18 >= 16;
                VAR22[1] = VAR17 >= 16;
                if (VAR16 >= 8 && VAR25)
                {
                    for (VAR12 = 0; VAR12 < VAR8->VAR39 << 2; VAR12++)
                        VAR25[VAR12] = VAR40[VAR16 & 7][VAR25[VAR12]];
                    VAR21 = VAR41;
                    switch (VAR15)
                    {
                    case 0:
                    case 1:
                    case 3:
                    case 4:
                        if (VAR15 >= 3 && VAR8->VAR34)
                        {
                            FUN3(VAR4, VAR37, "");
                            VAR19 = VAR15 >= 3;
                            VAR21 = FUN4(VAR8, VAR24, VAR25, VAR6->VAR30, 0, VAR19, VAR15, VAR27, VAR22, &VAR10, VAR11);
                            break;
                        case 10:
                        case 11:
                            if (VAR15 == 10 && !VAR8->VAR34)
                            {
                                VAR21 = FUN4(VAR8, VAR24, VAR25, VAR6->VAR30, 1, 1, VAR15, VAR27, VAR22, &VAR10, VAR11);
                            }
                            else
                            {
                                if (VAR15 == 11 && !VAR8->VAR34)
                                {
                                    FUN3(VAR4, VAR37, "");
                                    VAR19 = VAR15 == 10;
                                    VAR21 = FUN4(VAR8, VAR24, VAR25, VAR6->VAR30, VAR19, 1, VAR15, VAR27, VAR22, &VAR10, VAR11);
                                    break;
                                default:
                                    FUN3(VAR4, VAR37, "", VAR15);
                                }
                                switch (VAR21)
                                {
                                case VAR42:
                                    FUN3(VAR4, VAR37, "", VAR15, VAR10[-1]);
                                case VAR43:
                                    FUN3(VAR4, VAR37, "", VAR15);
                                case VAR44:
                                    FUN3(VAR4, VAR37, "", VAR15, VAR23);
                                case VAR45:
                                    FUN3(VAR4, VAR37, "", VAR15, VAR10[-1]);
                                case VAR46:
                                    FUN3(VAR4, VAR37, "", VAR15);
                                    return VAR10 - VAR28;