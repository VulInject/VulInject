static enum VAR1 FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR3, struct VAR4, VAR3);
struct VAR6 *VAR7 = VAR5->VAR8->VAR9;

return FUN3(VAR5->VAR10, VAR7->VAR5) ? VAR3->VAR11 : 0;
}