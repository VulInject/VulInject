static void FUN1(void *VAR1)
{
    VAR2 *VAR3;
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR3 = VAR1;
    VAR5 = VAR3->VAR5;
    VAR7 = VAR5->VAR1;
    VAR3->VAR8[VAR9] |= 1 << 27;
    if ((VAR3->VAR8[VAR10] >> 26) & 0x1)
        FUN2(VAR3, VAR7->VAR11, 1);
    FUN3(VAR3, VAR5, 1);
    FUN4("" VAR12 "" VAR12 ""
           "" VAR13 "",
           VAR14, (int)((VAR3->VAR8[VAR10] >> 22) & 0x1), (int)((VAR3->VAR8[VAR10] >> 26) & 0x1), VAR3->VAR8[VAR10], VAR3->VAR8[VAR9], VAR7->VAR15);
}