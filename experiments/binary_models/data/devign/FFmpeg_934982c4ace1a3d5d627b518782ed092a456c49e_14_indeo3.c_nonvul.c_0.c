static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, unsigned char *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    unsigned char *VAR10, *VAR11;
    int VAR12;
    FUN2(VAR8, VAR5, VAR6);
    if (VAR8->VAR13.VAR3[0])
        VAR2->FUN3(VAR2, &VAR8->VAR13);
    VAR8->VAR13.VAR14 = 0;
    if (VAR2->FUN4(VAR2, &VAR8->VAR13) < 0)
    {
        FUN5(VAR8->VAR2, VAR15, "");
        return -1;
    }
    VAR10 = VAR8->VAR16->VAR17;
    VAR11 = VAR8->VAR13.VAR3[0];
    for (VAR12 = 0; VAR12 < VAR8->VAR18; VAR12++)
    {
        memcpy(VAR11, VAR10, VAR8->VAR16->VAR19);
        VAR10 += VAR8->VAR16->VAR19;
        VAR11 += VAR8->VAR13.VAR20[0];
    }
    if (!(VAR8->VAR2->VAR21 & VAR22))
    {
        VAR10 = VAR8->VAR16->VAR23;
        VAR11 = VAR8->VAR13.VAR3[1];
        for (VAR12 = 0; VAR12 < VAR8->VAR18 / 4; VAR12++)
        {
            memcpy(VAR11, VAR10, VAR8->VAR16->VAR24);
            VAR10 += VAR8->VAR16->VAR24;
            VAR11 += VAR8->VAR13.VAR20[1];
        }
        VAR10 = VAR8->VAR16->VAR25;
        VAR11 = VAR8->VAR13.VAR3[2];
        for (VAR12 = 0; VAR12 < VAR8->VAR18 / 4; VAR12++)
        {
            memcpy(VAR11, VAR10, VAR8->VAR16->VAR24);
            VAR10 += VAR8->VAR16->VAR24;
            VAR11 += VAR8->VAR13.VAR20[2];
        }
    }
    *VAR4 = sizeof(VAR26);
    *(VAR26 *)VAR3 = VAR8->VAR13;
    return VAR6;
}