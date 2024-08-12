static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    if ((VAR4->VAR5 & ~VAR6) || (VAR4->VAR7 & ~VAR8))
    {
        FUN2(""
                    "" VAR9 "" VAR9 "",
                    VAR4->VAR5 & ~VAR6, VAR4->VAR7 & ~VAR8);
    }
    VAR4->VAR5 &= VAR6;
    VAR4->VAR7 &= VAR8;
    return 0;
}