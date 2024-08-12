VAR1 FUN1(VAR2 *VAR3, offset_t VAR4, int VAR5)
{
    offset_t VAR6;
    offset_t VAR7 = VAR3->VAR7 - (VAR3->VAR8 ? 0 : (VAR3->VAR9 - VAR3->VAR10));
    if (VAR5 != VAR11 && VAR5 != VAR12)
        return -VAR13;
    if (VAR5 == VAR11)
    {
        VAR6 = VAR7 + (VAR3->VAR14 - VAR3->VAR10);
        if (VAR4 == 0)
            return VAR6;
        VAR4 += VAR6;
    }
    VAR6 = VAR4 - VAR7;
    if (!VAR3->VAR15 && VAR6 >= 0 && VAR6 < (VAR3->VAR9 - VAR3->VAR10))
    {
        VAR3->VAR14 = VAR3->VAR10 + VAR6;
    }
    else
    {
        if (!VAR3->VAR16)
            return -VAR17;
        if (VAR3->VAR8)
        {
            FUN2(VAR3);
            VAR3->VAR15 = 1;
        }
        else
        {
            VAR3->VAR9 = VAR3->VAR10;
        }
        VAR3->VAR14 = VAR3->VAR10;
        if (VAR3->FUN3(VAR3->VAR18, VAR4, VAR12) == (VAR1)-VAR17)
            return -VAR17;
        VAR3->VAR7 = VAR4;
    }
    VAR3->VAR19 = 0;
    return VAR4;
}