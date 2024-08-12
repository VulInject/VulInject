static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = (VAR7 *)VAR2;
    int VAR9, VAR10;
    VAR11 *VAR12;
    assert(VAR6->VAR13 == VAR14);
    VAR12 = VAR6->VAR15.VAR12.VAR16;
    VAR9 = FUN2(VAR12->VAR12);
    FUN3(VAR9, VAR17[VAR9], VAR12->VAR18);
    if (VAR9 == VAR19)
    {
        if (VAR12->VAR18)
        {
            VAR8->VAR20 ^= 1;
            if (VAR8->VAR20 == 2)
            {
                return;
            }
        }
        else
        {
            VAR8->VAR20 ^= 2;
            if (VAR8->VAR20 == 3)
            {
                return;
            }
        }
    }
    if (VAR9 == VAR21)
    {
        if (VAR12->VAR18)
        {
            VAR8->VAR22 ^= 1;
            if (VAR8->VAR22 == 2)
            {
                return;
            }
        }
        else
        {
            VAR8->VAR22 ^= 2;
            if (VAR8->VAR22 == 3)
            {
                return;
            }
        }
    }
    VAR10 = VAR23[VAR9];
    if (!VAR12->VAR18)
    {
        VAR10 |= 0x80;
    }
    FUN4(VAR10);
    FUN5(VAR8, VAR10);
}