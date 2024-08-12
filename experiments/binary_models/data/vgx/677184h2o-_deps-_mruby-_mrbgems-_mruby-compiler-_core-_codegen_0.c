static int
FUN1(VAR1 *VAR2, mrb_sym VAR3)
{
VAR4 *VAR5 = VAR2->VAR5;
int VAR6 = 1;

while (VAR5) {
if (FUN2(VAR5) == VAR3) return VAR6;
VAR6++;
VAR5 = VAR5->VAR7;
}
return 0;
}