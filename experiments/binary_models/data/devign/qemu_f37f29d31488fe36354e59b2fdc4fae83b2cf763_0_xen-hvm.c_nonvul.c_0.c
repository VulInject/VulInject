static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = NULL;
    ioreq_t VAR8;
    int VAR9;
    if (!VAR4)
    {
        return 0;
    }
    memset(&VAR8, 0x00, sizeof(VAR8));
    VAR8.VAR2 = VAR10;
    VAR8.VAR11 = 1;
    for (;;)
    {
        uint32_t VAR12 = VAR4->VAR13, VAR14;
        FUN2();
        VAR14 = VAR4->VAR15;
        FUN2();
        if (VAR12 != VAR4->VAR13)
        {
            continue;
        }
        if (VAR12 == VAR14)
        {
            break;
        }
        VAR7 = &VAR4->VAR16[VAR12 % VAR17];
        VAR8.VAR18 = 1U << VAR7->VAR18;
        VAR8.VAR19 = VAR7->VAR19;
        VAR8.VAR20 = VAR7->VAR20;
        VAR8.VAR21 = VAR7->VAR21;
        VAR8.VAR22 = VAR7->VAR22;
        FUN2();
        VAR9 = (VAR8.VAR18 == 8);
        if (VAR9)
        {
            if (VAR12 + 1 == VAR14)
            {
                FUN3("");
            }
            VAR7 = &VAR4->VAR16[(VAR12 + 1) % VAR17];
            VAR8.VAR20 |= ((VAR23)VAR7->VAR20) << 32;
            FUN2();
        }
        FUN4(VAR2, &VAR8);
        assert(VAR8.VAR2 == VAR10);
        assert(VAR8.VAR11 == 1);
        assert(!VAR8.VAR24);
        FUN5(&VAR4->VAR13, VAR9 + 1);
    }
    return VAR8.VAR11;
}