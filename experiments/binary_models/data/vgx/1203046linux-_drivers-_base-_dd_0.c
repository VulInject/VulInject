static int FUN1(struct VAR1 *VAR2, bool VAR3)
{
int VAR4 = 0;
bool VAR5 = false;

FUN2(VAR2);
if (VAR2->VAR6->VAR7) {
goto VAR8;
} else if (VAR2->VAR9) {
if (FUN3(VAR2)) {
VAR4 = 1;
goto VAR8;
}
VAR4 = FUN4(VAR2);
if (VAR4 == 0)
VAR4 = 1;
else {
VAR2->VAR9 = NULL;
VAR4 = 0;
}
} else {
struct device_attach_data VAR10 = {
.VAR2 = VAR2,
.VAR11 = VAR3,
.VAR12 = false,
};

if (VAR2->VAR13)
FUN5(VAR2->VAR13);

VAR4 = FUN6(VAR2->VAR14, NULL, &VAR10,
VAR15);
if (!VAR4 && VAR3 && VAR10.VAR16) {

FUN7(VAR2, "");
FUN8(VAR2);
VAR5 = true;
} else {
FUN9(VAR2);
}

if (VAR2->VAR13)
FUN10(VAR2->VAR13);
}
VAR8:
FUN11(VAR2);
if (VAR5)
FUN12(VAR17, VAR2);
return VAR4;
}