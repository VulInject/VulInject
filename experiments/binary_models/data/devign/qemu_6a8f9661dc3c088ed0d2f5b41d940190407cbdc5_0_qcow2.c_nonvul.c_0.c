static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR3->VAR6;
    VAR1 *VAR7 = FUN2(VAR1, 1);
    *VAR7 = (VAR1){
        .VAR8 = VAR9,
        .VAR10.VAR11 = FUN2(VAR12, 1),
    };
    if (VAR5->VAR13 == 2)
    {
        *VAR7->VAR10.VAR11 = (VAR12){
            .VAR14 = FUN3(""),
            .VAR15 = VAR5->VAR15,
        };
    }
    else if (VAR5->VAR13 == 3)
    {
        *VAR7->VAR10.VAR11 = (VAR12){
            .VAR14 = FUN3(""),
            .VAR16 = VAR5->VAR17 & VAR18,
            .VAR19 = true,
            .VAR20 = VAR5->VAR21 & VAR22,
            .VAR23 = true,
            .VAR15 = VAR5->VAR15,
        };
    }
    return VAR7;
}