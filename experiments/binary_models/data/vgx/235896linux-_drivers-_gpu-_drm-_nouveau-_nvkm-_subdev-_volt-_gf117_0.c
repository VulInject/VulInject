static int
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5.VAR4;
struct VAR6 *VAR7 = VAR4->VAR7;

if (!VAR7)
return -VAR8;

return FUN2(VAR7, 0x3a8);
}