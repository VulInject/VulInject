static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, void *VAR6)
{
    VAR7 *VAR8 = VAR6;
    VAR9 *VAR10 = VAR8->VAR10;
    int VAR11 = VAR5->VAR12;
    int VAR13;
    int VAR14;
    if (VAR5->VAR15 == VAR16)
    {
        FUN2(VAR8->VAR17.VAR18.VAR19, VAR20, VAR5->VAR21 == VAR22);
        VAR13 = FUN3(VAR10, FUN4(VAR3), VAR11);
        FUN5(VAR8->VAR23, VAR11, VAR13, (VAR5->VAR21 == VAR22) ? "" : "");
        for (VAR14 = 0; VAR14 < FUN6(VAR24); VAR14++)
        {
            if (VAR13 == VAR24[VAR14])
            {
                VAR10->VAR25[VAR14] = (VAR5->VAR21 == VAR22);
                FUN7(VAR8->VAR17.VAR18.VAR19, VAR13, VAR5->VAR21 == VAR22)