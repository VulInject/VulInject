static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint64_t VAR5, void **VAR6, bool VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    int VAR12;
    int VAR13;
    uint64_t VAR14 = VAR15;
    int VAR16 = -1;
    FUN2(FUN3(), VAR4 == VAR9->VAR17, VAR5, VAR7);
    VAR11 = VAR13 = (VAR5 / VAR9->VAR18 * 4) % VAR4->VAR19;
    do
    {
        const VAR20 *VAR21 = &VAR4->VAR22[VAR11];
        if (VAR21->VAR5 == VAR5)
        {
            goto VAR23;
        }
        if (VAR21->VAR24 == 0 && VAR21->VAR25 < VAR14)
        {
            VAR14 = VAR21->VAR25;
            VAR16 = VAR11;
        }
        if (++VAR11 == VAR4->VAR19)
        {
            VAR11 = 0;
        }
    } while (VAR11 != VAR13);
    if (VAR16 == -1)
    {
        FUN4();
    }
    VAR11 = VAR16;
    FUN5(FUN3(), VAR4 == VAR9->VAR17, VAR11);
    VAR12 = FUN6(VAR2, VAR4, VAR11);
    if (VAR12 < 0)
    {
        return VAR12;
    }
    FUN7(FUN3(), VAR4 == VAR9->VAR17, VAR11);
    VAR4->VAR22[VAR11].VAR5 = 0;
    if (VAR7)
    {
        if (VAR4 == VAR9->VAR17)
        {
            FUN8(VAR2->VAR26, VAR27);
        }
        VAR12 = FUN9(VAR2->VAR26, VAR5, FUN10(VAR2, VAR4, VAR11), VAR9->VAR18);
        if (VAR12 < 0)
        {
            return VAR12;
        }
    }
    VAR4->VAR22[VAR11].VAR5 = VAR5;
VAR23:
    VAR4->VAR22[VAR11].VAR24++;
    *VAR6 = FUN10(VAR2, VAR4, VAR11);
    FUN11(FUN3(), VAR4 == VAR9->VAR17, VAR11);
    return 0;
}