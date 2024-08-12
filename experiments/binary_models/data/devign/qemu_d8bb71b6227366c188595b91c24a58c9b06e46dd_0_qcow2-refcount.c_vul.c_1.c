static void FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9, *VAR10, *VAR11;
    FUN2(VAR9, &VAR6->VAR12, VAR11)
    {
        uint64_t VAR13 = FUN3(VAR3, VAR9->VAR3);
        uint64_t VAR14 = FUN4(VAR3 + VAR4, VAR9->VAR3 + VAR9->VAR15);
        if (VAR14 - VAR13 <= VAR4 + VAR9->VAR15)
        {
            assert(VAR9->VAR15 + VAR4 == VAR14 - VAR13);
            VAR9->VAR3 = VAR13;
            VAR9->VAR15 = VAR14 - VAR13;
            goto VAR16;
        }
    }
    VAR9 = FUN5(sizeof(*VAR9));
    *VAR9 = (VAR8){
        .VAR2 = VAR2,
        .VAR3 = VAR3,
        .VAR15 = VAR4,
    };
    FUN6(&VAR6->VAR12, VAR9, VAR11);
VAR16:
    FUN7(VAR10, &VAR6->VAR12, VAR11, VAR11)
    {
        if (VAR10 == VAR9 || VAR10->VAR3 > VAR9->VAR3 + VAR9->VAR15 || VAR9->VAR3 > VAR10->VAR3 + VAR10->VAR15)
        {
            continue;
        }
        assert(VAR10->VAR3 == VAR9->VAR3 + VAR9->VAR15 || VAR9->VAR3 == VAR10->VAR3 + VAR10->VAR15);
        FUN8(&VAR6->VAR12, VAR10, VAR11);
        VAR9->VAR3 = FUN3(VAR9->VAR3, VAR10->VAR3);
        VAR9->VAR15 += VAR10->VAR15;
    }