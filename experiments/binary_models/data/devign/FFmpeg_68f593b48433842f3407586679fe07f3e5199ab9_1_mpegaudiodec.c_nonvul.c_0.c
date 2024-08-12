static int FUN1(VAR1 *VAR2, short *VAR3)
{
    int VAR4, VAR5, VAR6;
    short *VAR7;
    FUN2(&VAR2->VAR8, VAR2->VAR9 + VAR10, (VAR2->VAR11 - VAR2->VAR9 - VAR10) * 8);
    if (VAR2->VAR12)
        FUN3(&VAR2->VAR8, 16);
    FUN4("", VAR2->VAR13);
    switch (VAR2->VAR14)
    {
    case 1:
        VAR5 = FUN5(VAR2);
        break;
    case 2:
        VAR5 = FUN6(VAR2);
        break;
    case 3:
    default:
        VAR5 = FUN7(VAR2);
        break;
    }
    for (VAR4 = 0; VAR4 < VAR5; VAR4++)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR15; VAR6++)
        {
            int VAR16;
            FUN8("", VAR4, VAR6);
            for (VAR16 = 0; VAR16 < VAR17; VAR16++)
                FUN8("", (double)VAR2->VAR18[VAR6][VAR4][VAR16] / VAR19);
            FUN8("");
        }
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR15; VAR6++)
    {
        VAR7 = VAR3 + VAR6;
        for (VAR4 = 0; VAR4 < VAR5; VAR4++)
        {
            FUN9(VAR2, VAR6, VAR7, VAR2->VAR15, VAR2->VAR18[VAR6][VAR4]);
            VAR7 += 32 * VAR2->VAR15;
        }
    }
    VAR2->VAR13++;
    return VAR5 * 32 * sizeof(short) * VAR2->VAR15;
}