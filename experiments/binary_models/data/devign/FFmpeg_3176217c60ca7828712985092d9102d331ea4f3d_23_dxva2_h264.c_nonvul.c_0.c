static void FUN1(const VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, VAR7 *VAR8)
{
    unsigned VAR9, VAR10;
    memset(VAR8, 0, sizeof(*VAR8));
    if (FUN2(VAR2, VAR4) & VAR11)
    {
        for (VAR9 = 0; VAR9 < 6; VAR9++)
            for (VAR10 = 0; VAR10 < 16; VAR10++)
                VAR8->VAR12[VAR9][VAR10] = VAR13->VAR14[VAR9][VAR10];
        for (VAR9 = 0; VAR9 < 64; VAR9++)
        {
            VAR8->VAR15[0][VAR9] = VAR13->VAR16[0][VAR9];
            VAR8->VAR15[1][VAR9] = VAR13->VAR16[3][VAR9];
        }
    }
    else
    {
        for (VAR9 = 0; VAR9 < 6; VAR9++)
            for (VAR10 = 0; VAR10 < 16; VAR10++)
                VAR8->VAR12[VAR9][VAR10] = VAR13->VAR14[VAR9][VAR17[VAR10]];
        for (VAR9 = 0; VAR9 < 64; VAR9++)
        {
            VAR8->VAR15[0][VAR9] = VAR13->VAR16[0][VAR18[VAR9]];
            VAR8->VAR15[1][VAR9] = VAR13->VAR16[3][VAR18[VAR9]];
        }
    }
}