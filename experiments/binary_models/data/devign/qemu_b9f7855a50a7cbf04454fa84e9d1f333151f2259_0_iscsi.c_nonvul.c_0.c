static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    uint64_t VAR8 = VAR6->VAR9 ? 0xffffffff : 0xffff;
    VAR2->VAR10 = VAR6->VAR11;
    if (VAR6->VAR12.VAR8)
    {
        VAR8 = FUN2(VAR8, VAR6->VAR12.VAR8);
    }
    if (VAR8 * VAR6->VAR11 < VAR13)
    {
        VAR2->VAR12.VAR14 = VAR8 * VAR6->VAR11;
    }
    if (VAR6->VAR15.VAR16)
    {
        if (VAR6->VAR12.VAR17 < 0xffffffff / VAR6->VAR11)
        {
            VAR2->VAR12.VAR18 = VAR6->VAR12.VAR17 * VAR6->VAR11;
        }
        VAR2->VAR12.VAR19 = VAR6->VAR12.VAR20 * VAR6->VAR11;
    }
    else
    {
        VAR2->VAR12.VAR19 = VAR6->VAR11;
    }
    if (VAR6->VAR12.VAR21 < 0xffffffff / VAR6->VAR11)
    {
        VAR2->VAR12.VAR22 = VAR6->VAR12.VAR21 * VAR6->VAR11;
    }
    if (VAR6->VAR15.VAR23)
    {
        VAR2->VAR12.VAR24 = VAR6->VAR12.VAR20 * VAR6->VAR11;
    }
    else
    {
        VAR2->VAR12.VAR24 = VAR6->VAR11;
    }
    if (VAR6->VAR12.VAR25 && VAR6->VAR12.VAR25 < VAR13 / VAR6->VAR11)
    {
        VAR2->VAR12.VAR26 = FUN3(VAR6->VAR12.VAR25 * VAR6->VAR11);
    }
}