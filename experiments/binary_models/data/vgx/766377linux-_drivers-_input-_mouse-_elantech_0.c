static int FUN1(struct VAR1 *VAR1,
struct VAR2 *VAR3,
bool VAR4)
{
int VAR5;

if (VAR6 == VAR7)
return -VAR8;

if (VAR6 == VAR9) {

if (!FUN2(VAR3->VAR10) ||
FUN3(VAR1, VAR11))
return -VAR8;
}

FUN4(VAR1, "");

VAR5 = FUN5(VAR1, VAR3, VAR4);
if (VAR5) {
if (VAR5 == -VAR12)
FUN4(VAR1, "");
else
FUN6(VAR1, "");

return VAR5;
}

return 0;
}