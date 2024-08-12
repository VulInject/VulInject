void FUN1(void)
{
if (VAR1) {
int VAR2;

FUN2(&VAR3);
for (VAR2 = 0; VAR2 < VAR4; VAR2++) {
FUN2(&VAR1[VAR2].VAR5);
FUN3(VAR1[VAR2].VAR6);
FUN4(&VAR1[VAR2].VAR5);
}
FUN3(VAR1);
FUN4(&VAR3);
}
if (VAR7) {
struct VAR8 *VAR9;
int VAR2;

FUN2(&VAR10);
for (VAR2 = 0; VAR2 < (1 << VAR11); VAR2++) {
int VAR12;

FUN5(VAR9,
&VAR7[VAR2],
VAR13) {
VAR12 = FUN6(VAR9);
if (VAR12)
FUN7(VAR14 ""
""
""
"",
VAR15, VAR12);
}
}
FUN3(VAR7);
FUN4(&VAR10);
}
FUN8();
return;
}