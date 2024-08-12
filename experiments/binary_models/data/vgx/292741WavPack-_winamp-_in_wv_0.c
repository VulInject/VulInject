void FUN1 (HWND VAR1)
{
char VAR2 [512];
int VAR3;
HANDLE VAR4;
DWORD VAR5;

if (!VAR6)
FUN2 ();

VAR3 = (int) FUN3 (VAR6, "", VAR1, (VAR7) VAR8, VAR9);

if (VAR3 == VAR9 || (VAR3 & 0xffffff00) ||
(VAR3 & 6) == 6 || (VAR3 & 0x18) == 0x18)
return;

VAR9 = VAR3;

if (FUN4 (VAR2)) {
strcat (VAR2, "");

VAR4 = FUN5 (VAR2, VAR10, 0, NULL,
VAR11, VAR12, NULL);

if (VAR4 == VAR13) {
FUN4 (VAR2);
strcat (VAR2, "");

if (FUN6 (VAR2, NULL)) {
strcat (VAR2, "");

VAR4 = FUN5 (VAR2, VAR10, 0, NULL,
VAR11, VAR12, NULL);
}
}

if (VAR4 == VAR13)
return;

FUN7 (VAR4, &VAR9, sizeof (VAR9), &VAR5, NULL);
FUN8 (VAR4);
}
}