void FUN1(VAR1 *VAR2)
{
char *VAR3;
char *VAR4;
static int VAR5 = 0;

if (!VAR5) {
FUN2(VAR2);
VAR5 = 1;
}

VAR4 = VAR2->VAR6;

while (VAR4 && VAR4[0] != '') {

if ((VAR3 = FUN3(&VAR4, "")) == NULL) {
VAR3 = VAR4;
VAR4 = NULL;
}

FUN4(VAR2, VAR3, "", 0);
}

VAR2->VAR6 = NULL;
}