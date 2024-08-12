static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, int VAR6)
{
    if (VAR6 > 32 || VAR6 > 3 * VAR7)
    {
        FUN2(NULL, VAR8, "");
        return VAR9;
    }
    if (!FUN3(VAR2))
    {
        if (VAR4->VAR10 >= 256)
        {
            FUN2(NULL, VAR8, "");
            return VAR9;
        }
        if (VAR6)
        {
            VAR4->VAR11[VAR4->VAR10] = VAR5;
            VAR4->VAR12[VAR4->VAR10] = VAR6;
        }
        else
        {
            VAR4->VAR11[VAR4->VAR10] = 0;
            VAR4->VAR12[VAR4->VAR10] = 0;
        }
        VAR4->VAR13[VAR4->VAR10] = FUN4(VAR2, 8);
        VAR4->VAR10++;
        if (VAR4->VAR14 < VAR6)
            VAR4->VAR14 = VAR6;
        return 0;
    }
    else
    {
        int VAR15;
        VAR6++;
        VAR15 = FUN1(VAR2, VAR4, VAR5, VAR6);
        if (VAR15)
            return VAR15;
        return FUN1(VAR2, VAR4, VAR5 | (1 << (VAR6 - 1)), VAR6);
    }
}