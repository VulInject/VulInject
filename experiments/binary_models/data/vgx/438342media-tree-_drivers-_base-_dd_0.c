static int FUN1(struct VAR1 *VAR2, bool VAR3)
{
int VAR4 = 0;

FUN2(VAR2);
if (VAR2->VAR5) {
if (FUN3(VAR2)) {
VAR4 = 1;
goto VAR6;
}
VAR4 = FUN4(VAR2);
if (VAR4 == 0)
VAR4 = 1;
else {
VAR2->VAR5 = NULL;
VAR4 = 0;
}
} else {
struct device_attach_data VAR7 = {
.VAR2 = VAR2,
.VAR8 = VAR3,
.VAR9 = false,
};

if (VAR2->VAR10)
FUN5(VAR2->VAR10);

VAR4 = FUN6(VAR2->VAR11, NULL, &VAR7,
VAR12);
if (!VAR4 && VAR3 && VAR7.VAR13) {

FUN7(VAR2, "");
FUN8(VAR2);
FUN9(VAR14, VAR2);
} else {
FUN10(VAR2);
}

if (VAR2->VAR10)
FUN11(VAR2->VAR10);
}
VAR6:
FUN12(VAR2);
return VAR4;
}