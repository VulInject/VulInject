void FUN1(struct VAR1 *VAR2, bool VAR3, bool VAR4, uint32_t VAR5)
{
    struct tcp_hdr VAR6;
    assert(VAR2);
    assert(VAR4 || !VAR3);
    VAR2->VAR7.VAR8 = FUN2(VAR2, VAR3);
    switch (VAR2->VAR7.VAR8 & ~VAR9)
    {
    case VAR10:
        VAR2->VAR7.VAR11 = 0;
        VAR2->VAR7.VAR5 = 0;
        break;
    case VAR12:
        VAR2->VAR7.VAR5 = VAR5;
        VAR2->VAR7.VAR11 = VAR2->VAR11 + sizeof(struct VAR13);
        break;
    case VAR14:
    case VAR15:
        FUN3(&VAR2->VAR16[VAR17], VAR2->VAR18, 0, &VAR6, sizeof(VAR6));
        VAR2->VAR7.VAR11 = VAR2->VAR11 + VAR6.VAR19 * sizeof(VAR20);
        VAR2->VAR7.VAR5 = VAR5;
        break;
    default:
        FUN4();
    }
    if (VAR4)
    {
        switch (VAR2->VAR21)
        {
        case VAR22:
            VAR2->VAR7.VAR23 = VAR24;
            VAR2->VAR7.VAR25 = VAR2->VAR11;
            VAR2->VAR7.VAR26 = FUN5(struct VAR27, VAR28);
            break;
        case VAR29:
            VAR2->VAR7.VAR23 = VAR24;
            VAR2->VAR7.VAR25 = VAR2->VAR11;
            VAR2->VAR7.VAR26 = FUN5(struct VAR30, VAR31);
            break;
        default:
            break;
        }
    }
}