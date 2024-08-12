static void FUN1(VAR1 *VAR2, uint16_t VAR3, uint16_t VAR4)
{
    uint16_t VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    uint16_t VAR10;
    uint16_t VAR11;
    switch (VAR4 & 3)
    {
    case 0:
        VAR5 = 0;
        break;
    case 1:
        VAR5 = 4;
        break;
    case 2:
        VAR5 = 6;
        break;
    case 3:
        VAR5 = 7;
        break;
    }
    FUN2(VAR12, "" VAR13 "" VAR14, VAR3, VAR5);
    VAR7 = FUN3(VAR2, FUN4(VAR3));
    if (VAR7)
    {
        VAR10 = FUN5(VAR3);
        for (VAR11 = 0; VAR11 < VAR15; ++VAR11)
        {
            VAR9 = VAR7->VAR16[VAR11];
            if (VAR9 && ((VAR11 & VAR5) == (VAR10 & VAR5)))
            {
                FUN2(VAR12, "" VAR13, VAR11);
                VAR9->VAR17.VAR18 = 0;
            }
        }
    }
}