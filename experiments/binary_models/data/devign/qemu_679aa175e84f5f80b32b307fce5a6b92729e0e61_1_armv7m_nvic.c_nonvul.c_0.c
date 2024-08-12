static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR4);
    VAR6->FUN4(VAR2);
    VAR4->VAR7.VAR8[0] = true;
    VAR4->VAR7.VAR9[0] = 0x100;
    VAR4->VAR7.VAR10 = 1;
    FUN5(VAR4);
}