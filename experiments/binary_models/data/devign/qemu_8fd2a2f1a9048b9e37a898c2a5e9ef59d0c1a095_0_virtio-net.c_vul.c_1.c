static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR3;
    if (VAR4 < 2 || VAR4 > VAR7)
        return -VAR8;
    FUN2(&VAR6->VAR9, VAR2);
    FUN3(VAR2, VAR6->VAR10, VAR11);
    VAR6->VAR12 = FUN4(VAR2);
    VAR6->VAR13 = FUN4(VAR2);
    if (VAR4 >= 3)
        VAR6->VAR14 = FUN5(VAR2);
    if (VAR4 >= 4)
    {
        if (VAR4 < 8)
        {
            VAR6->VAR15 = FUN4(VAR2);
            VAR6->VAR16 = FUN4(VAR2);
        }
        else
        {
            VAR6->VAR15 = FUN6(VAR2);
            VAR6->VAR16 = FUN6(VAR2);
        }
    }
    if (VAR4 >= 5)
    {
        VAR6->VAR17.VAR18 = FUN4(VAR2);
        if (VAR6->VAR17.VAR18 <= VAR19)
        {
            FUN3(VAR2, VAR6->VAR17.VAR20, VAR6->VAR17.VAR18 * VAR11);
        }
        else if (VAR6->VAR17.VAR18)
        {
            FUN7(VAR2, VAR6->VAR17.VAR18 * VAR11, VAR21);
            VAR6->VAR15 = 1;
            VAR6->VAR17.VAR18 = 0;
        }
    }
    if (VAR4 >= 6)
        FUN3(VAR2, (VAR22 *)VAR6->VAR23, VAR24 >> 3);
    if (VAR4 >= 7 && FUN4(VAR2))
    {
        fprintf(VAR25, "");
        FUN8(1);
    }
    if (VAR6->VAR12)
    {
        FUN9(VAR6->VAR26, FUN10(VAR27) + VAR28);
    }
    return 0;
}