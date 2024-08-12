int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const VAR7 *VAR8, int VAR9)
{
    uint8_t VAR10 = 0;
    int VAR11;
    int VAR12 = 0;
    int VAR13 = 0;
    int VAR14 = 0;
    int VAR15;
    if (VAR6 != VAR8->VAR16 && VAR8->VAR17)
        VAR10 = FUN2(VAR2);
    if (VAR10)
    {
        const VAR5 *VAR18;
        int VAR19;
        unsigned VAR20;
        uint8_t VAR21 = 0;
        uint8_t VAR22;
        if (VAR9)
        {
            unsigned int VAR23 = FUN3(VAR2) + 1;
            if (VAR23 > VAR8->VAR17)
            { "" , VAR23 , VAR8 -> VAR17 ) ;
                VAR18 = &VAR8->VAR16[VAR8->VAR17 - VAR23];
                VAR6->VAR24 = VAR18->VAR25;
            }
            else
                VAR18 = &VAR8->VAR16[VAR6 - VAR8->VAR16 - 1];
            VAR22 = FUN2(VAR2);
            VAR20 = FUN3(VAR2) + 1;
            if (VAR20 < 1 || VAR20 > 32768)
            { "" , VAR20 ) ;
                VAR19 = (1 - (VAR22 << 1)) * VAR20;
                for (VAR15 = 0; VAR15 <= VAR18->VAR25; VAR15++)
                {
                    int VAR26 = VAR6->VAR26[VAR14] = FUN2(VAR2);
                    if (!VAR26)
                        VAR21 = FUN2(VAR2);
                    if (VAR26 || VAR21)
                    {
                        if (VAR15 < VAR18->VAR25)
                            VAR11 = VAR19 + VAR18->VAR11[VAR15];
                        else
                            VAR11 = VAR19;
                        VAR6->VAR11[VAR14] = VAR11;
                        if (VAR11 < 0)
                            VAR12++;
                        else
                            VAR13++;
                        VAR14++;
                        VAR6->VAR25 = VAR14;
                        VAR6->VAR27 = VAR12;
                        if (VAR6->VAR25 != 0)
                        {
                            int VAR26, VAR28;
                            for (VAR15 = 1; VAR15 < VAR6->VAR25; VAR15++)
                            {
                                VAR11 = VAR6->VAR11[VAR15];
                                VAR26 = VAR6->VAR26[VAR15];
                                for (VAR14 = VAR15 - 1; VAR14 >= 0; VAR14--)
                                {
                                    VAR28 = VAR6->VAR11[VAR14];
                                    if (VAR11 < VAR28)
                                    {
                                        VAR6->VAR11[VAR14 + 1] = VAR28;
                                        VAR6->VAR26[VAR14 + 1] = VAR6->VAR26[VAR14];
                                        VAR6->VAR11[VAR14] = VAR11;
                                        VAR6->VAR26[VAR14] = VAR26;
                                        if ((VAR6->VAR27 >> 1) != 0)
                                        {
                                            int VAR26;
                                            VAR14 = VAR6->VAR27 - 1;
                                            for (VAR15 = 0; VAR15 < VAR6->VAR27 >> 1; VAR15++)
                                            {
                                                VAR11 = VAR6->VAR11[VAR15];
                                                VAR26 = VAR6->VAR26[VAR15];
                                                VAR6->VAR11[VAR15] = VAR6->VAR11[VAR14];
                                                VAR6->VAR26[VAR15] = VAR6->VAR26[VAR14];
                                                VAR6->VAR11[VAR14] = VAR11;
                                                VAR6->VAR26[VAR14] = VAR26;
                                                VAR14--;
                                            }
                                            else
                                            {
                                                unsigned int VAR29, VAR30;
                                                VAR6->VAR27 = FUN3(VAR2);
                                                VAR30 = FUN3(VAR2);
                                                if (VAR6->VAR27 >= VAR31 || VAR30 >= VAR31)
                                                {
                                                    FUN4(VAR4, VAR32, "");
                                                    VAR6->VAR25 = VAR6->VAR27 + VAR30;
                                                    if (VAR6->VAR25)
                                                    {
                                                        VAR29 = 0;
                                                        for (VAR15 = 0; VAR15 < VAR6->VAR27; VAR15++)
                                                        {
                                                            VAR11 = FUN3(VAR2) + 1;
                                                            VAR29 -= VAR11;
                                                            VAR6->VAR11[VAR15] = VAR29;
                                                            VAR6->VAR26[VAR15] = FUN2(VAR2);
                                                            VAR29 = 0;
                                                            for (VAR15 = 0; VAR15 < VAR30; VAR15++)
                                                            {
                                                                VAR11 = FUN3(VAR2) + 1;
                                                                VAR29 += VAR11;
                                                                VAR6->VAR11[VAR6->VAR27 + VAR15] = VAR29;
                                                                VAR6->VAR26[VAR6->VAR27 + VAR15] = FUN2(VAR2);
                                                                return 0