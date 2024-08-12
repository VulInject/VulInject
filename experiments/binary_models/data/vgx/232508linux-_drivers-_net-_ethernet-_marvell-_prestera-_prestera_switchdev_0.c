static int FUN1(struct VAR1 *VAR2,
u16 VAR3)
{
struct VAR4 *VAR5;
struct VAR6 *VAR7;
int VAR8 = 0;

FUN2(VAR5, &VAR2->VAR9, VAR10) {
FUN2(VAR7, &VAR5->VAR11, VAR10) {
if (VAR7->VAR3 == VAR3) {
VAR8 += 1;
break;
}
}
}

return VAR8;
}