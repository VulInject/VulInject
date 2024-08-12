void FUN1(VAR1 *VAR2)
{
    memset(VAR2, 0, FUN2(VAR1, VAR3));
    FUN3(VAR2, 1);
    VAR2->VAR4 = VAR5;
    if (VAR2->VAR4 & VAR6)
    {
        VAR2->VAR7 = VAR2->VAR8.VAR9 - 4;
    }
    else
    {
        VAR2->VAR7 = VAR2->VAR8.VAR9;
        VAR2->VAR8.VAR9 = (VAR10)0xBFC00000;
        VAR2->VAR11 = 0;
        VAR2->VAR12 = 0x80000000;
        VAR2->VAR13 = (1 << VAR14) | (1 << VAR15);
        VAR2->VAR16 = 0xe0000000;
        {
            int VAR17;
            for (VAR17 = 0; VAR17 < 7; VAR17++)
            {
                VAR2->VAR18[VAR17] = 0;
                VAR2->VAR19[VAR17] = 0x80000000;
                VAR2->VAR18[7] = 0;
                VAR2->VAR19[7] = 0;
                VAR2->VAR20 = (1 << VAR21) | (0x1 << VAR22);
                VAR2->VAR4 = VAR23;
                VAR2->VAR24 = VAR25;
                FUN4(VAR2, VAR2->VAR26)