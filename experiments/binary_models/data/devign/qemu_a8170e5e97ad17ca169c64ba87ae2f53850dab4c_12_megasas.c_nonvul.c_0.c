static VAR1 *FUN1(VAR2 *VAR3, hwaddr VAR4, uint64_t VAR5, int VAR6)
{
    VAR1 *VAR7 = NULL;
    int VAR8 = VAR9 * 16;
    hwaddr VAR10 = VAR8;
    VAR7 = FUN2(VAR3, VAR4);
    if (!VAR7)
    {
        return NULL;
    }
    if (!VAR7->VAR11)
    {
        VAR7->VAR11 = VAR4;
        VAR7->VAR4 = FUN3(VAR4, &VAR10, 0);
        if (VAR10 != VAR8)
        {
            FUN4(VAR7->VAR12, (unsigned long)VAR4);
            if (VAR7->VAR4)
            {
                FUN5(VAR7->VAR4, VAR10, 0, 0);
                VAR7->VAR4 = NULL;
                VAR7->VAR11 = 0;
            }
            VAR3->VAR13++;
            return NULL;
        }
        VAR7->VAR14 = VAR10;
        VAR7->VAR5 = VAR5;
        if (!FUN6(VAR3))
        {
            VAR7->VAR5 &= (VAR15)0xFFFFFFFF;
        }
    }
    VAR7->VAR6 = VAR6;
    VAR3->VAR16++;
    FUN7(VAR7->VAR12, VAR7->VAR6, VAR7->VAR5, VAR3->VAR17, VAR3->VAR16);
    return VAR7;
}