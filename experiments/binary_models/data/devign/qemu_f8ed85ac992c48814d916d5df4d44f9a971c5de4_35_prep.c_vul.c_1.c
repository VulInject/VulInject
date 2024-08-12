static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    char *VAR7;
    int VAR8 = -1;
    VAR2->VAR9[0x0C] = 0x08;
    VAR2->VAR9[0x0D] = 0x10;
    VAR2->VAR9[0x34] = 0x00;
    FUN3(&VAR6->VAR10, FUN4(VAR6), "", VAR11, &VAR12);
    FUN5(&VAR6->VAR10, true);
    FUN6(FUN7(), (VAR13)(-VAR11), &VAR6->VAR10);
    FUN8(&VAR6->VAR10);
    if (VAR6->VAR14)
    {
        VAR7 = FUN9(VAR15, VAR6->VAR14);
        if (VAR7)
        {
            if (VAR6->VAR16 != VAR17)
            {
                VAR8 = FUN10(VAR7, NULL, NULL, NULL, NULL, NULL, 1, VAR6->VAR16, 0);
            }
            if (VAR8 < 0)
            {
                VAR8 = FUN11(VAR7);
                if (VAR8 > 0 && VAR8 <= VAR11)
                {
                    hwaddr VAR18;
                    VAR8 = (VAR8 + 0xfff) & ~0xfff;
                    VAR18 = (VAR13)(-VAR11);
                    VAR8 = FUN12(VAR7, VAR18, VAR8);
                }
            }
        }
        if (VAR8 < 0 || VAR8 > VAR11)
        {
            FUN13("", VAR6->VAR14);
        }
        FUN14(VAR7);
    }
}