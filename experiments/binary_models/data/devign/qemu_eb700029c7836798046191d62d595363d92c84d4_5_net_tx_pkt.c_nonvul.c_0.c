static VAR1 FUN1(struct VAR2 *VAR3, int *VAR4, VAR1 *VAR5, struct VAR6 *VAR7, int *VAR8)
{
    size_t VAR9 = 0;
    struct VAR6 *VAR10 = VAR3->VAR11;
    *VAR8 = VAR12;
    while (VAR9 < FUN2(VAR3->VAR13.VAR14))
    {
        if (*VAR8 == VAR15)
        {
            break;
        }
        if (*VAR4 == (VAR3->VAR16 + VAR17))
        {
            break;
        }
        VAR7[*VAR8].VAR18 = VAR10[*VAR4].VAR18 + *VAR5;
        VAR7[*VAR8].VAR19 = FUN3(VAR10[*VAR4].VAR19 - *VAR5, FUN2(VAR3->VAR13.VAR14) - VAR9);
        *VAR5 += VAR7[*VAR8].VAR19;
        VAR9 += VAR7[*VAR8].VAR19;
        if (*VAR5 == VAR10[*VAR4].VAR19)
        {
            *VAR5 = 0;
            (*VAR4)++;
        }
        (*VAR8)++;
    }
    return VAR9;
}