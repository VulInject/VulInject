static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR8;
    int VAR9, VAR10, VAR11;
    int VAR12 = (VAR2->VAR13 - 1) / VAR2->VAR14[0] + 1;
    VAR3 *VAR15 = &VAR7->VAR16[1][VAR5 / VAR2->VAR14[1] * VAR7->VAR17[1]];
    VAR3 *VAR18 = &VAR7->VAR16[2][VAR5 / VAR2->VAR14[1] * VAR7->VAR17[2]];
    if (VAR2->VAR13 % VAR2->VAR14[0] || VAR2->VAR19 % VAR2->VAR14[1])
    {
        for (VAR9 = 0; VAR9 < VAR12; VAR9++)
        {
            for (VAR10 = 0; VAR10 < VAR2->VAR14[1]; VAR10++)
                for (VAR11 = 0; VAR11 < VAR2->VAR14[0]; VAR11++)
                    *VAR4++ = VAR7->VAR16[0][FUN2(VAR5 + VAR10, VAR2->VAR19 - 1) * VAR7->VAR17[0] + FUN2(VAR9 * VAR2->VAR14[0] + VAR11, VAR2->VAR13 - 1)];
            *VAR4++ = *VAR15++;
            *VAR4++ = *VAR18++;
        }
    }
    else
    {
        for (VAR9 = 0; VAR9 < VAR12; VAR9++)
        {
            for (VAR10 = 0; VAR10 < VAR2->VAR14[1]; VAR10++)
                for (VAR11 = 0; VAR11 < VAR2->VAR14[0]; VAR11++)
                    *VAR4++ = VAR7->VAR16[0][(VAR5 + VAR10) * VAR7->VAR17[0] + VAR9 * VAR2->VAR14[0] + VAR11];
            *VAR4++ = *VAR15++;
            *VAR4++ = *VAR18++;
        }
    }
}