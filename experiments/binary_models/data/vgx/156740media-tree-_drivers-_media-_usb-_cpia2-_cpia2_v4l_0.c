static int FUN1(struct VAR1 *VAR1, void *VAR2,
const struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR1);

FUN3("",
VAR4->VAR7, VAR4->VAR8);

VAR6->VAR9.VAR10.VAR11 =
!(VAR4->VAR12 & VAR13);

if(VAR4->VAR7 != 0) {
if(VAR4->VAR7 > 0 &&
VAR4->VAR7 <= sizeof(VAR6->VAR14) &&
VAR4->VAR15 >= 0 && VAR4->VAR15 <= 15) {
VAR6->VAR15 = VAR4->VAR15;
VAR6->VAR7 = VAR4->VAR7;
memcpy(VAR6->VAR14, VAR4->VAR14, VAR4->VAR7);
} else {
FUN4("",
VAR4->VAR15, VAR4->VAR7);
return -VAR16;
}
} else {
VAR6->VAR7 = 0;
}

if(VAR4->VAR8 != 0) {
if(VAR4->VAR8 > 0 &&
VAR4->VAR8 <= sizeof(VAR6->VAR17)) {
VAR6->VAR8 = VAR4->VAR8;
memcpy(VAR6->VAR17, VAR4->VAR17, VAR4->VAR8);
} else {
FUN4("", VAR4->VAR8);
return -VAR16;
}
}

return 0;
}