static void FUN1(void *VAR1, VAR2 *VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR1;
    int VAR6, VAR7, VAR8;
    if (VAR5->VAR9[0] <= VAR5->VAR9[1])
    {
        VAR8 = (VAR5->VAR10 + VAR5->VAR11[0]) * VAR5->VAR12;
        VAR3 += VAR5->VAR11[0] * VAR5->VAR12;
        for (VAR6 = VAR5->VAR11[0]; VAR6 <= VAR5->VAR11[1]; VAR6++)
            for (VAR7 = 0; VAR7 < VAR5->VAR12; VAR7++, VAR8++)
            {
                FUN2(VAR3++, FUN3(VAR5->VAR13[VAR8].VAR14, VAR5->VAR13[VAR8].VAR15.VAR16, VAR5->VAR13[VAR8].VAR15.VAR17, VAR5->VAR13[VAR8].VAR15.VAR18));
            }
        FUN4(VAR5, VAR5->VAR9[0], VAR5->VAR11[0], VAR5->VAR9[1] - VAR5->VAR9[0], VAR6 - VAR5->VAR11[0]);
        VAR5->VAR9[0] = VAR5->VAR12;
        VAR5->VAR11[0] = VAR5->VAR19;
        VAR5->VAR9[1] = 0;
        VAR5->VAR11[1] = 0;
    }
    if (VAR5->VAR20)
    {
        FUN5(VAR5, VAR5->VAR21, VAR5->VAR22);
        VAR5->VAR20 = 0;
    }
}