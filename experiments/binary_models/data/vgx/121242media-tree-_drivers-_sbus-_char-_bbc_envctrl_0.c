static void FUN1(struct VAR1 *VAR2)
{
static int VAR3 = 0;
char *VAR4 = "";
s8 VAR5 = -1;

if (VAR3 != 0)
return;

if (VAR2->VAR6 >= VAR7[VAR2->VAR8].VAR9 ||
VAR2->VAR6 < VAR7[VAR2->VAR8].VAR10) {
VAR4 = "";
VAR5 = VAR2->VAR6;
} else if (VAR2->VAR11 >= VAR12[VAR2->VAR8].VAR9 ||
VAR2->VAR11 < VAR12[VAR2->VAR8].VAR10) {
VAR4 = "";
VAR5 = VAR2->VAR11;
}

FUN2(VAR13 ""
"",
VAR2->VAR8, VAR4, VAR5);

FUN2(VAR13 "");

VAR3 = 1;
FUN3(true);
}