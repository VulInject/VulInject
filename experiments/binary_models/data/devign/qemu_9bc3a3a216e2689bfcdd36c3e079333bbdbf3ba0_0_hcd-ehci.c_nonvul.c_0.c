static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3;
    uint32_t VAR4;
    const int VAR5 = 0;
    switch (FUN2(VAR2, VAR5))
    {
    case VAR6:
        if (!(VAR2->VAR7 & 7) && FUN3(VAR2))
        {
            FUN4(VAR2, VAR5, VAR8);
        }
        else
            break;
    case VAR8:
        if (!(VAR2->VAR7 & 7) && !FUN3(VAR2))
        {
            FUN5(VAR2, VAR5);
            FUN4(VAR2, VAR5, VAR6);
            break;
        }
        VAR4 = VAR2->VAR9 & 0xfffff000;
        if (VAR4 == 0)
        {
            break;
        }
        VAR4 |= ((VAR2->VAR7 & 0x1ff8) >> 1);
        FUN6(&VAR2->VAR10, VAR4, &VAR3, sizeof VAR3);
        VAR3 = FUN7(VAR3);
        FUN8("", VAR2->VAR7 / 8, VAR4, VAR3);
        FUN9(VAR2, VAR5, VAR3);
        FUN4(VAR2, VAR5, VAR11);
        FUN10(VAR2, VAR5);
        FUN11(VAR2, VAR5);
        break;
    default:
        fprintf(VAR12, ""
                        "",
                VAR2->VAR13);
        assert(0);
    }
}