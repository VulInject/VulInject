int FUN1(struct VAR1 *VAR2, int VAR3)
{
pid_t VAR4;
int VAR5[2];
int VAR6[2];
int VAR7;

if (VAR3 && VAR8 - VAR2->VAR9 < 5)
{
FUN2(NULL, VAR10, "");
return -1;
}


VAR2->VAR9 = VAR8;


VAR7 = FUN3(VAR5);
if (VAR7) {
VAR7 = VAR11;
FUN4((VAR12, "", strerror(VAR7)));
return VAR7;
}


VAR7 = FUN5(VAR5[0]);
if (!VAR7) {
VAR7 = VAR11;
FUN4((VAR12, "", strerror(VAR7)));
close(VAR5[1]);
close(VAR5[0]);
return VAR7;
}


VAR7 = FUN6(FUN7(VAR2), VAR13, VAR2,
VAR14, VAR15, VAR5[0]);
if (!VAR7) {
VAR7 = VAR11;
FUN4((VAR12, "", strerror(VAR7)));
close(VAR5[1]);
close(VAR5[0]);
return VAR7;
}


VAR7 = FUN3(VAR6);
if (VAR7) {
VAR7 = VAR11;
FUN4((VAR12, "", strerror(VAR7)));
FUN8(FUN7(VAR2));
close(VAR5[1]);
close(VAR5[0]);
return VAR7;
}


VAR7 = FUN5(VAR6[0]);
if (!VAR7) {
VAR7 = VAR11;
FUN4((VAR12, "", strerror(VAR7)));
close(VAR6[1]);
close(VAR6[0]);
FUN8(FUN7(VAR2));
close(VAR5[1]);
close(VAR5[0]);
return VAR7;
}


VAR7 = FUN6(FUN9(VAR2), VAR16, VAR2,
VAR14, VAR15, VAR6[0]);
if (!VAR7) {
VAR7 = VAR11;
FUN4((VAR12, "", strerror(VAR7)));
close(VAR6[1]);
close(VAR6[0]);
FUN8(FUN7(VAR2));
close(VAR5[1]);
close(VAR5[0]);
return VAR7;
}


VAR4 = FUN10();
if (VAR4 < 0) {

VAR7 = VAR11;
FUN4((VAR12, "", strerror(VAR7)));
FUN8(FUN9(VAR2));
close(VAR6[1]);
close(VAR6[0]);
FUN8(FUN7(VAR2));
close(VAR5[1]);
close(VAR5[0]);
return VAR7;
}

if (VAR4 > 0) {

close(VAR5[1]);
close(VAR6[1]);

FUN11(NULL, "", FUN12()->VAR17, VAR18);

return 0;
}


if (FUN13(VAR5[1], 0) == 0
&& FUN13(VAR5[1], 1) == 1
&& FUN13(VAR6[1], 2) == 2) {
FUN14(0);
execvp(VAR2->VAR19[0], VAR2->VAR19);
}


FUN15(VAR20);
}