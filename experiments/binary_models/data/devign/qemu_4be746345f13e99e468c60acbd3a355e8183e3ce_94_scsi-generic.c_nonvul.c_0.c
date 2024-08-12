static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR1;
    VAR5 *VAR6 = VAR4->VAR7.VAR8;
    int VAR9;
    VAR4->VAR7.VAR10 = NULL;
    if (VAR2 || VAR4->VAR7.VAR11)
    {
        FUN2(VAR4, VAR2);
        return;
    }
    VAR9 = VAR4->VAR12.VAR13 - VAR4->VAR12.VAR14;
    FUN3("", VAR4->VAR7.VAR15, VAR9);
    VAR4->VAR9 = -1;
    if (VAR9 == 0)
    {
        FUN2(VAR4, 0);
    }
    else
    {
        if (VAR4->VAR7.VAR16.VAR17[0] == VAR18 && (FUN4(&VAR4->VAR17[0]) != 0xffffffffU || VAR6->VAR19 == 0))
        {
            VAR6->VAR20 = FUN4(&VAR4->VAR17[4]);
            VAR6->VAR19 = FUN4(&VAR4->VAR17[0]) & 0xffffffffULL;
        }
        else if (VAR4->VAR7.VAR16.VAR17[0] == VAR21 && (VAR4->VAR7.VAR16.VAR17[1] & 31) == VAR22)
        {
            VAR6->VAR20 = FUN4(&VAR4->VAR17[8]);
            VAR6->VAR19 = FUN5(&VAR4->VAR17[0]);
        }
        FUN6(VAR6->VAR23.VAR24, VAR6->VAR20);
        FUN7(&VAR4->VAR7, VAR9);
        FUN8(&VAR4->VAR7);
    }
}