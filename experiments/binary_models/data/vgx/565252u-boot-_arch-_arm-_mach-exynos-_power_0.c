static void FUN1(unsigned int VAR1,
unsigned int VAR2)
{
struct VAR3 *VAR4 =
(struct VAR3 *)FUN2();
unsigned int VAR5, VAR6 = 0;

if (VAR1 == 0)
VAR5 = (unsigned int)&VAR4->VAR7;
else
VAR5 = (unsigned int)&VAR4->VAR8;


VAR6 = FUN3(VAR5);
if (VAR2)
VAR6 |= (VAR9 | VAR10);
else
VAR6 &= ~(VAR9 | VAR10);

FUN4(VAR6, VAR5);
}