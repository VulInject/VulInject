static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR4->VAR7 = VAR6->VAR8[0x74] | (VAR6->VAR8[0x76] << 8);
    VAR4->VAR9 = 0x0;
    FUN4(FUN5(VAR4));
    FUN6(VAR4);
    VAR2->VAR10->VAR11 = "";
    return 0;
}