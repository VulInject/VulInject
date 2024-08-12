static int FUN1(VAR1 *VAR2)
{
    hwaddr VAR3, VAR4;
    VAR5 *VAR6;
    uint32_t VAR7 = 1;
    int VAR8;
    uint32_t VAR9;
    if (VAR2->VAR10)
    {
        VAR9 = VAR2->VAR11;
    }
    else
    {
        VAR9 = VAR2->VAR12;
    }
    FUN2(VAR6, &VAR2->VAR13.VAR14, VAR15)
    {
        FUN3(VAR6->VAR16, VAR6->VAR17, VAR2, &VAR3, &VAR4);
        if (VAR2->VAR18.VAR19 == VAR20)
        {
            VAR8 = FUN4(VAR2, VAR6, VAR7++, VAR3, VAR4);
        }
        else
        {
            VAR8 = FUN5(VAR2, VAR6, VAR7++, VAR3, VAR4);
        }
        if (VAR8 < 0)
        {
            return -1;
        }
        if (VAR7 >= VAR9)
        {
            break;
        }
    }
    return 0;
}