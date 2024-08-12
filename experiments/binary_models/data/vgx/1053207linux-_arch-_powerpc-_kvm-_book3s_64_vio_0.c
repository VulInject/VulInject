static void FUN1(struct VAR1 *VAR2,
unsigned long VAR3, unsigned long VAR4)
{
struct VAR5 *VAR5;
VAR6 *VAR7;
unsigned long VAR8;

VAR3 -= VAR2->VAR9;
VAR8 = VAR3 / VAR10;
VAR5 = VAR2->VAR11[VAR8];

if (!VAR5) {

if (!VAR4)
return;

VAR5 = FUN2(VAR2, VAR8);
if (!VAR5)
return;
}
VAR7 = FUN3(VAR5);

VAR7[VAR3 % VAR10] = VAR4;
}