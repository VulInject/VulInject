int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, unsigned char *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR8;
    unsigned long VAR9;
    int VAR10, VAR11, VAR12;
    VAR10 = 0;
    VAR12 = -1;
    VAR11 = -1;
    VAR9 = 0;
    while (VAR9 < VAR5)
    {
        VAR10 = FUN2(VAR4, VAR2->VAR13);
        switch (VAR10)
        {
        case VAR14:
        case VAR15:
            FUN3(VAR2);
            VAR12 = -1;
            VAR11 = -1;
            break;
        case VAR16:
            VAR2->VAR17 = 1;
            break;
        default:
            if (VAR10 > VAR2->VAR18)
            {
                FUN4(VAR2->VAR19, VAR20, "", VAR10, VAR2->VAR18);
                if (VAR10 == (int)VAR2->VAR21)
                {
                    ++VAR2->VAR13;
                    VAR2->VAR18 *= 2;
                    VAR2->VAR21 = VAR2->VAR18 - 1;
                }
                else
                {
                    if (VAR10 >= VAR2->VAR22)
                    {
                        int VAR23 = FUN5(VAR2, &VAR6[VAR9], VAR11, &VAR12, VAR5 - VAR9);
                        if (VAR23 < 0 || VAR23 > VAR5 - VAR9)
                        {
                            FUN4(VAR2->VAR19, VAR20, "");
                            VAR9 += VAR23;
                            VAR23 = FUN5(VAR2, &VAR6[VAR9], VAR12, &VAR12, VAR5 - VAR9);
                            if (VAR23 < 0 || VAR23 > VAR5 - VAR9)
                            {
                                FUN4(VAR2->VAR19, VAR20, "");
                                VAR9 += VAR23;
                                FUN6(VAR8, VAR2->VAR22, VAR11, VAR12);
                                VAR2->VAR22++;
                            }
                            else
                            {
                                int VAR23 = FUN5(VAR2, &VAR6[VAR9], VAR10, &VAR12, VAR5 - VAR9);
                                if (VAR23 < 0 || VAR23 > VAR5 - VAR9)
                                {
                                    FUN4(VAR2->VAR19, VAR20, "");
                                    VAR9 += VAR23;
                                    if (VAR9 <= VAR5 && !VAR2->VAR17)
                                    {
                                        if (VAR11 != -1)
                                        {
                                            FUN6(VAR8, VAR2->VAR22, VAR11, VAR12);
                                            VAR2->VAR22++;
                                        }
                                        else
                                        {
                                            break;
                                            VAR11 = VAR10;
                                            break;