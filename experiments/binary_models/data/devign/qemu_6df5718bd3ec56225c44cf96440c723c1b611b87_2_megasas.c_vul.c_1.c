static VAR1 *FUN1(VAR2 *VAR3, hwaddr VAR4, uint64_t VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2(VAR3);
    VAR1 *VAR9 = NULL;
    int VAR10 = VAR11 * 16;
    hwaddr VAR12 = VAR10;
    VAR9 = FUN3(VAR3, VAR4);
    if (!VAR9)
    {
        return NULL;
    }
    if (!VAR9->VAR13)
    {
        VAR9->VAR13 = VAR4;
        VAR9->VAR4 = FUN4(VAR8, VAR4, &VAR12, 0);
        if (VAR12 != VAR10)
        {
            FUN5(VAR9->VAR14, (unsigned long)VAR4);
            if (VAR9->VAR4)
            {
                FUN6(VAR8, VAR9->VAR4, VAR12, 0, 0);
                VAR9->VAR4 = NULL;
                VAR9->VAR13 = 0;
            }
            VAR3->VAR15++;
            return NULL;
        }
        VAR9->VAR16 = VAR12;
        VAR9->VAR5 = VAR5;
        if (!FUN7(VAR3))
        {
            VAR9->VAR5 &= (VAR17)0xFFFFFFFF;
        }
    }
    VAR9->VAR6 = VAR6;
    VAR3->VAR18++;
    if (VAR3->VAR19)
    {
        VAR3->VAR20 = FUN8(&VAR21, VAR3->VAR19);
    }
    FUN9(VAR9->VAR14, VAR9->VAR6, VAR9->VAR5, VAR3->VAR22, VAR3->VAR20, VAR3->VAR18);
    return VAR9;
}