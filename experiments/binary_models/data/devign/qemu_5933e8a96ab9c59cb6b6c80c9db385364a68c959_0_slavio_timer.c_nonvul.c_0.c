static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2, VAR3, VAR5.VAR6);
    unsigned int VAR7;
    VAR8 *VAR9;
    for (VAR7 = 0; VAR7 <= VAR10; VAR7++)
    {
        VAR9 = &VAR4->VAR11[VAR7];
        VAR9->VAR12 = 0;
        VAR9->VAR13 = 0;
        VAR9->VAR14 = 0;
        if (VAR7 <= VAR4->VAR15)
        {
            FUN3(VAR9->VAR16, FUN4(VAR17), 1);
            FUN5(VAR9->VAR16, 0);
            VAR9->VAR18 = 1;
        }
    }
    VAR4->VAR19 = 0;
}