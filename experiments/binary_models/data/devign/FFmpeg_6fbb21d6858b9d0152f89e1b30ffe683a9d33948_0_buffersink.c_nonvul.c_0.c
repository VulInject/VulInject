static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9 = NULL;
    unsigned VAR10;
    int VAR11;
    FUN2(VAR12)
    FUN2(VAR13) FUN2(VAR14) FUN2(VAR15) if (VAR4->VAR16)
    {
        for (VAR10 = 0; VAR10 < FUN3(VAR4->VAR12); VAR10++)
            if ((VAR11 = FUN4(&VAR7, VAR4->VAR12[VAR10])) < 0)
                return VAR11;
        FUN5(VAR2, VAR7);
    }
    if (VAR4->VAR17 || VAR4->VAR18 || VAR4->VAR19)
    {
        for (VAR10 = 0; VAR10 < FUN3(VAR4->VAR14); VAR10++)
            if ((VAR11 = FUN6(&VAR9, VAR4->VAR14[VAR10])) < 0)
                return VAR11;
        for (VAR10 = 0; VAR10 < FUN3(VAR4->VAR15); VAR10++)
            if ((VAR11 = FUN6(&VAR9, FUN7(VAR4->VAR15[VAR10]))) < 0)
                return VAR11;
        if (VAR4->VAR19)
        {
            if (VAR9)
                FUN8(VAR2, VAR20, "");
            else if (!(VAR9 = FUN9()))
                return FUN10(VAR21);
        }
        FUN11(VAR2, VAR9);
    }
    if (VAR4->VAR22)
    {
        VAR7 = NULL;
        for (VAR10 = 0; VAR10 < FUN3(VAR4->VAR13); VAR10++)
            if ((VAR11 = FUN4(&VAR7, VAR4->VAR13[VAR10])) < 0)
                return VAR11;
        FUN12(VAR2, VAR7);
    }
    return 0;
}