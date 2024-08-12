static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    if (VAR4->VAR7 + 1 >= VAR4->VAR8)
    {
        FUN2(NULL, VAR9, "");
        return VAR10;
    }
    if (!FUN3(VAR2))
    {
        int VAR11, VAR12, VAR13;
        VAR12 = VAR6->VAR14->VAR15 ? FUN4(VAR2, VAR6->VAR14->VAR15, VAR16, 3) : 0;
        VAR13 = VAR6->VAR17->VAR15 ? FUN4(VAR2, VAR6->VAR17->VAR15, VAR16, 3) : 0;
        if (VAR12 < 0 || VAR13 < 0)
            return VAR10;
        VAR11 = VAR6->VAR18[VAR12] | (VAR6->VAR19[VAR13] << 8);
        if (VAR11 == VAR6->VAR20[0])
        {
            VAR6->VAR21[0] = VAR4->VAR7;
            VAR11 = 0;
        }
        else if (VAR11 == VAR6->VAR20[1])
        {
            VAR6->VAR21[1] = VAR4->VAR7;
            VAR11 = 0;
        }
        else if (VAR11 == VAR6->VAR20[2])
        {
            VAR6->VAR21[2] = VAR4->VAR7;
            VAR11 = 0;
        }
        VAR4->VAR22[VAR4->VAR7++] = VAR11;
        return 1;
    }
    else
    {
        int VAR23 = 0, VAR24, VAR25;
        VAR25 = VAR4->VAR7++;
        VAR23 = FUN1(VAR2, VAR4, VAR6);
        if (VAR23 < 0)
            return VAR23;
        VAR4->VAR22[VAR25] = VAR26 | VAR23;
        VAR23++;
        VAR24 = FUN1(VAR2, VAR4, VAR6);
        if (VAR24 < 0)
            return VAR24;
        return VAR23 + VAR24;
    }
}