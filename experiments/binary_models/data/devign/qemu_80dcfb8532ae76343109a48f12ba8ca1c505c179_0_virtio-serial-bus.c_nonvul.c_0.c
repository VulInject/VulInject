static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR3;
    VAR7 *VAR8;
    uint32_t VAR9, VAR10, VAR11;
    unsigned int VAR12;
    int VAR13;
    if (VAR4 > 3)
    {
        return -VAR14;
    }
    VAR13 = FUN2(&VAR6->VAR15, VAR2);
    if (VAR13)
    {
        return VAR13;
    }
    if (VAR4 < 2)
    {
        return 0;
    }
    FUN3(VAR2, &VAR6->VAR16.VAR17);
    FUN3(VAR2, &VAR6->VAR16.VAR18);
    FUN4(VAR2, &VAR9);
    FUN5(&VAR9);
    if (VAR9 > FUN6(VAR6->VAR16.VAR9))
    {
        return -VAR14;
    }
    for (VAR12 = 0; VAR12 < (VAR9 + 31) / 32; VAR12++)
    {
        FUN4(VAR2, &VAR11);
        if (VAR11 != VAR6->VAR11[VAR12])
        {
            return -VAR14;
        }
    }
    FUN4(VAR2, &VAR10);
    VAR6->VAR19.VAR10 = VAR10;
    VAR6->VAR19.VAR20 = FUN7(sizeof(*VAR6->VAR19.VAR20) * VAR10);
    for (VAR12 = 0; VAR12 < VAR10; VAR12++)
    {
        uint32_t VAR21;
        VAR21 = FUN8(VAR2);
        VAR8 = FUN9(VAR6, VAR21);
        if (!VAR8)
        {
            return -VAR14;
        }
        VAR8->VAR22 = FUN10(VAR2);
        VAR6->VAR19.VAR20[VAR12].VAR8 = VAR8;
        VAR6->VAR19.VAR20[VAR12].VAR23 = FUN10(VAR2);
        if (VAR4 > 2)
        {
            uint32_t VAR24;
            FUN4(VAR2, &VAR24);
            if (VAR24)
            {
                FUN4(VAR2, &VAR8->VAR25);
                FUN11(VAR2, &VAR8->VAR26);
                FUN12(VAR2, (unsigned char *)&VAR8->VAR27, sizeof(VAR8->VAR27));
                FUN13(VAR8->VAR27.VAR28, VAR8->VAR27.VAR29, VAR8->VAR27.VAR30, 1);
                FUN13(VAR8->VAR27.VAR31, VAR8->VAR27.VAR32, VAR8->VAR27.VAR33, 1);
                FUN14(VAR8, false);
            }
        }
    }
    FUN15(VAR6->VAR19.VAR34, 1);
    return 0;
}