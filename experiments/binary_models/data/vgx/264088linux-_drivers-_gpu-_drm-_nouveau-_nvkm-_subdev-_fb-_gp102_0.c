bool
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5.VAR4;
FUN2(VAR4, 0x100cd0, 0x2);
return (FUN3(VAR4, 0x100cd0) & 0x00000010) != 0;
}