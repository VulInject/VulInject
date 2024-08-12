static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int64_t VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12, VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    int VAR18 = 0;
    VAR15 = VAR9->VAR15 * sizeof(VAR11);
    VAR12 = FUN2(VAR15);
    if (FUN3(VAR9->VAR19, VAR6, VAR12, VAR15) != VAR15)
        goto VAR20;
    for (VAR14 = 0; VAR14 < VAR9->VAR15; VAR14++)
    {
        VAR13 = FUN4(VAR12[VAR14]);
        if (VAR13 != 0)
        {
            if (VAR13 & VAR21)
            {
                if (VAR13 & VAR22)
                {
                    fprintf(VAR23, "" VAR24 ""
                                    ""
                                    "",
                            VAR13 >> VAR9->VAR25);
                    VAR13 &= ~VAR22;
                    VAR16 = ((VAR13 >> VAR9->VAR26) & VAR9->VAR27) + 1;
                    VAR13 &= VAR9->VAR28;
                    VAR18 += FUN5(VAR2, VAR4, VAR5, VAR13 & ~511, VAR16 * 512);
                }
                else
                {
                    if (VAR7)
                    {
                        uint64_t VAR29 = VAR13;
                        VAR13 &= ~VAR22;
                        VAR17 = FUN6(VAR2, VAR13 >> VAR9->VAR25);
                        if ((VAR17 == 1) != ((VAR29 & VAR22) != 0))
                        {
                            fprintf(VAR23, "" VAR30 "", VAR29, VAR17);
                            VAR13 &= ~VAR22;
                            VAR18 += FUN5(VAR2, VAR4, VAR5, VAR13, VAR9->VAR31);
                            FUN7(VAR12);
                            return VAR18;
                        VAR20:
                            fprintf(VAR23, "");
                            FUN7(VAR12);
                            return -VAR32