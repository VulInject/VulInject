static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    const VAR11 *VAR12 = (const VAR11 *)VAR6->VAR13[0];
    int VAR14, VAR15, VAR16;
    VAR15 = (VAR6->VAR14 + 1) / 2;
    if ((VAR16 = FUN2(VAR2, VAR4, VAR15)) < 0)
        return VAR16;
    VAR14 = VAR6->VAR14 - (VAR6->VAR14 & 1);
    if (VAR2->VAR17)
        FUN3(VAR9, VAR2->VAR17, VAR4->VAR13, VAR14, VAR12);
    else
        FUN4(VAR9, VAR4->VAR13, VAR14, VAR12);
    if (VAR14 < VAR6->VAR14)
    {
        int16_t VAR18[2] = {VAR12[VAR14], VAR12[VAR14]};
        FUN5(VAR9, &VAR4->VAR13[VAR14 >> 1], VAR18);
    }
    if (VAR6->VAR19 != VAR20)
        VAR4->VAR19 = VAR6->VAR19 - FUN6(VAR2, VAR2->VAR21);
    *VAR7 = 1;
    return 0;
}