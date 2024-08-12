static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct rtc_time VAR5;
unsigned char VAR6;
int VAR7;

VAR6 = VAR8;
VAR7 = FUN2(&VAR2->VAR9, &VAR6, 1);
if (VAR7 || VAR6 != 0x20) {
FUN3(&VAR2->VAR9, "");
return -VAR10;
}


if (FUN4(&VAR2->VAR9, &VAR5)) {
FUN5(&VAR2->VAR9, "");
VAR5.VAR11  = 0;
VAR5.VAR12  = 0;
VAR5.VAR13 = 0;
VAR5.VAR14 = 1;
VAR5.VAR15  = 0;
VAR5.VAR16 = 100;

if (FUN6(&VAR2->VAR9, &VAR5) ||
FUN4(&VAR2->VAR9, &VAR5)) {
FUN3(&VAR2->VAR9, "");
return -VAR10;
}
}

VAR4 = FUN7(&VAR2->VAR9, "",
&VAR17, VAR18);
if (FUN8(VAR4))
return FUN9(VAR4);

FUN10(VAR2, VAR4);

return 0;
}