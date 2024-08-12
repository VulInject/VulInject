static int FUN1(struct VAR1 *VAR2)
{
int VAR3 = 0;

if (VAR2->VAR4 != VAR5)
return -VAR6;

if (VAR2->VAR7 & VAR8)
return -VAR9;

if (VAR2->VAR10 == 0) {
VAR3 = FUN2(VAR2);
if (VAR3) {
FUN3("",
VAR2->VAR11, VAR2->VAR4);
return -VAR6;
}
}

if (!(VAR2->VAR7 & VAR12))
VAR3 = FUN4(VAR2);

return VAR3;
}