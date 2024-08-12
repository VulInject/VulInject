static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR3 *VAR5)
{
size_t VAR6 = VAR4->VAR6;
const char *VAR7;

if (!VAR2->VAR8) {
if (VAR6 >= 2 &&
VAR4->VAR9[VAR6 - 2] == '' &&
VAR4->VAR9[VAR6 - 1] == '') {
VAR2->VAR10 = 1;
if (VAR2->VAR11 == VAR12) {
FUN2(VAR4, VAR6 - 2);
FUN3(VAR4, '');
VAR6--;
}
}
FUN4(VAR2, VAR4);
return;
}

if (VAR4->VAR9[VAR6 - 1] == '') {
VAR6--;
if (VAR6 && VAR4->VAR9[VAR6 - 1] == '')
VAR6--;
}


if (FUN5(VAR4->VAR9, "", &VAR7) && VAR7 - VAR4->VAR9 == VAR6) {
if (VAR5->VAR6) {
FUN4(VAR2, VAR5);
FUN6(VAR5);
}
FUN4(VAR2, VAR4);
return;
}


if (VAR6 && VAR4->VAR9[0] == '') {
FUN7(VAR4, 0, 1);
VAR6--;
}


if (VAR6 && VAR4->VAR9[VAR6 - 1] == '') {
FUN8(VAR5, VAR4->VAR9, VAR6 - !!VAR2->VAR13);
return;
}


FUN9(VAR4, 0, VAR5->VAR9, VAR5->VAR6);
FUN6(VAR5);

FUN4(VAR2, VAR4);
}