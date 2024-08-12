static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR11;
    GetByteContext VAR12;
    VAR13 *VAR14 = VAR3;
    const VAR15 *VAR16, *VAR17;
    VAR15 *VAR18 = NULL;
    int VAR19, VAR20, VAR21 = 0;
    int VAR22, VAR23 = 0;
    FUN2(VAR11, VAR6->VAR3, VAR6->VAR24);
    if (FUN3(VAR11) < 12)
    {
        FUN4(VAR2, VAR25, "", VAR6->VAR24);
        return VAR26;
        VAR19 = FUN5(VAR11);
        FUN6(&VAR8->VAR27, &VAR8->VAR28, VAR19 * sizeof(*VAR8->VAR27));
        if (!VAR8->VAR27)
        {
            VAR23 = FUN7(VAR29);
            FUN4(VAR2, VAR30, "", VAR19);
            if (VAR19 > 5)
            {
                uLongf VAR31;
                if (VAR19 < 32)
                    VAR31 = FUN8(VAR11);
                else
                    VAR31 = FUN5(VAR11);
                FUN9(VAR2, "", VAR31);
                if (VAR31 != VAR19 * VAR32)
                {
                    uLongf VAR33 = VAR19 * VAR32;
                    VAR18 = FUN10(VAR33);
                    if (!VAR18)
                    {
                        VAR23 = FUN7(VAR29);
                        VAR23 = FUN11(VAR18, &VAR33, VAR11->VAR34, VAR31);
                        if (VAR23)
                        {
                            FUN4(VAR2, VAR25, "", VAR23);
                            VAR23 = VAR35;
                            FUN12(VAR11, VAR31);
                            FUN2(&VAR12, VAR18, VAR33);
                            VAR11 = &VAR12;
                            for (VAR22 = 0; VAR22 < VAR19; VAR22++)
                            {
                                VAR8->VAR27[VAR22].VAR36 = FUN5(VAR11);
                                VAR8->VAR27[VAR22].VAR37 = FUN5(VAR11);
                                VAR8->VAR27[VAR22].VAR38 = FUN5(VAR11);
                                VAR8->VAR27[VAR22].VAR39 = FUN5(VAR11);
                                VAR21 += VAR8->VAR27[VAR22].VAR37 * VAR8->VAR27[VAR22].VAR39 * VAR8->VAR40;
                                FUN9(VAR2, "", VAR22, VAR8->VAR27[VAR22].VAR36, VAR8->VAR27[VAR22].VAR38, VAR8->VAR27[VAR22].VAR37, VAR8->VAR27[VAR22].VAR39);
                                if (VAR8->VAR27[VAR22].VAR37 == 0 || VAR8->VAR27[VAR22].VAR39 == 0)
                                {
                                    FUN4(VAR2, VAR25, "", VAR22, VAR8->VAR27[VAR22].VAR36, VAR8->VAR27[VAR22].VAR38, VAR8->VAR27[VAR22].VAR37, VAR8->VAR27[VAR22].VAR39);
                                }
                                else if (VAR8->VAR27[VAR22].VAR36 + VAR8->VAR27[VAR22].VAR37 > VAR2->VAR41 || VAR8->VAR27[VAR22].VAR38 + VAR8->VAR27[VAR22].VAR39 > VAR2->VAR42)
                                {
                                    FUN4(VAR2, VAR25, "", VAR22, VAR8->VAR27[VAR22].VAR36, VAR8->VAR27[VAR22].VAR38, VAR8->VAR27[VAR22].VAR37, VAR8->VAR27[VAR22].VAR39);
                                    VAR11 = &VAR8->VAR11;
                                    if (VAR21 < 0x100)
                                        VAR20 = FUN8(VAR11);
                                    else if (VAR21 < 0x10000)
                                        VAR20 = FUN5(VAR11);
                                    else if (VAR21 < 0x1000000)
                                        VAR20 = FUN13(VAR11);
                                    else
                                        VAR20 = FUN14(VAR11);
                                    FUN9(VAR2, "", VAR21, VAR20);
                                    if (VAR20 < 0)
                                    {
                                        FUN4(VAR2, VAR25, "", VAR20);
                                        if (VAR21 == VAR20)
                                        {
                                            if (FUN3(VAR11) < VAR21)
                                            {
                                                FUN4(VAR2, VAR25, "", VAR21);
                                                VAR16 = VAR11->VAR34;
                                            }
                                            else
                                            {
                                                uLongf VAR43 = VAR8->VAR44;
                                                VAR23 = FUN11(VAR8->VAR45, &VAR43, VAR11->VAR34, VAR20);
                                                if (VAR23)
                                                {
                                                    FUN4(VAR2, VAR25, "", VAR23);
                                                    VAR23 = VAR35;
                                                    VAR16 = VAR8->VAR45;
                                                    VAR23 = FUN15(VAR2, VAR8->VAR46);
                                                    if (VAR23 < 0)
                                                        VAR17 = VAR16;
                                                    for (VAR22 = 0; VAR22 < VAR19; VAR22++)
                                                    {
                                                        VAR15 *VAR47 = VAR8->VAR46->VAR3[0] + VAR8->VAR46->VAR48[0] * (VAR2->VAR42 - VAR8->VAR27[VAR22].VAR38 - 1) + VAR8->VAR27[VAR22].VAR36 * VAR8->VAR40;
                                                        FUN16(VAR47, -1 * VAR8->VAR46->VAR48[0], VAR17, VAR8->VAR27[VAR22].VAR37 * VAR8->VAR40, VAR8->VAR27[VAR22].VAR37 * VAR8->VAR40, VAR8->VAR27[VAR22].VAR39);
                                                        VAR17 += VAR8->VAR27[VAR22].VAR37 * VAR8->VAR40 * VAR8->VAR27[VAR22].VAR39;
                                                        VAR23 = FUN17(VAR14, VAR8->VAR46);
                                                        if (VAR23 < 0)
                                                            if (VAR21 == VAR8->VAR44)
                                                            {
                                                                VAR14->VAR49 = VAR50;
                                                                VAR14->VAR51 = 1;
                                                            }
                                                            else
                                                            {
                                                                VAR14->VAR49 = VAR52;
                                                                *VAR4 = 1;
                                                            VAR53:
                                                                FUN18(VAR18);
                                                                return VAR23;