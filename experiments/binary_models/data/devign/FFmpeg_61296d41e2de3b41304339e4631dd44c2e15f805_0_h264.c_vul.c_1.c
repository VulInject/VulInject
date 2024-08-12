int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    int VAR5, VAR6;
    VAR2->VAR7 = 0;
    VAR2->VAR8 = 0;
    VAR2->VAR9 = FUN2(&VAR2->VAR10);
    if (VAR2->VAR11.VAR12)
        VAR2->VAR13 = FUN2(&VAR2->VAR10);
    VAR5 = 1 << VAR2->VAR9;
    VAR6 = 1 << VAR2->VAR13;
    for (VAR3 = 0; VAR3 < 2; VAR3++)
    {
        VAR2->VAR14[VAR3] = 0;
        VAR2->VAR15[VAR3] = 0;
        for (VAR4 = 0; VAR4 < VAR2->VAR16[VAR3]; VAR4++)
        {
            int VAR14, VAR15;
            VAR14 = FUN3(&VAR2->VAR10);
            if (VAR14)
            {
                VAR2->VAR17[VAR4][VAR3][0] = FUN4(&VAR2->VAR10);
                VAR2->VAR17[VAR4][VAR3][1] = FUN4(&VAR2->VAR10);
                if (VAR2->VAR17[VAR4][VAR3][0] != VAR5 || VAR2->VAR17[VAR4][VAR3][1] != 0)
                {
                    VAR2->VAR7 = 1;
                    VAR2->VAR14[VAR3] = 1;
                }
                else
                {
                    VAR2->VAR17[VAR4][VAR3][0] = VAR5;
                    VAR2->VAR17[VAR4][VAR3][1] = 0;
                    if (VAR2->VAR11.VAR12)
                    {
                        VAR15 = FUN3(&VAR2->VAR10);
                        if (VAR15)
                        {
                            int VAR18;
                            for (VAR18 = 0; VAR18 < 2; VAR18++)
                            {
                                VAR2->VAR19[VAR4][VAR3][VAR18][0] = FUN4(&VAR2->VAR10);
                                VAR2->VAR19[VAR4][VAR3][VAR18][1] = FUN4(&VAR2->VAR10);
                                if (VAR2->VAR19[VAR4][VAR3][VAR18][0] != VAR6 || VAR2->VAR19[VAR4][VAR3][VAR18][1] != 0)
                                {
                                    VAR2->VAR8 = 1;
                                    VAR2->VAR15[VAR3] = 1;
                                }
                                else
                                {
                                    int VAR18;
                                    for (VAR18 = 0; VAR18 < 2; VAR18++)
                                    {
                                        VAR2->VAR19[VAR4][VAR3][VAR18][0] = VAR6;
                                        VAR2->VAR19[VAR4][VAR3][VAR18][1] = 0;
                                        if (VAR2->VAR20 != VAR21)
                                            break;
                                        VAR2->VAR7 = VAR2->VAR7 || VAR2->VAR8;
                                        return 0