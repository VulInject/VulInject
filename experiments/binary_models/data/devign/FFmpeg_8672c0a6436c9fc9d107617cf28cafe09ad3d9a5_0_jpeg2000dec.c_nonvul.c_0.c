static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    int VAR7 = 0;
    VAR2->VAR8 = 8;
    if (VAR4->VAR9.VAR10)
    {
        for (VAR6 = 0; VAR6 < VAR4->VAR9.VAR10; VAR6++)
        {
            VAR11 *VAR12 = &VAR4->VAR9.VAR9[VAR6];
            VAR5 = FUN2(VAR2, VAR4, VAR12->VAR13, VAR12->VAR14, FUN3(VAR12->VAR15, VAR4->VAR16[0].VAR17), VAR12->VAR18, FUN3(VAR12->VAR19, VAR2->VAR20), VAR12->VAR21, &VAR7);
            if (VAR5 < 0)
                return VAR5;
        }
    }
    else
    {
        VAR5 = FUN2(VAR2, VAR4, 0, 0, VAR4->VAR16[0].VAR17, 33, VAR2->VAR20, VAR4->VAR16[0].VAR22, &VAR7);
    }
    FUN4(&VAR2->VAR23, 2);
    return VAR5;
}