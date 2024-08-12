static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
char *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR3);
unsigned int VAR9;
unsigned int VAR10;
unsigned int VAR11;
bool VAR12 = true;
int VAR13;

FUN3(&VAR8->mutex);


FUN4(VAR8);

VAR13 = FUN5(VAR8->VAR14, VAR15, &VAR10);
if (VAR13) {
FUN6(VAR3, "", VAR13);
VAR12 = false;
goto VAR16;
}

VAR11 = (VAR10 - 1) & VAR17;

VAR13 = FUN7(VAR8->VAR14, VAR15, VAR11);
if (VAR13) {
FUN6(VAR3, "", VAR13);
VAR12 = false;
goto VAR16;
}

VAR13 = FUN5(VAR8->VAR14, VAR15, &VAR9);
if (VAR13) {
FUN6(VAR3, "",
VAR13);
VAR12 = false;
goto VAR16;
}

if (VAR9 != VAR11) {
FUN6(VAR3, "",
VAR9, VAR11);
VAR12 = false;
}


FUN8(VAR8);

if (!VAR12)
goto VAR16;


VAR13 = FUN5(VAR8->VAR14, VAR15, &VAR9);
if (VAR13) {
FUN6(VAR3, "",
VAR13);
VAR12 = false;
goto VAR16;
}

if (VAR9 != VAR10) {
FUN6(VAR3, "",
VAR9, VAR10);
VAR12 = false;
}

VAR16:
FUN9(VAR8);
FUN10(&VAR8->mutex);

return sprintf(VAR6, "", VAR12);
}