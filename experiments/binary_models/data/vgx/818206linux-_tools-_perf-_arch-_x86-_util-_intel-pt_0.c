static int FUN1(struct VAR1 *VAR1)
{
const char *VAR2 = "";
struct VAR3 *VAR3;
int VAR4;

if (!FUN2(VAR1, VAR2))
return -VAR5;

VAR3 = FUN3(VAR1, true);
if (FUN4(VAR3)) {
VAR4 = FUN5(VAR3);
FUN6("",
VAR6, VAR2, VAR4);
return VAR4;
}

VAR3->VAR7 = true;

return 0;
}