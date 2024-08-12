static int FUN1(struct VAR1 *VAR2, unsigned VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
void VAR6 *VAR7 = VAR5->VAR8 + VAR9;
void VAR6 *VAR10 = VAR5->VAR8 + VAR11;

return FUN3(VAR3 >> 5 ? VAR10 : VAR7) & (1 << (VAR3 & 0x1f));
}