static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    uint16_t VAR9 = VAR4 ? VAR4->VAR9 : VAR6->VAR9;
    uint16_t VAR10 = VAR4 ? VAR4->VAR10 : VAR6->VAR10;
    uint64_t VAR11 = VAR4 ? VAR4->VAR11 : VAR6->VAR12;
    if (VAR9 >= VAR13)
    {
        return -VAR14;
    }
    if (VAR6 && VAR11 && (VAR6->VAR15 != 4096))
    {
        return -VAR14;
    }
    if (!VAR8)
    {
        return -VAR14;
    }
    if (VAR4)
    {
        FUN3(VAR8, VAR9, VAR11, VAR4->VAR16, VAR4->VAR17);
    }
    else
    {
        FUN4(VAR8, VAR9, VAR11);
    }
    if (!VAR11)
    {
        FUN5(VAR8, VAR9, VAR18);
    }
    else
    {
        if (VAR4)
        {
            if (FUN6(VAR8, VAR9) < VAR10)
            {
                return -VAR14;
            }
            FUN7(VAR8, VAR9, VAR10);
        }
        else if (FUN8(VAR8, VAR9) > VAR10)
        {
            return -VAR14;
        }
        FUN5(VAR8, VAR9, VAR9);
    }
    VAR8->VAR19 = VAR13;
    return 0;
}