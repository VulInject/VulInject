static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, const int VAR5, VAR6 *VAR7)
{
    int VAR8, VAR9, VAR10, VAR11;
    int VAR12;
    const VAR3 *VAR13;
    VAR8 = FUN2(VAR4);
    FUN3(VAR7, "", VAR8);
    if (VAR8 > VAR5)
    {
        FUN4(VAR7, VAR14, "");
        VAR12 = FUN2(VAR4 + 2);
        FUN3(VAR7, "", VAR4 + 4, VAR12);
        if (VAR12 > 1)
        {
            FUN4(VAR7, VAR14, "", VAR12);
            VAR9 = FUN2(VAR4 + 8);
            VAR10 = FUN2(VAR4 + 10);
            if (VAR9 != VAR7->VAR9 || VAR10 != VAR7->VAR10)
            {
                FUN4(VAR7, VAR14, "", VAR7->VAR9, VAR7->VAR10, VAR9, VAR10);
                VAR2->VAR15 = (VAR4[12] >> 2) & 3;
                FUN3(VAR7, "", VAR2->VAR15);
                if (VAR2->VAR15 == 0)
                {
                    VAR2->VAR16 = VAR2->VAR17;
                }
                else
                {
                    VAR2->VAR16 = VAR2->VAR18;
                    VAR2->VAR19.VAR20 = 1;
                    VAR2->VAR19.VAR21 = VAR2->VAR15 == 1;
                    VAR7->VAR22 = (VAR4[12] & 0xC0) == 0xC0 ? VAR23 : VAR24;
                    VAR13 = VAR4 + 20;
                    VAR11 = VAR4[19];
                    FUN3(VAR7, "", VAR11);
                    if (VAR11 & 2)
                    {
                        FUN5(VAR2->VAR25, VAR2->VAR26.VAR27, VAR13);
                        VAR13 += 64;
                    }
                    else
                    {
                        memset(VAR2->VAR25, 4, 64);
                        if (VAR11 & 1)
                        {
                            FUN5(VAR2->VAR28, VAR2->VAR26.VAR27, VAR13);
                        }
                        else
                        {
                            memset(VAR2->VAR28, 4, 64);
                            return VAR8;