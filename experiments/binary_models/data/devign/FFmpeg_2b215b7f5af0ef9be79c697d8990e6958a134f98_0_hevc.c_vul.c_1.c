static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int *VAR9 = FUN2(VAR2->VAR10.VAR11 + 1, sizeof(int));
    int *VAR12 = FUN2(VAR2->VAR10.VAR11 + 1, sizeof(int));
    int VAR13;
    int VAR14, VAR15 = 0;
    int VAR16, VAR17, VAR18 = 0;
    if (!VAR2->VAR19[1])
    {
        FUN3(VAR2->VAR20, VAR2->VAR10.VAR11 + 1);
        for (VAR16 = 1; VAR16 < VAR2->VAR21; VAR16++)
        {
            VAR2->VAR19[VAR16] = FUN4(sizeof(VAR1));
            memcpy(VAR2->VAR19[VAR16], VAR2, sizeof(VAR1));
            VAR2->VAR22[VAR16] = FUN5(sizeof(VAR6));
            VAR2->VAR19[VAR16]->VAR8 = VAR2->VAR22[VAR16];
            VAR13 = (VAR7->VAR23.VAR24 >> 3);
            for (VAR17 = 0, VAR15 = 0, VAR14 = VAR13 + VAR2->VAR10.VAR25[0]; VAR17 < VAR2->VAR26; VAR17++)
            {
                if (VAR2->VAR27[VAR17] >= VAR13 && VAR2->VAR27[VAR17] < VAR14)
                {
                    VAR14--;
                    VAR15++;
                    for (VAR16 = 1; VAR16 < VAR2->VAR10.VAR11; VAR16++)
                    {
                        VAR13 += (VAR2->VAR10.VAR25[VAR16 - 1] - VAR15);
                        for (VAR17 = 0, VAR15 = 0, VAR14 = VAR13 + VAR2->VAR10.VAR25[VAR16]; VAR17 < VAR2->VAR26; VAR17++)
                        {
                            if (VAR2->VAR27[VAR17] >= VAR13 && VAR2->VAR27[VAR17] < VAR14)
                            {
                                VAR14--;
                                VAR15++;
                                VAR2->VAR10.VAR28[VAR16 - 1] = VAR2->VAR10.VAR25[VAR16] - VAR15;
                                VAR2->VAR10.VAR13[VAR16 - 1] = VAR13;
                                if (VAR2->VAR10.VAR11 != 0)
                                {
                                    VAR13 += VAR2->VAR10.VAR25[VAR2->VAR10.VAR11 - 1] - VAR15;
                                    VAR2->VAR10.VAR28[VAR2->VAR10.VAR11 - 1] = VAR5 - VAR13;
                                    VAR2->VAR10.VAR13[VAR2->VAR10.VAR11 - 1] = VAR13;
                                    VAR2->VAR29 = VAR4;
                                    for (VAR16 = 1; VAR16 < VAR2->VAR21; VAR16++)
                                    {
                                        VAR2->VAR19[VAR16]->VAR8->VAR30 = 1;
                                        VAR2->VAR19[VAR16]->VAR8->VAR31 = VAR2->VAR19[0]->VAR8->VAR31;
                                        memcpy(VAR2->VAR19[VAR16], VAR2, sizeof(VAR1));
                                        VAR2->VAR19[VAR16]->VAR8 = VAR2->VAR22[VAR16];
                                        FUN6(&VAR2->VAR32, 0);
                                        FUN7(VAR2->VAR20);
                                        for (VAR16 = 0; VAR16 <= VAR2->VAR10.VAR11; VAR16++)
                                        {
                                            VAR12[VAR16] = VAR16;
                                            VAR9[VAR16] = 0;
                                            if (VAR2->VAR33->VAR34)
                                                VAR2->VAR20->FUN8(VAR2->VAR20, (void *)VAR35, VAR12, VAR9, VAR2->VAR10.VAR11 + 1);
                                            for (VAR16 = 0; VAR16 <= VAR2->VAR10.VAR11; VAR16++)
                                                VAR18 += VAR9[VAR16];
                                            return VAR18