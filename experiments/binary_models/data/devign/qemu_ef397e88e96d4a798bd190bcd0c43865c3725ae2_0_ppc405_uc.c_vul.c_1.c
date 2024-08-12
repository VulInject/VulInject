void FUN1(VAR1 *VAR2)
{
    target_ulong VAR3;
    FUN2("");
    FUN3(VAR2);
    VAR3 = VAR2->VAR4[VAR5];
    VAR3 &= ~0x00000300;
    VAR3 |= 0x00000100;
    VAR2->VAR4[VAR5] = VAR3;
    FUN4();
}