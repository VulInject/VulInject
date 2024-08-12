typedef FUN1 (VAR1 * VAR2) (HANDLE VAR3,
DWORD VAR4,
LPSTR VAR5,
PDWORD VAR6);
static QueryFullProcessImageNameFuncType VAR7 = NULL;
static BOOL VAR8 = VAR9;

static void
FUN2 (void)
{
HMODULE VAR10 = LoadLibrary ("");
if (VAR10 != NULL)
{
VAR11 =
(VAR12) FUN3 (VAR10, "");
VAR7 =
(VAR2) FUN3 (VAR10, "");
}
VAR8 = VAR13;
}