static void FUN1(VAR1 *VAR2)
{
    const int VAR3 = 1;
    switch (FUN2(VAR2, VAR3))
    {
    case VAR4:
        if (!FUN3(VAR2))
        {
            break;
        }
        FUN4(VAR2, VAR3, VAR5);
    case VAR5:
        if (!FUN3(VAR2))
        {
            FUN5(VAR2, VAR3);
            FUN4(VAR2, VAR3, VAR4);
            break;
        }
        if (VAR2->VAR6 & VAR7)
        {
            FUN6("");
            break;
        }
        if (VAR2->VAR8 == 0)
        {
            break;
        }
        FUN4(VAR2, VAR3, VAR9);
        FUN7(VAR2, VAR3);
        if (VAR2->VAR10 & VAR11)
        {
            FUN8(VAR2);
            FUN6("");
            VAR2->VAR10 &= ~VAR11;
            FUN9(VAR2, VAR7);
        }
        break;
    default:
        fprintf(VAR12, ""
                        "",
                VAR2->VAR13);
        assert(0);
    }
}