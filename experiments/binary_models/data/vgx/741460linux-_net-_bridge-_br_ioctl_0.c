static int FUN1(struct VAR1 *VAR1, int *VAR2, int VAR3)
{
struct VAR4 *VAR5;
int VAR6 = 0;

FUN2();
FUN3(VAR1, VAR5) {
if (VAR6 >= VAR3)
break;
if (FUN4(VAR5))
VAR2[VAR6++] = VAR5->VAR7;
}
FUN5();

return VAR6;
}