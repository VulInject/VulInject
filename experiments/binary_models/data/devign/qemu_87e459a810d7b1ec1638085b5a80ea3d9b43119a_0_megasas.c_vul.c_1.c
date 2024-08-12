static void FUN1(VAR1 *VAR2, uint32_t VAR3, size_t VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    uint8_t VAR8 = VAR9;
    FUN2(VAR6->VAR10, VAR3, VAR4);
    if (VAR2->VAR11)
    {
        return;
    }
    if (VAR6->VAR2 == NULL)
    {
        VAR8 = FUN3(VAR6, VAR2, VAR4);
        if (VAR8 == VAR12)
        {
            return;
        }
    }
    else
    {
        VAR2->VAR3 = VAR3;
        FUN4(VAR6->VAR10, VAR2->VAR3, VAR6->VAR13, VAR2->VAR6.VAR14);
        if (VAR2->VAR3 != VAR15)
        {
            VAR8 = VAR16;
        }
        if (VAR2->VAR3 == VAR17)
        {
            FUN5(VAR6);
        }
        VAR6->VAR18->VAR19.VAR20 = VAR2->VAR3;
    }
    VAR6->VAR18->VAR19.VAR8 = VAR8;
    FUN6(VAR6);
}