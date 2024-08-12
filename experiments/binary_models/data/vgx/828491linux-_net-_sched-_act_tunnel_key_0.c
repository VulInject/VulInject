static int FUN1(struct VAR1 *VAR2,
void *VAR3,
VAR4 *VAR5,
bool VAR6,
struct VAR7 *VAR8)
{
int VAR9;

if (VAR6) {
struct VAR10 *VAR11 = VAR3;

if (FUN2(VAR2)) {
VAR11->VAR12 = VAR13;
VAR9 = FUN3(VAR11, VAR2);
if (VAR9)
return VAR9;
} else if (FUN4(VAR2)) {
VAR11->VAR12 = VAR14;
} else {
FUN5(VAR8, "");
return -VAR15;
}
*VAR5 = 1;
} else {
struct VAR16 *VAR17 = VAR3;

if (FUN2(VAR2))
VAR17->VAR12 = VAR13;
else if (FUN4(VAR2))
VAR17->VAR12 = VAR14;
else
return -VAR15;
}

return 0;
}