static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    for (VAR3 = 0; VAR3 < 16; VAR3++)
    {
        VAR2->VAR4[VAR3] = FUN2(VAR5[VAR3]);
        VAR2->VAR6[VAR3] = FUN2(VAR6[VAR3]);
    }
    for (VAR3 = 0; VAR3 < 64; VAR3++)
    {
        VAR2->VAR7[VAR3] = FUN2(VAR8[VAR3]);
        VAR2->VAR9[VAR3] = FUN2(VAR9[VAR3]);
        VAR2->VAR10[VAR3] = FUN2(VAR10[VAR3]);
        VAR2->VAR11[VAR3] = FUN2(VAR11[VAR3]);
    }
    if (VAR2->VAR12.VAR13->VAR14)
    {
        VAR2->VAR15 = VAR5;
        VAR2->VAR16 = VAR8;
        VAR2->VAR17 = VAR9;
        VAR2->VAR18 = VAR6;
        VAR2->VAR19 = VAR10;
        VAR2->VAR20 = VAR11;
    }
    else
    {
        VAR2->VAR15 = VAR2->VAR4;
        VAR2->VAR16 = VAR2->VAR7;
        VAR2->VAR17 = VAR2->VAR9;
        VAR2->VAR18 = VAR2->VAR6;
        VAR2->VAR19 = VAR2->VAR10;
        VAR2->VAR20 = VAR2->VAR11;
    }
}