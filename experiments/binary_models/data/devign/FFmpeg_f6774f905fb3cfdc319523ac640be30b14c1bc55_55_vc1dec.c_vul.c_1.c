static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR7;
    VAR8 *VAR9 = &VAR7->VAR10.VAR9;
    int VAR11, VAR12;
    if (VAR9->VAR13[0])
        for (VAR11 = 0; VAR11 < (VAR7->VAR14 & VAR15 ? 1 : 3); VAR11++)
            for (VAR12 = 0; VAR12 < VAR4->VAR16 >> !!VAR11; VAR12++)
                memset(VAR9->VAR13[VAR11] + VAR12 * VAR9->VAR17[VAR11], VAR11 ? 128 : 0, VAR9->VAR17[VAR11]);
}