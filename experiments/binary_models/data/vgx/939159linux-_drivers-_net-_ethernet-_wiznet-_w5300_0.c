static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
bool VAR5 = (VAR2->VAR6 & VAR7) != 0;

if (VAR4->VAR8 != VAR5) {
VAR4->VAR8 = VAR5;
FUN3(VAR4);
}
}