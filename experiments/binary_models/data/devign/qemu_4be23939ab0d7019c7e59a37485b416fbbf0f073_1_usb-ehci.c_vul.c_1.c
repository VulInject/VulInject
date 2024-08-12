static void FUN1(VAR1 *VAR2)
{
    const int VAR3 = 1;
    switch (FUN2(VAR2, VAR3))
    {
    case VAR4:
        if (!(VAR2->VAR5 & VAR6))
        {
            break;
        }
        FUN3(VAR2, VAR7);
        FUN4(VAR2, VAR3, VAR8);
    case VAR8:
        if (!(VAR2->VAR5 & VAR6))
        {
            FUN5(VAR2, VAR7);
            FUN4(VAR2, VAR3, VAR4);
            break;
        }
        if (VAR2->VAR5 & VAR9)
        {
            FUN6("");
            VAR2->VAR5 &= ~VAR9;
            FUN7(VAR2, VAR10);
            break;
        }
        if (VAR2->VAR11 & VAR10)
        {
            FUN6("");
            break;
        }
        if (VAR2->VAR12 == 0)
        {
            break;
        }
        FUN4(VAR2, VAR3, VAR13);
        FUN8(VAR2, VAR3);
        break;
    default:
        fprintf(VAR14, ""
                        "",
                VAR2->VAR15);
        assert(0);
    }
}