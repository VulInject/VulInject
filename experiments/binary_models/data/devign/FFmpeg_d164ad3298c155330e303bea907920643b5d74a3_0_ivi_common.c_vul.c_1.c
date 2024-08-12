static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10;
    VAR3 *VAR11 = VAR2->VAR12;
    for (VAR10 = 0; VAR10 < VAR2->VAR13; VAR10 += VAR7)
    {
        for (VAR9 = 0; VAR9 < VAR2->VAR14; VAR9 += VAR8)
        {
            VAR11->VAR15 = VAR9;
            VAR11->VAR16 = VAR10;
            VAR11->VAR17 = VAR2->VAR17;
            VAR11->VAR14 = FUN2(VAR2->VAR14 - VAR9, VAR8);
            VAR11->VAR13 = FUN2(VAR2->VAR13 - VAR10, VAR7);
            VAR11->VAR18 = VAR11->VAR19 = 0;
            VAR11->VAR20 = FUN3(VAR11->VAR14, VAR11->VAR13, VAR2->VAR17);
            FUN4(&VAR11->VAR21);
            VAR11->VAR21 = FUN5(VAR11->VAR20 * sizeof(VAR22));
            if (!VAR11->VAR21)
                return FUN6(VAR23);
            VAR11->VAR24 = 0;
            if (VAR5 || VAR6)
            {
                if (VAR11->VAR20 != VAR4->VAR20)
                {
                    FUN7(NULL, VAR25, "");
                    return VAR26;
                }
                VAR11->VAR24 = VAR4->VAR21;
                VAR4++;
            }
            VAR11++;
        }
    }
    return 0;
}