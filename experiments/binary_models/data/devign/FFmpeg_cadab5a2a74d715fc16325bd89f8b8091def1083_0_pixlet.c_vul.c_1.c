static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    ptrdiff_t VAR11 = VAR7->VAR12[VAR5] / 2;
    int VAR13, VAR14;
    for (VAR13 = 0; VAR13 < VAR9->VAR15 * 3; VAR13++)
    {
        int32_t VAR16 = FUN2(&VAR9->VAR17);
        int32_t VAR18 = FUN2(&VAR9->VAR17);
        int32_t VAR19 = FUN2(&VAR9->VAR17);
        int32_t VAR20 = FUN2(&VAR9->VAR17);
        VAR21 *VAR22 = (VAR21 *)VAR7->VAR23[VAR5] + VAR9->VAR24[VAR5][VAR13 + 1].VAR25 + VAR11 * VAR9->VAR24[VAR5][VAR13 + 1].VAR26;
        unsigned VAR27 = VAR9->VAR24[VAR5][VAR13 + 1].VAR27;
        uint32_t VAR28;
        VAR28 = FUN2(&VAR9->VAR17);
        if (VAR28 != 0xDEADBEEF)
        {
            FUN3(VAR2, VAR29, "" VAR30 "", VAR28, VAR5, VAR13);
        }
        VAR14 = FUN4(VAR2, VAR4 + FUN5(&VAR9->VAR17), VAR22, VAR27, VAR19, (VAR18 >= FUN6(VAR16)) ? VAR18 : VAR16, VAR20, VAR9->VAR24[VAR5][VAR13 + 1].VAR31, VAR11);
        if (VAR14 < 0)
        {
            FUN3(VAR2, VAR29, "", VAR5, VAR13);
            return VAR14;
        }
        FUN7(&VAR9->VAR17, VAR14);
    }
    return 0;