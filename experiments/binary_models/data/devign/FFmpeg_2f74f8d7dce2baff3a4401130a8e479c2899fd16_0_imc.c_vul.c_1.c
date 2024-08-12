static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6;
    int VAR7, VAR8, VAR9, VAR10;
    int VAR11;
    int VAR12, VAR13;
    int VAR14, VAR15;
    VAR16 *VAR17 = VAR4->VAR17 + VAR5;
    VAR7 = FUN2(&VAR4->VAR18, 9);
    if (VAR7 & 0x18)
    {
        FUN3(VAR2, VAR19, "");
        FUN3(VAR2, VAR19, "", VAR7);
        VAR6 = FUN2(&VAR4->VAR18, 3);
        if (VAR6 & 1)
        {
            FUN4(VAR2, "", VAR6);
            return VAR20;
            if (VAR6 & 0x04)
                VAR17->VAR21 = 1;
            if (VAR17->VAR21)
            {
                for (VAR8 = 0; VAR8 < VAR22; VAR8++)
                    VAR17->VAR23[VAR8] = 1.0;
                for (VAR8 = 0; VAR8 < VAR24; VAR8++)
                    VAR17->VAR25[VAR8] = 0;
                VAR17->VAR21 = 0;
                VAR11 = FUN5(&VAR4->VAR18);
                FUN6(VAR4, VAR6, VAR17->VAR26);
                if (VAR6 & 0x4)
                    FUN7(VAR4, VAR17->VAR26, VAR17->VAR27, VAR17->VAR28);
                else
                    FUN8(VAR4, VAR17->VAR26, VAR17->VAR23, VAR17->VAR27, VAR17->VAR28);
                memcpy(VAR17->VAR23, VAR17->VAR27, 32 * sizeof(float));
                VAR14 = 0;
                for (VAR8 = 0; VAR8 < VAR22; VAR8++)
                {
                    if (VAR17->VAR26[VAR8] == 16)
                    {
                        VAR17->VAR29[VAR8] = 0;
                        VAR14++;
                    }
                    else
                        VAR17->VAR29[VAR8] = VAR30[VAR8 + 1] - VAR30[VAR8];
                    memset(VAR17->VAR31, 0, VAR22 * sizeof(int));
                    for (VAR8 = 0; VAR8 < VAR22 - 1; VAR8++)
                    {
                        if (VAR17->VAR29[VAR8])
                            VAR17->VAR31[VAR8] = FUN5(&VAR4->VAR18);
                        FUN9(VAR4, VAR17->VAR27, VAR17->VAR28, VAR17->VAR29, VAR17->VAR32, VAR17->VAR33);
                        VAR15 = 0;
                        if (VAR6 & 0x2)
                        {
                            VAR15 += 15;
                            VAR17->VAR34[0] = 5;
                            VAR17->VAR35[0] = 5;
                            VAR17->VAR35[1] = 5;
                            VAR17->VAR35[2] = 5;
                            for (VAR8 = 1; VAR8 < 4; VAR8++)
                            {
                                VAR12 = (VAR17->VAR26[VAR8] == 16) ? 0 : 5;
                                VAR17->VAR34[VAR8] = VAR12;
                                for (VAR9 = VAR30[VAR8]; VAR9 < VAR30[VAR8 + 1]; VAR9++)
                                {
                                    VAR17->VAR35[VAR9] = VAR12;
                                    VAR15 += VAR12;
                                    if (VAR2->VAR36 == VAR37)
                                    {
                                        VAR15 += !!VAR17->VAR29[VAR22 - 1];
                                        if (!(VAR6 & 0x2))
                                            VAR15 += 16;
                                        if ((VAR10 = FUN10(VAR4, VAR17, VAR6, 512 - VAR15 - FUN11(&VAR4->VAR18), VAR11)) < 0)
                                        {
                                            FUN3(VAR2, VAR19, "");
                                            VAR17->VAR21 = 1;
                                            return VAR10;
                                            for (VAR8 = 0; VAR8 < VAR22; VAR8++)
                                            {
                                                VAR17->VAR38[VAR8] = 0;
                                                VAR17->VAR39[VAR8] = 0;
                                                for (VAR9 = VAR30[VAR8]; VAR9 < VAR30[VAR8 + 1]; VAR9++)
                                                    VAR17->VAR38[VAR8] += VAR17->VAR35[VAR9];
                                                if (VAR17->VAR31[VAR8])
                                                    if ((((VAR30[VAR8 + 1] - VAR30[VAR8]) * 1.5) > VAR17->VAR38[VAR8]) && (VAR17->VAR38[VAR8] > 0))
                                                        VAR17->VAR39[VAR8] = 1;
                                                FUN12(VAR4, VAR17);
                                                for (VAR8 = 0; VAR8 < VAR22; VAR8++)
                                                {
                                                    VAR17->VAR40[VAR8] = VAR17->VAR27[VAR8];
                                                    if (VAR17->VAR31[VAR8] && (VAR30[VAR8 + 1] - VAR30[VAR8]) != VAR17->VAR41[VAR8])
                                                    {
                                                        VAR17->VAR40[VAR8] *= VAR4->VAR42[VAR30[VAR8 + 1] - VAR30[VAR8]] / VAR4->VAR42[(VAR30[VAR8 + 1] - VAR30[VAR8] - VAR17->VAR41[VAR8])];
                                                        VAR12 = VAR13 = 0;
                                                        for (VAR8 = 0; VAR8 < VAR22; VAR8++)
                                                        {
                                                            if (VAR17->VAR31[VAR8])
                                                            {
                                                                for (VAR9 = VAR30[VAR8]; VAR9 < VAR30[VAR8 + 1]; VAR9++)
                                                                {
                                                                    if (VAR17->VAR43[VAR9])
                                                                    {
                                                                        VAR13 += VAR17->VAR35[VAR9];
                                                                        VAR17->VAR35[VAR9] = 0;
                                                                        VAR12 += VAR17->VAR44[VAR8];
                                                                        VAR13 -= VAR17->VAR44[VAR8];
                                                                        FUN13(VAR4, VAR17, VAR13);
                                                                        for (VAR8 = 0; VAR8 < VAR22; VAR8++)
                                                                        {
                                                                            VAR17->VAR38[VAR8] = 0;
                                                                            for (VAR9 = VAR30[VAR8]; VAR9 < VAR30[VAR8 + 1]; VAR9++)
                                                                                if (!VAR17->VAR43[VAR9])
                                                                                    VAR17->VAR38[VAR8] += VAR17->VAR35[VAR9];
                                                                            memset(VAR17->VAR45, 0, sizeof(VAR17->VAR45));
                                                                            if (FUN14(VAR4, VAR17) < 0)
                                                                            {
                                                                                FUN3(VAR2, VAR19, "");
                                                                                VAR17->VAR21 = 1;
                                                                                if (FUN15(VAR4, VAR17, VAR6) < 0)
                                                                                {
                                                                                    FUN3(VAR2, VAR19, "");
                                                                                    VAR17->VAR21 = 1;
                                                                                    memset(VAR17->VAR43, 0, sizeof(VAR17->VAR43));
                                                                                    FUN16(VAR4, VAR17, VAR2->VAR46);
                                                                                    return 0