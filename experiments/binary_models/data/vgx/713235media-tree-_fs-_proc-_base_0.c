static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR2)
{
struct VAR3 *VAR4 = FUN2(FUN3(VAR1));
int VAR5 = -VAR6;

if (VAR4) {
FUN4(VAR4);
if (VAR4->VAR7) {
FUN5(VAR4->VAR7, VAR2);
VAR5 = 0;
}
FUN6(VAR4);
FUN7(VAR4);
}
return VAR5;
}