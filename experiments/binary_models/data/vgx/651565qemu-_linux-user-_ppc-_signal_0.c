static VAR1 FUN1(struct VAR2 *VAR3,
VAR4 *VAR5,
int VAR6)
{
target_ulong VAR7;

VAR7 = FUN2(FUN3(VAR5), VAR3);

return (VAR7 - VAR6) & ~0xFUL;
}