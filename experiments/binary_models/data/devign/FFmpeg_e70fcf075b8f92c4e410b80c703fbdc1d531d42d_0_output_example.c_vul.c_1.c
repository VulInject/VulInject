void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    VAR9 *VAR10;
    VAR10 = &VAR4->VAR11;
    VAR7 = VAR12++;
    for (VAR6 = 0; VAR6 < VAR10->VAR13; VAR6++)
    {
        for (VAR5 = 0; VAR5 < VAR10->VAR14; VAR5++)
        {
            VAR15->VAR16[0][VAR6 * VAR15->VAR17[0] + VAR5] = VAR5 + VAR6 + VAR7 * 3;
        }
    }
    for (VAR6 = 0; VAR6 < VAR10->VAR13 / 2; VAR6++)
    {
        for (VAR5 = 0; VAR5 < VAR10->VAR14 / 2; VAR5++)
        {
            VAR15->VAR16[1][VAR6 * VAR15->VAR17[1] + VAR5] = 128 + VAR6 + VAR7 * 2;
            VAR15->VAR16[2][VAR6 * VAR15->VAR17[2] + VAR5] = 64 + VAR5 + VAR7 * 5;
        }
    }
    VAR8 = FUN2(VAR10, VAR18, VAR19, VAR15);
    if (FUN3(VAR2, VAR4->VAR20, VAR18, VAR8) != 0)
    {
        fprintf(VAR21, "");
        FUN4(1);
    }
}