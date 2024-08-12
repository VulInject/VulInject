static int FUN1 (void *VAR1)
{
int VAR2 = FUN2 ((VAR3 *)VAR1);
HANDLE VAR4 = (VAR5) FUN3 (VAR2);
return (FUN4(VAR4) != 0) ? 0 : -1;
}


static int VAR6 = 0;
typedef FUN5 (VAR7 *VAR8)(VAR9,VAR10);
static DosSetFileSizeL_t VAR11 = NULL;

static void FUN6 (void)
{
HMODULE VAR4;
if (FUN7("", &VAR4) == 0) {
if (FUN8(VAR4, VAR12, NULL, (VAR13 *)&VAR11) != 0) {
VAR11 = NULL;
}
}
VAR6 = 1;
}