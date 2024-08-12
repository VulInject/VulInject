static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    uint32_t VAR8, VAR9;
    int64_t VAR10 = FUN2(VAR7);
    FUN3(VAR7, VAR4->VAR11, VAR12);
    FUN4("" VAR13 "", VAR4->VAR11);
    for (;;)
    {
        if (FUN5(VAR7))
            break;
        VAR8 = FUN6(VAR7);
        VAR9 = FUN6(VAR7);
        FUN4("", VAR8 & 0xff, (VAR8 >> 8) & 0xff, (VAR8 >> 16) & 0xff, (VAR8 >> 24) & 0xff, VAR9);
        switch (VAR8)
        {
        case FUN7('', '', '', ''):
            if (FUN8(VAR2, VAR9) < 0)
                goto VAR14;
            else
                goto VAR15;
            break;
        default:
        VAR14:
            VAR9 += (VAR9 & 1);
            FUN9(VAR7, VAR9);
            break;
        }
    }
VAR15:
    FUN3(VAR7, VAR10, VAR12);
    return 0;
}