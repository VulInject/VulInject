static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3,
const char *VAR4, size_t VAR5)
{
struct VAR6 *VAR7 = VAR2->VAR7;
unsigned int VAR8;
int VAR9, VAR10;

VAR9 = FUN2((VAR11 *)VAR4, VAR5 / 4);
if (VAR9 < 0)
return -VAR12;

VAR10 = FUN3((VAR11 *)VAR4, VAR5 / 4);
if (VAR10 < 0)
return -VAR12;

VAR8 = FUN4(VAR3, VAR9, VAR10);

FUN5(VAR7->VAR13, VAR14,
VAR15,
VAR8 << VAR16);

return 0;
}