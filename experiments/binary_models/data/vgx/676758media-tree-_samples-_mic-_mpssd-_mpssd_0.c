static VAR1
FUN1(struct VAR2 *VAR3)
{
if (FUN2(VAR3->VAR4) != sizeof(struct VAR5)) {
FUN3("",
VAR6, VAR7);
return -VAR8;
}
if (!(FUN4(VAR3->VAR9) & VAR10)) {
FUN3("",
VAR6, VAR7);
return -VAR8;
}
if (FUN4(VAR3->VAR9) & VAR11) {
FUN3("",
VAR6, VAR7);
return -VAR8;
}
return 0;
}