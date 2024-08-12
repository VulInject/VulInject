static int FUN1(VAR1 *VAR2, const VAR1 *VAR3)
{
    int VAR4, VAR5;
    VAR6 *VAR7 = VAR2->VAR8, *VAR9 = VAR3->VAR8;
    for (VAR4 = 0; VAR4 < 2; VAR4++)
    {
        if (VAR7->VAR10[VAR4].VAR11.VAR12->VAR13[0])
            FUN2(VAR2, &VAR7->VAR10[VAR4]);
        if (VAR9->VAR10[VAR4].VAR11.VAR12->VAR13[0])
        {
            if ((VAR5 = FUN3(VAR2, &VAR7->VAR10[VAR4], &VAR9->VAR10[VAR4])) < 0)
                return VAR5;
        }
    }
    for (VAR4 = 0; VAR4 < 8; VAR4++)
    {
        if (VAR7->VAR14[VAR4].VAR12->VAR13[0])
            FUN4(VAR2, &VAR7->VAR14[VAR4]);
        if (VAR9->VAR15[VAR4].VAR12->VAR13[0])
        {
            if ((VAR5 = FUN5(&VAR7->VAR14[VAR4], &VAR9->VAR15[VAR4])) < 0)
                return VAR5;
        }
    }
    VAR7->VAR16 = VAR9->VAR16;
    VAR7->VAR17 = VAR9->VAR17;
    VAR7->VAR18 = VAR9->VAR18;
    memcpy(&VAR7->VAR19, &VAR9->VAR19, sizeof(VAR7->VAR19));
    memcpy(&VAR7->VAR20, &VAR9->VAR20, sizeof(VAR7->VAR20));
    if (VAR9->VAR21.VAR22)
    {
        memcpy(&VAR7->VAR21.VAR23, &VAR9->VAR21.VAR23, sizeof(VAR7->VAR21.VAR23));
    }
    return 0;
}