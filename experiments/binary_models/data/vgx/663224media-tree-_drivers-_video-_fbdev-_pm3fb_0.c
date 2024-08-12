static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;

FUN2(VAR4, 2);
FUN3(VAR4, VAR5, VAR6);
FUN3(VAR4, VAR7, 0);
FUN4();
do {
while ((FUN5(VAR4, VAR8)) == 0)
FUN6();
} while ((FUN5(VAR4, VAR9)) != VAR10);

return 0;
}