static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
void VAR5 *VAR6;
int VAR7;

if (!VAR4)
return -VAR8;

VAR6 = FUN2(VAR2, VAR9, 0x4);
if (!VAR6) {
FUN3(VAR2, "",
VAR9);
return -VAR10;
}

VAR7 = VAR4->VAR11 - VAR12;
VAR4->VAR13 = VAR7;
VAR7 >>= VAR14;
FUN4(VAR2, "", &VAR4->VAR11, VAR7);
FUN5(VAR7, VAR6);
if (VAR7 != FUN6(VAR6)) {
FUN3(VAR2, "", FUN6(VAR6));
return -VAR15;
}

return 0;
}