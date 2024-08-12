static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR3;
    if (VAR4 < 1 || VAR4 > 2)
        return -VAR7;
    FUN2(VAR2, VAR6->VAR8, 128);
    FUN3(VAR2, &VAR6->VAR9);
    VAR6->VAR10.VAR11 = FUN4(VAR2);
    VAR6->VAR10.VAR12 = FUN4(VAR2);
    VAR6->VAR10.VAR13 = FUN4(VAR2);
    VAR6->VAR10.VAR14 = FUN4(VAR2);
    VAR6->VAR10.VAR15 = FUN4(VAR2);
    VAR6->VAR10.VAR16 = FUN4(VAR2);
    VAR6->VAR10.VAR17 = FUN4(VAR2);
    FUN5(VAR2, VAR6->VAR18);
    VAR6->VAR19 = FUN6(VAR2);
    VAR6->VAR20 = FUN6(VAR2);
    FUN5(VAR2, VAR6->VAR21);
    FUN5(VAR2, VAR6->VAR22);
    if (VAR4 >= 2)
    {
        VAR6->VAR23 = FUN4(VAR2);
        VAR6->VAR24 = FUN4(VAR2);
        if (VAR25)
        {
            FUN7(VAR6);
        }
    }
    return 0;
}