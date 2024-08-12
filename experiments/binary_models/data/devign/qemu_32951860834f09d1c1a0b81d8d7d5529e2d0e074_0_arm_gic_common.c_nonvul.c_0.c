static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5;
    memset(VAR4->VAR6, 0, VAR7 * sizeof(VAR8));
    for (VAR5 = 0; VAR5 < VAR4->VAR9; VAR5++)
    {
        if (VAR4->VAR10 == VAR11)
        {
            VAR4->VAR12[VAR5] = 0xf0;
        }
        else
        {
            VAR4->VAR12[VAR5] = 0;
        }
        VAR4->VAR13[VAR5] = 1023;
        VAR4->VAR14[VAR5] = 1023;
        VAR4->VAR15[VAR5] = 0x100;
        VAR4->VAR16[VAR5] = 0;
    }
    for (VAR5 = 0; VAR5 < VAR17; VAR5++)
    {
        FUN3(VAR5, VAR18);
        FUN4(VAR5);
    }
    if (VAR4->VAR9 == 1)
    {
        for (VAR5 = 0; VAR5 < VAR7; VAR5++)
        {
            VAR4->VAR19[VAR5] = 1;
        }
    }
    VAR4->VAR20 = 0;
}