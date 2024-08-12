static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7[0]->VAR6;
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    if (VAR9->VAR12 == 1 && VAR6->VAR13 == VAR14 && VAR6->VAR15 > 1)
    {
        int VAR16, VAR17;
        if (FUN2(VAR2->VAR18))
            return VAR19;
        VAR11 = FUN3(VAR4, 8 * VAR6->VAR15);
        if (VAR11 < 0)
            return VAR11;
        for (VAR16 = 0; VAR16 < 8 / VAR9->VAR20; VAR16++)
        {
            for (VAR17 = 0; VAR17 < VAR6->VAR15; VAR17++)
            {
                VAR4->VAR21[VAR17 * 8 + VAR16 * VAR9->VAR20 + 0] = FUN4(VAR2->VAR18);
                VAR4->VAR21[VAR17 * 8 + VAR16 * VAR9->VAR20 + 1] = FUN4(VAR2->VAR18);
            }
        }
        VAR11 = 0;
    }
    else
    {
        VAR11 = FUN5(VAR2->VAR18, VAR4, VAR6->VAR22 ? VAR6->VAR22 : 1024 * VAR6->VAR15);
    }
    VAR4->VAR23 = 0;
    return VAR11;
}