static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR5 *VAR11, *VAR12;
    int VAR13;
    if (FUN2(VAR9, VAR6, VAR7) < 0)
        return -1;
    if (VAR9->VAR14.VAR3[0])
        VAR2->FUN3(VAR2, &VAR9->VAR14);
    VAR9->VAR14.VAR15 = 0;
    if (VAR2->FUN4(VAR2, &VAR9->VAR14) < 0)
    {
        FUN5(VAR9->VAR2, VAR16, "");
        return -1;
    }
    VAR11 = VAR9->VAR17->VAR18;
    VAR12 = VAR9->VAR14.VAR3[0];
    for (VAR13 = 0; VAR13 < VAR9->VAR19; VAR13++)
    {
        memcpy(VAR12, VAR11, VAR9->VAR17->VAR20);
        VAR11 += VAR9->VAR17->VAR20;
        VAR12 += VAR9->VAR14.VAR21[0];
    }
    if (!(VAR9->VAR2->VAR22 & VAR23))
    {
        VAR11 = VAR9->VAR17->VAR24;
        VAR12 = VAR9->VAR14.VAR3[1];
        for (VAR13 = 0; VAR13 < VAR9->VAR19 / 4; VAR13++)
        {
            memcpy(VAR12, VAR11, VAR9->VAR17->VAR25);
            VAR11 += VAR9->VAR17->VAR25;
            VAR12 += VAR9->VAR14.VAR21[1];
        }
        VAR11 = VAR9->VAR17->VAR26;
        VAR12 = VAR9->VAR14.VAR3[2];
        for (VAR13 = 0; VAR13 < VAR9->VAR19 / 4; VAR13++)
        {
            memcpy(VAR12, VAR11, VAR9->VAR17->VAR25);
            VAR11 += VAR9->VAR17->VAR25;
            VAR12 += VAR9->VAR14.VAR21[2];
        }
    }
    *VAR4 = sizeof(VAR27);
    *(VAR27 *)VAR3 = VAR9->VAR14;
    return VAR7;
}