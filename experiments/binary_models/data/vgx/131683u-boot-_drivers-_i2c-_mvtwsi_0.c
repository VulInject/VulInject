static int FUN1(struct VAR1 *VAR2, int VAR3,
uint VAR4)
{
int VAR5, VAR6;
int VAR7 = 1000;

do {
VAR5 = FUN2(&VAR2->VAR5);
if (VAR5 & VAR8) {

FUN3(100);
VAR6 = FUN2(&VAR2->VAR6);
if (VAR6 == VAR3)
return 0;
else
return FUN4(
VAR9,
VAR5, VAR6, VAR3);
}
FUN3(VAR4); 
} while (VAR7--);
VAR6 = FUN2(&VAR2->VAR6);
return FUN4(VAR10, VAR5, VAR6,
VAR3);
}