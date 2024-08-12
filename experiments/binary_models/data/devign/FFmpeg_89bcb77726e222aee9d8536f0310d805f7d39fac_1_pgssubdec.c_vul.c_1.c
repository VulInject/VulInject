static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int64_t VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12;
    const VAR3 *VAR13 = VAR4 + VAR5;
    int VAR14 = FUN2(&VAR4);
    int VAR15 = FUN2(&VAR4);
    uint16_t VAR16;
    VAR8->VAR17.VAR6 = VAR6;
    FUN3(VAR2, "", VAR14, VAR15);
    VAR12 = FUN4(VAR2, VAR14, VAR15);
    if (VAR12 < 0)
        return VAR12;
    VAR4++;
    VAR8->VAR17.VAR18 = FUN2(&VAR4);
    VAR11 = FUN5(&VAR4) >> 6;
    if (VAR11 != 0)
    {
        FUN6(VAR2);
        VAR4 += 1;
        VAR8->VAR17.VAR19 = FUN5(&VAR4);
        VAR8->VAR17.VAR20 = FUN5(&VAR4);
        if (VAR8->VAR17.VAR20 > VAR21)
        {
            FUN7(VAR2, VAR22, "", VAR8->VAR17.VAR20);
            VAR8->VAR17.VAR20 = 2;
            if (VAR2->VAR23 & VAR24)
            {
                for (VAR10 = 0; VAR10 < VAR8->VAR17.VAR20; VAR10++)
                {
                    VAR8->VAR17.VAR25[VAR10].VAR26 = FUN2(&VAR4);
                    VAR8->VAR17.VAR25[VAR10].VAR27 = FUN5(&VAR4);
                    VAR8->VAR17.VAR25[VAR10].VAR28 = FUN5(&VAR4);
                    VAR8->VAR17.VAR25[VAR10].VAR29 = FUN2(&VAR4);
                    VAR8->VAR17.VAR25[VAR10].VAR30 = FUN2(&VAR4);
                    if (VAR8->VAR17.VAR25[VAR10].VAR28 & 0x80)
                    {
                        VAR8->VAR17.VAR25[VAR10].VAR31 = FUN2(&VAR4);
                        VAR8->VAR17.VAR25[VAR10].VAR32 = FUN2(&VAR4);
                        VAR8->VAR17.VAR25[VAR10].VAR33 = FUN2(&VAR4);
                        VAR8->VAR17.VAR25[VAR10].VAR34 = FUN2(&VAR4);
                        FUN3(VAR2, "", VAR8->VAR17.VAR25[VAR10].VAR29, VAR8->VAR17.VAR25[VAR10].VAR30);
                        if (VAR8->VAR17.VAR25[VAR10].VAR29 > VAR2->VAR35 || VAR8->VAR17.VAR25[VAR10].VAR30 > VAR2->VAR36)
                        {
                            FUN7(VAR2, VAR22, "", VAR8->VAR17.VAR25[VAR10].VAR29, VAR8->VAR17.VAR25[VAR10].VAR30, VAR2->VAR35, VAR2->VAR36);
                            VAR8->VAR17.VAR25[VAR10].VAR29 = 0;
                            VAR8->VAR17.VAR25[VAR10].VAR30 = 0;
                            if (VAR2->VAR23 & VAR24)
                            {
                                return 0