static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3, unsigned int VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7->VAR6;
unsigned int VAR8 = FUN2(VAR2, VAR4 + 1);

if (!FUN3(VAR6, VAR8)) {
FUN4("",
VAR3, VAR8);
return -VAR9;
}
return 0;
}