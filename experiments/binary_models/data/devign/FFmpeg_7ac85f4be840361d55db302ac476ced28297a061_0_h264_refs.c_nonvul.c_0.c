void FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    FUN2(VAR2->VAR5 + VAR2->VAR6 <= VAR2->VAR7.VAR8);
    VAR2->VAR9 = 0;
    if (VAR2->VAR6 && VAR2->VAR5 + VAR2->VAR6 == VAR2->VAR7.VAR8 && !(VAR10 && !VAR4->VAR11 && VAR4->VAR12->VAR13))
    {
        VAR2->VAR14[0].VAR15 = VAR16;
        VAR2->VAR14[0].VAR17 = VAR2->VAR18[VAR2->VAR6 - 1]->VAR19;
        VAR2->VAR9 = 1;
        if (VAR10)
        {
            VAR2->VAR14[0].VAR17 *= 2;
            VAR2->VAR14[1].VAR15 = VAR16;
            VAR2->VAR14[1].VAR17 = VAR2->VAR14[0].VAR17 + 1;
            VAR2->VAR9 = 2;
        }
    }
}