static int FUN1(int VAR1, int VAR2)
{
struct VAR3 *VAR4;
struct VAR5 *VAR6;
int VAR7 = -1;
VAR8 *VAR9;
int VAR10;
ssize_t VAR11;

VAR10 = VAR12 * 512 + 2 * VAR13;

VAR9 = malloc(VAR10);
if (!VAR9) {
FUN2("", VAR10);
goto VAR14;
}

memset(VAR9, 0, VAR10);

VAR4 = FUN3(VAR13);
if (!VAR4) {
FUN2("");
goto VAR15;
}

VAR6 = FUN4();
if (!VAR6) {
FUN2("");
goto VAR16;
}

VAR7 = FUN5(VAR4, VAR9);
if (VAR7) {
FUN2("");
goto VAR17;
}

VAR7 = FUN6(VAR6, VAR9);
if (VAR7) {
FUN2("");
goto VAR17;
}

VAR7 = FUN7(VAR4, VAR1, VAR9);
if (VAR7) {
FUN2("");
goto VAR17;
}

VAR11 = write(VAR2, VAR9, VAR10);
if (VAR11 != VAR10) {
VAR7 = -1;
goto VAR17;
}

VAR7 = 0;

VAR17:
free(VAR6);
VAR16:
free(VAR4);
VAR15:
free(VAR9);
VAR14:
return VAR7;
}