static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR4->VAR6; VAR5++)
    {
        VAR7 *VAR8 = &VAR2->VAR9[VAR5];
        if (VAR4->VAR10 & VAR11)
            VAR8->VAR12 = VAR13[VAR4->VAR14 / VAR15].VAR16;
        else
            VAR8->VAR12 = FUN2(VAR4->VAR17 / VAR4->VAR6 / 1000);
        for (VAR5 = 0; VAR5 < VAR18 * VAR19; VAR5++)
            VAR8->VAR20[VAR5] = 10.0f;
    }
}