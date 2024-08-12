static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9 = VAR5;
    int VAR10, VAR11;
    uint32_t VAR12;
    const VAR3 *VAR13 = VAR4;
    uint8_t VAR14;
    int VAR15;
    do
    {
        if (VAR7->VAR16)
        {
            int VAR17 = FUN2(VAR7->VAR16, VAR9);
            VAR13 += VAR17;
            VAR9 -= VAR17;
            VAR7->VAR16 -= VAR17;
            continue;
            if (VAR7->VAR18 < 11)
            {
                const VAR3 *VAR19 = VAR7->VAR20;
                int copy = FUN2(11 - VAR7->VAR18, VAR9);
                FUN3(&VAR13, VAR7->VAR20 + VAR7->VAR18, copy);
                VAR7->VAR18 += copy;
                VAR9 -= copy;
                if (VAR7->VAR18 < 11)
                    break;
                VAR11 = FUN4(&VAR19);
                VAR10 = FUN5(&VAR19);
                VAR12 = FUN5(&VAR19);
                VAR12 |= FUN4(&VAR19) << 24;
                FUN5(&VAR19);
                VAR7->VAR21 = VAR10;
                if (((VAR11 == VAR22 || VAR11 == VAR23) && VAR12 == 0) || VAR11 == VAR24)
                {
                    if (VAR11 == VAR24)
                        VAR10 += 16;
                    VAR7->VAR25[1][VAR26].VAR27 = 0;
                    if ((VAR15 = FUN6(&VAR7->VAR28, VAR26, VAR11, VAR12, VAR10)) < 0)
                        VAR7->VAR28.VAR29 = VAR7->VAR30;
                    VAR7->VAR31 = VAR7->VAR28.VAR32;
                    if (VAR11 == VAR24)
                        FUN7(&VAR7->VAR31, "");
                    if (VAR7->VAR21 - VAR7->VAR33 > VAR9)
                    {
                        FUN3(&VAR13, VAR7->VAR31 + VAR7->VAR33, VAR9);
                        VAR7->VAR33 += VAR9;
                        VAR9 = 0;
                    }
                    else
                    {
                        FUN3(&VAR13, VAR7->VAR31 + VAR7->VAR33, VAR7->VAR21 - VAR7->VAR33);
                        VAR9 -= VAR7->VAR21 - VAR7->VAR33;
                        VAR7->VAR33 += VAR7->VAR21 - VAR7->VAR33;
                        if (VAR7->VAR33 == VAR7->VAR21)
                        {
                            VAR7->VAR16 = 4;
                            if ((VAR15 = FUN8(VAR7->VAR34, &VAR7->VAR28, VAR7->VAR35, VAR7->VAR25[1])) < 0)
                                FUN9(&VAR7->VAR28);
                            VAR7->VAR21 = 0;
                            VAR7->VAR33 = 0;
                            VAR7->VAR18 = 0;
                        }
                        while (VAR13 - VAR4 < VAR5)