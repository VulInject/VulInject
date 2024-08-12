static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;

if (VAR6->VAR8 != VAR9)
return 0;
*VAR4 = (FUN2(VAR6, 0x26) << 8) |
FUN2(VAR6, 0x27);
FUN3("", *VAR4);

return 0;
}