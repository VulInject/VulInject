static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    uint64_t VAR11, VAR12, VAR13, VAR14;
    uint32_t VAR15, VAR16;
    uint32_t VAR17 = 1, VAR18 = 1, VAR19;
    int64_t VAR20;
    int VAR21;
    VAR2->VAR22 = 1;
    VAR9->VAR23 = 0;
    VAR9->VAR24 = VAR9->VAR25 = VAR9->VAR26 = VAR9->VAR27 = NULL;
    VAR20 = FUN2(VAR2->VAR28);
    if (VAR20 < 0)
    {
        VAR21 = VAR20;
        VAR20 -= 0x1d8;
        VAR21 = FUN3(VAR2, VAR20, &VAR11);
        if (VAR21 < 0)
        {
        }
        else if (VAR11 == 0)
        {
            VAR21 = FUN4(VAR2, VAR11, &VAR16);
            if (VAR21 < 0)
            {
            }
            else if (VAR16 != 0x100)
            {
                VAR21 = FUN4(VAR2, VAR11 + 4, &VAR15);
                if (VAR21 < 0)
                {
                }
                else if (VAR15 == 0)
                {
                    VAR12 = VAR11 + VAR15;
                    VAR20 = VAR11 + 0x100;
                    VAR13 = VAR14 = 0;
                    while (VAR20 < VAR12)
                    {
                        uint32_t VAR29;
                        VAR21 = FUN4(VAR2, VAR20, &VAR15);
                        if (VAR21 < 0)
                        {
                        }
                        else if (VAR15 == 0)
                        {
                            VAR20 += 4;
                            VAR21 = FUN4(VAR2, VAR20, &VAR29);
                            if (VAR21 < 0)
                            {
                                if (VAR29 == 0x6d697368 && VAR15 >= 244)
                                {
                                    size_t VAR30;
                                    uint32_t VAR31;
                                    VAR20 += 4;
                                    VAR20 += 200;
                                    VAR31 = (VAR15 - 204) / 40;
                                    VAR30 = sizeof(VAR32) * (VAR9->VAR23 + VAR31);
                                    VAR9->VAR33 = FUN5(VAR9->VAR33, VAR30 / 2);
                                    VAR9->VAR24 = FUN5(VAR9->VAR24, VAR30);
                                    VAR9->VAR25 = FUN5(VAR9->VAR25, VAR30);
                                    VAR9->VAR26 = FUN5(VAR9->VAR26, VAR30);
                                    VAR9->VAR27 = FUN5(VAR9->VAR27, VAR30);
                                    for (VAR19 = VAR9->VAR23; VAR19 < VAR9->VAR23 + VAR31; VAR19++)
                                    {
                                        VAR21 = FUN4(VAR2, VAR20, &VAR9->VAR33[VAR19]);
                                        if (VAR21 < 0)
                                        {
                                            VAR20 += 4;
                                            if (VAR9->VAR33[VAR19] != 0x80000005 && VAR9->VAR33[VAR19] != 1 && VAR9->VAR33[VAR19] != 2)
                                            {
                                                if (VAR9->VAR33[VAR19] == 0xffffffff && VAR19 > 0)
                                                {
                                                    VAR13 = VAR9->VAR24[VAR19 - 1] + VAR9->VAR25[VAR19 - 1];
                                                    VAR14 = VAR9->VAR26[VAR19 - 1] + VAR9->VAR27[VAR19 - 1];
                                                    VAR31--;
                                                    VAR19--;
                                                    VAR20 += 36;
                                                    continue;
                                                    VAR20 += 4;
                                                    VAR21 = FUN3(VAR2, VAR20, &VAR9->VAR26[VAR19]);
                                                    if (VAR21 < 0)
                                                    {
                                                        VAR9->VAR26[VAR19] += VAR14;
                                                        VAR20 += 8;
                                                        VAR21 = FUN3(VAR2, VAR20, &VAR9->VAR27[VAR19]);
                                                        if (VAR21 < 0)
                                                        {
                                                            VAR20 += 8;
                                                            if (VAR9->VAR27[VAR19] > VAR34)
                                                            {
                                                                FUN6("" VAR35 ""
                                                                             "",
                                                                             VAR9->VAR27[VAR19], VAR19, VAR34);
                                                                VAR21 = FUN3(VAR2, VAR20, &VAR9->VAR24[VAR19]);
                                                                if (VAR21 < 0)
                                                                {
                                                                    VAR9->VAR24[VAR19] += VAR13;
                                                                    VAR20 += 8;
                                                                    VAR21 = FUN3(VAR2, VAR20, &VAR9->VAR25[VAR19]);
                                                                    if (VAR21 < 0)
                                                                    {
                                                                        VAR20 += 8;
                                                                        if (VAR9->VAR25[VAR19] > VAR17)
                                                                        {
                                                                            VAR17 = VAR9->VAR25[VAR19];
                                                                            if (VAR9->VAR27[VAR19] > VAR18)
                                                                            {
                                                                                VAR18 = VAR9->VAR27[VAR19];
                                                                                VAR9->VAR23 += VAR31;
                                                                                VAR9->VAR36 = FUN7(VAR17 + 1);
                                                                                VAR9->VAR37 = FUN7(512 * VAR18);
                                                                                if (FUN8(&VAR9->VAR38) != VAR39)
                                                                                {
                                                                                    VAR9->VAR40 = VAR9->VAR23;
                                                                                    FUN9(&VAR9->VAR41);
                                                                                    return 0;
                                                                                VAR42:
                                                                                    FUN10(VAR9->VAR33);
                                                                                    FUN10(VAR9->VAR24);
                                                                                    FUN10(VAR9->VAR25);
                                                                                    FUN10(VAR9->VAR26);
                                                                                    FUN10(VAR9->VAR27);
                                                                                    FUN10(VAR9->VAR36);
                                                                                    FUN10(VAR9->VAR37);
                                                                                    return VAR21