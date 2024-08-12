static void FUN1(hwaddr VAR1, ram_addr_t VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR5 *VAR7)
{
    VAR8 *VAR9;
    hwaddr VAR10 = VAR4->VAR11;
    int64_t VAR12, VAR13;
    *VAR6 = -1;
    *VAR7 = 0;
    if (VAR4->VAR14)
    {
        if (VAR1 < VAR4->VAR15 || VAR1 >= VAR4->VAR15 + VAR4->VAR16)
        {
            return;
        }
    }
    FUN2(VAR9, &VAR17.VAR18, VAR19)
    {
        if (VAR4->VAR14)
        {
            if (VAR9->VAR10 >= VAR4->VAR15 + VAR4->VAR16 || VAR9->VAR10 + VAR9->VAR16 <= VAR4->VAR15)
            {
                continue;
            }
            if (VAR4->VAR15 <= VAR9->VAR10)
            {
                VAR13 = VAR9->VAR10;
            }
            else
            {
                VAR13 = VAR4->VAR15;
            }
            VAR12 = VAR9->VAR16 - (VAR13 - VAR9->VAR10);
            if (VAR4->VAR15 + VAR4->VAR16 < VAR9->VAR10 + VAR9->VAR16)
            {
                VAR12 -= VAR9->VAR10 + VAR9->VAR16 - (VAR4->VAR15 + VAR4->VAR16);
            }
        }
        else
        {
            VAR13 = VAR9->VAR10;
            VAR12 = VAR9->VAR16;
        }
        if (VAR1 >= VAR13 && VAR1 < VAR13 + VAR12)
        {
            *VAR6 = VAR1 - VAR13 + VAR10;
            *VAR7 = VAR1 + VAR2 <= VAR13 + VAR12 ? VAR2 : VAR12 - (VAR1 - VAR13);
            return;
        }
        VAR10 += VAR12;
    }
}