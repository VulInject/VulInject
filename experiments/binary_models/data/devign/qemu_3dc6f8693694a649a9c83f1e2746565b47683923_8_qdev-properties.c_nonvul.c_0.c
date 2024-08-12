int FUN1(void)
{
    VAR1 *VAR2;
    int VAR3 = 0;
    for (VAR2 = VAR4; VAR2; VAR2 = VAR2->VAR5)
    {
        VAR6 *VAR7 = VAR2->VAR8;
        VAR9 *VAR10;
        VAR11 *VAR12;
        if (VAR7->VAR13)
        {
            continue;
        }
        if (!VAR7->VAR14)
        {
            continue;
        }
        VAR10 = FUN2(VAR7->VAR15);
        VAR10 = FUN3(VAR10, VAR16);
        if (!VAR10)
        {
            FUN4("", VAR7->VAR15, VAR7->VAR17);
            VAR3 = 1;
            continue;
        }
        VAR12 = FUN5(VAR10);
        if (!VAR12->VAR18 && !VAR7->VAR13)
        {
            FUN4("", VAR7->VAR15, VAR7->VAR17, VAR7->VAR19);
            VAR3 = 1;
            continue;
        }
    }
    return VAR3;
}