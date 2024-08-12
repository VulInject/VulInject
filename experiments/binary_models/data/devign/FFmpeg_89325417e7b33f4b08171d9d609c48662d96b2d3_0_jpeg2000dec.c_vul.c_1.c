static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4;
    uint32_t VAR5 = 0;
    const enum VAR6 *VAR7 = NULL;
    int VAR8 = 0;
    if (FUN2(&VAR2->VAR9) < 36)
    {
        FUN3(VAR2->VAR10, VAR11, "");
        VAR2->VAR10->VAR12 = FUN4(&VAR2->VAR9);
        VAR2->VAR13 = FUN5(&VAR2->VAR9);
        VAR2->VAR14 = FUN5(&VAR2->VAR9);
        VAR2->VAR15 = FUN5(&VAR2->VAR9);
        VAR2->VAR16 = FUN5(&VAR2->VAR9);
        VAR2->VAR17 = FUN5(&VAR2->VAR9);
        VAR2->VAR18 = FUN5(&VAR2->VAR9);
        VAR2->VAR19 = FUN5(&VAR2->VAR9);
        VAR2->VAR20 = FUN5(&VAR2->VAR9);
        VAR4 = FUN4(&VAR2->VAR9);
        if (VAR2->VAR15 || VAR2->VAR16)
        {
            FUN6(VAR2->VAR10, "");
            return VAR21;
            if (FUN7(VAR2->VAR13, VAR2->VAR14, 0, VAR2->VAR10))
            {
                FUN6(VAR2->VAR10, "");
                return VAR21;
                if (VAR4 <= 0)
                { FUN3 ( VAR2 -> VAR10 , VAR11 , "" , if ( VAR4 > 4 ) {
                        FUN6(VAR2->VAR10, "", VAR4);
                        return VAR21;
                        VAR2->VAR4 = VAR4;
                        if (VAR2->VAR17 <= 0 || VAR2->VAR18 <= 0)
                        {
                            FUN3(VAR2->VAR10, VAR11, "", VAR2->VAR17, VAR2->VAR18);
                            if (FUN2(&VAR2->VAR9) < 3 * VAR2->VAR4)
                            {
                                FUN3(VAR2->VAR10, VAR11, "", VAR2->VAR4);
                                for (VAR3 = 0; VAR3 < VAR2->VAR4; VAR3++)
                                {
                                    uint8_t VAR22 = FUN8(&VAR2->VAR9);
                                    VAR2->VAR23[VAR3] = (VAR22 & 0x7f) + 1;
                                    VAR2->VAR24 = FUN9(VAR2->VAR23[VAR3], VAR2->VAR24);
                                    VAR2->VAR25[VAR3] = !!(VAR22 & 0x80);
                                    VAR2->VAR26[VAR3] = FUN8(&VAR2->VAR9);
                                    VAR2->VAR27[VAR3] = FUN8(&VAR2->VAR9);
                                    if (!VAR2->VAR26[VAR3] || VAR2->VAR26[VAR3] == 3 || VAR2->VAR26[VAR3] > 4 || !VAR2->VAR27[VAR3] || VAR2->VAR27[VAR3] == 3 || VAR2->VAR27[VAR3] > 4)
                                    {
                                        FUN3(VAR2->VAR10, VAR11, "", VAR2->VAR26[VAR3], VAR2->VAR27[VAR3]);
                                        VAR5 |= VAR2->VAR27[VAR3] >> 1 << VAR3 * 4 | VAR2->VAR26[VAR3] >> 1 << VAR3 * 4 + 2;
                                        VAR2->VAR28 = FUN10(VAR2->VAR13 - VAR2->VAR19, VAR2->VAR17);
                                        VAR2->VAR29 = FUN10(VAR2->VAR14 - VAR2->VAR20, VAR2->VAR18);
                                        if (VAR2->VAR28 * (VAR30)VAR2->VAR29 > VAR31 / sizeof(*VAR2->VAR32))
                                        {
                                            VAR2->VAR28 = VAR2->VAR29 = 0;
                                            return FUN11(VAR33);
                                            VAR2->VAR32 = FUN12(VAR2->VAR28 * VAR2->VAR29, sizeof(*VAR2->VAR32));
                                            if (!VAR2->VAR32)
                                            {
                                                VAR2->VAR28 = VAR2->VAR29 = 0;
                                                return FUN11(VAR34);
                                                for (VAR3 = 0; VAR3 < VAR2->VAR28 * VAR2->VAR29; VAR3++)
                                                {
                                                    VAR35 *VAR32 = VAR2->VAR32 + VAR3;
                                                    VAR32->VAR36 = FUN13(VAR2->VAR4 * sizeof(*VAR32->VAR36));
                                                    if (!VAR32->VAR36)
                                                        return FUN11(VAR34);
                                                    VAR2->VAR10->VAR13 = FUN14(VAR2->VAR13 - VAR2->VAR15, VAR2->VAR37);
                                                    VAR2->VAR10->VAR14 = FUN14(VAR2->VAR14 - VAR2->VAR16, VAR2->VAR37);
                                                    if (VAR2->VAR10->VAR12 == VAR38 || VAR2->VAR10->VAR12 == VAR39)
                                                    {
                                                        VAR7 = VAR40;
                                                        VAR8 = FUN15(VAR40);
                                                    }
                                                    else
                                                    {
                                                        switch (VAR2->VAR41)
                                                        {
                                                        case 16:
                                                            VAR7 = VAR42;
                                                            VAR8 = FUN15(VAR42);
                                                            break;
                                                        case 17:
                                                            VAR7 = VAR43;
                                                            VAR8 = FUN15(VAR43);
                                                            break;
                                                        case 18:
                                                            VAR7 = VAR44;
                                                            VAR8 = FUN15(VAR44);
                                                            break;
                                                        default:
                                                            VAR7 = VAR45;
                                                            VAR8 = FUN15(VAR45);
                                                            break;
                                                            for (VAR3 = 0; VAR3 < VAR8; ++VAR3)
                                                            {
                                                                if (FUN16(VAR7[VAR3], VAR4, VAR2->VAR24, VAR5, VAR2->VAR46))
                                                                {
                                                                    VAR2->VAR10->VAR47 = VAR7[VAR3];
                                                                    break;
                                                                    if (VAR3 == VAR8)
                                                                    {
                                                                        if (VAR4 == 4 && VAR2->VAR27[0] == 1 && VAR2->VAR26[0] == 1 && VAR2->VAR27[1] == 1 && VAR2->VAR26[1] == 1 && VAR2->VAR27[2] == VAR2->VAR27[3] && VAR2->VAR26[2] == VAR2->VAR26[3])
                                                                        {
                                                                            if (VAR2->VAR24 == 8 && VAR2->VAR27[2] == 2 && VAR2->VAR26[2] == 2 && !VAR2->VAR46)
                                                                            {
                                                                                VAR2->VAR10->VAR47 = VAR48;
                                                                                VAR2->VAR49[0] = 0;
                                                                                VAR2->VAR49[1] = 1;
                                                                                VAR2->VAR49[2] = 2;
                                                                                VAR2->VAR49[3] = 3;
                                                                                VAR3 = 0;
                                                                                if (VAR3 == VAR8)
                                                                                {
                                                                                    FUN3(VAR2->VAR10, VAR11, ""
                                                                                                                   ""
                                                                                                                   ""
                                                                                                                   ""
                                                                                                                   ""
                                                                                                                   "",
                                                                                           VAR2->VAR10->VAR12, VAR2->VAR41, VAR4, VAR2->VAR24, VAR2->VAR26[0], VAR2->VAR27[0], VAR4 > 1 ? VAR2->VAR26[1] : 0, VAR4 > 1 ? VAR2->VAR27[1] : 0, VAR4 > 2 ? VAR2->VAR26[2] : 0, VAR4 > 2 ? VAR2->VAR27[2] : 0, VAR4 > 3 ? VAR2->VAR26[3] : 0, VAR4 > 3 ? VAR2->VAR27[3] : 0);
                                                                                    return VAR21;
                                                                                    VAR2->VAR10->VAR50 = VAR2->VAR24;
                                                                                    return 0