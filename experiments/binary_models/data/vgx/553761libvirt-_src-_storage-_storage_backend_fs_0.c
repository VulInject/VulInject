static int
FUN1(VAR1 *VAR2)
{
int VAR3 = -1;
VAR4 *VAR5 = FUN2(VAR2);
VAR6 *VAR7;
struct mntent VAR8;
char VAR9[1024];
g_autofree char *VAR10 = NULL;

if ((VAR7 = fopen(VAR11, "")) == NULL) {
FUN3(VAR12,
FUN4(""),
VAR11);
goto VAR13;
}

if ((VAR10 = FUN5(VAR2)) == NULL)
goto VAR13;

while ((FUN6(VAR7, &VAR8, VAR9, sizeof(VAR9))) != NULL) {

if (FUN7(VAR8.VAR14, VAR5->VAR15.VAR16) &&
FUN7(VAR8.VAR17, VAR10)) {
VAR3 = 1;
goto VAR13;
}
}

VAR3 = 0;

VAR13:
FUN8(VAR7);
return VAR3;
}