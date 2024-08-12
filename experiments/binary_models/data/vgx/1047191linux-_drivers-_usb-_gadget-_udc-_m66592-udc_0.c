static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3 = VAR2->VAR3;
u16 VAR4 = VAR2->VAR4;

if (VAR4 == 0)
return;

if (VAR2->VAR5)
VAR3->VAR6--;
VAR2->VAR4 = 0;
VAR2->VAR7 = 0;
VAR2->VAR5 = 0;
}