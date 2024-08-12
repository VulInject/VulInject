static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR3;
    int VAR7, VAR8;
    uint16_t VAR9;
    VAR7 = FUN2(&VAR6->VAR10, VAR2);
    if (VAR7 < 0)
    {
        return VAR7;
    }
    FUN3(VAR2, &VAR6->VAR11.VAR12.VAR13.VAR14);
    FUN3(VAR2, &VAR6->VAR11.VAR12.VAR13.VAR15);
    FUN3(VAR2, &VAR6->VAR11.VAR12.VAR16.VAR16);
    VAR7 = FUN4(VAR2, &VAR17, VAR3, 1);
    if (VAR7)
    {
        return VAR7;
    }
    FUN5(VAR2, VAR6->VAR11.VAR18.VAR19);
    FUN6(VAR2, &VAR6->VAR11.VAR18.VAR20);
    FUN3(VAR2, (VAR21 *)VAR6->VAR11.VAR22.VAR14);
    for (VAR8 = 0; VAR8 < 3; VAR8++)
    {
        FUN3(VAR2, &VAR9);
    }
    FUN3(VAR2, (VAR21 *)VAR6->VAR11.VAR22.VAR15);
    for (VAR8 = 0; VAR8 < 3; VAR8++)
    {
        FUN3(VAR2, &VAR9);
    }
    VAR7 = FUN4(VAR2, &VAR23, VAR3, 1);
    return VAR7;
}