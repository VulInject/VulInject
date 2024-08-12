static VAR1 FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5;
struct VAR6 *VAR7 = NULL;	
s32 VAR8 = 0;
int VAR9;

VAR5 = (struct VAR4 *)VAR3->VAR10.VAR11;
if (VAR5->VAR12 != 0 &&
VAR5->VAR13 != VAR14) {
FUN2("",
VAR5->VAR13);
return -VAR15;
}
FUN3(VAR16, "", VAR5->VAR12);
for (VAR9 = 0; VAR9 < VAR5->VAR12; VAR9++) {
VAR7 = FUN4(VAR5, VAR7);
VAR8 = FUN5(VAR3, VAR7);
if (VAR8)
break;
}
return VAR8;
}