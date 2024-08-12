static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
unsigned short VAR7;
unsigned int VAR8;

if (!FUN2(VAR2, VAR9))
return 0;

VAR7 = VAR2->VAR10[2];
VAR8 = ((VAR2->VAR10[0] << 8) & 0xF00) + ((VAR2->VAR10[1] << 0) & 0x0FF);


if (VAR8 == 0) {
FUN3(VAR2, VAR4, VAR7);
return 0;
}


if ((VAR6 = FUN4(VAR8, VAR4)) != NULL) {
int VAR11 = 1;

FUN5(VAR2);
FUN6(VAR6);
if (!FUN7(VAR6)) {
VAR11 = FUN8(VAR6, VAR2);
} else {
VAR11 = !FUN9(VAR6, VAR2, VAR6->VAR12);
}
FUN10(VAR6);
FUN11(VAR6);
return VAR11;
}


if (VAR7 == VAR13)
return FUN12(VAR2, VAR4, VAR8);



if (FUN13(VAR8, VAR4, VAR2)) {
if (VAR7 == VAR14) {
FUN14(VAR8);
}
FUN15(VAR2);
return 1;
}



if (VAR7 != VAR14)
FUN16("",VAR7);

return 0;
}