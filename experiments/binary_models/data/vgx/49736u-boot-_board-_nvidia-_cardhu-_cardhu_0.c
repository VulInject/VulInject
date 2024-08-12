int FUN1(void)
{
struct VAR1 *VAR2;
u8 VAR3, VAR4[1];
int VAR5;

VAR5 = FUN2(0, VAR6, 1, &VAR2);
if (VAR5) {
FUN3("");
return VAR5;
}


VAR4[0] = 0x15;
VAR3 = 0x30;

VAR5 = FUN4(VAR2, VAR3, VAR4, 1);
if (VAR5) {
FUN3("");
return VAR5;
}


VAR5 = FUN5(FUN6(VAR7, 7), "");
if (VAR5 < 0)
return VAR5;

FUN7(FUN6(VAR7, 7), 1);


VAR4[0] = 0x15;
VAR3 = 0x31;

VAR5 = FUN4(VAR2, VAR3, VAR4, 1);
if (VAR5) {
FUN3("");
return VAR5;
}

return 0;
}