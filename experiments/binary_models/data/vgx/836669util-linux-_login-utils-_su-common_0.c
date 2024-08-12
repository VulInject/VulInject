static int FUN1(struct VAR1 *VAR2)
{
pid_t VAR3 = (VAR4) -1;
int VAR5 = 0;

if (VAR2->VAR6 == (VAR4) -1)
return VAR2->VAR7;

if (VAR2->VAR6 != (VAR4) -1) {

FUN2(VAR8, FUN3("", VAR2->VAR6));
for (;;) {
VAR3 = FUN4(VAR2->VAR6, &VAR5, VAR9);

if (VAR3 != (VAR4) - 1 && FUN5(VAR5)) {
FUN2(VAR8, FUN3(""));
FUN6(FUN7(), VAR10);

FUN6(VAR3, VAR11);
FUN2(VAR8, FUN3(""));

if (VAR2->VAR12 && FUN8(VAR2->VAR13)) {
FUN2(VAR8, FUN3(""));
return 0;
}
} else
break;
}
}
if (VAR3 != (VAR4) -1) {
if (FUN9(VAR5)) {
fprintf(VAR14, "",
FUN10(FUN11(VAR5)),
FUN12(VAR5) ? FUN13("")
: "");
VAR5 = FUN11(VAR5) + 128;
} else
VAR5 = FUN14(VAR5);

FUN2(VAR8, FUN3("", VAR2->VAR6));
VAR2->VAR6 = (VAR4) -1;	
VAR2->VAR7 = VAR5;

if (VAR2->VAR12)
FUN15(VAR2->VAR13, (VAR4) -1);
} else if (VAR15)
VAR5 = VAR15 + 128;
else
VAR5 = 1;

FUN2(VAR8, FUN3("", VAR5));
return VAR5;
}