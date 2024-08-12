static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    VAR9 *cin = VAR2->VAR10;
    const VAR7 *VAR11 = VAR8 + VAR6->VAR12;
    VAR13 *VAR14 = VAR3;
    int VAR15, VAR16;
    VAR16 = (VAR6->VAR12 - cin->VAR17) * FUN2(VAR2->VAR18);
    if (*VAR4 < VAR16)
    {
        FUN3(VAR2, VAR19, "");
        return FUN4(VAR20);
    }
    VAR15 = cin->VAR15;
    if (cin->VAR17)
    {
        cin->VAR17 = 0;
        VAR15 = (VAR13)FUN5(VAR8);
        VAR8 += 2;
        *VAR14++ = VAR15;
    }
    while (VAR8 < VAR11)
    {
        VAR15 += VAR21[*VAR8++];
        VAR15 = FUN6(VAR15);
        *VAR14++ = VAR15;
    }
    cin->VAR15 = VAR15;
    *VAR4 = VAR16;
    return VAR6->VAR12;
}