static bool FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    const VAR5 *VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    bool VAR11 = false;
    const char *VAR12;
    for (VAR6 = FUN2(VAR4->VAR13); VAR6; VAR6 = FUN3(VAR4->VAR13, VAR6))
    {
        FUN4(VAR10, &VAR4->VAR14, VAR15)
        {
            if (FUN5(FUN6(VAR6), VAR10->VAR16, &VAR12) && (!*VAR12 || *VAR12 == ''))
            {
                break;
            }
        }
        if (VAR10)
        {
            continue;
        }
        for (VAR8 = VAR17.VAR8; VAR8->VAR16; VAR8++)
        {
            if (!strcmp(FUN6(VAR6), VAR8->VAR16))
            {
                break;
            }
        }
        if (VAR8->VAR16)
        {
            continue;
        }
        FUN7(FUN8(VAR6));
        FUN9(VAR2, FUN6(VAR6), FUN8(VAR6));
        VAR11 = true;
    }
    return VAR11;
}