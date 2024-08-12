static void FUN1(struct VAR1 *VAR2, void *VAR3, void *VAR4, void *VAR5,
void *VAR6)
{
unsigned long long VAR7;
int VAR8 = *(int *)VAR6;
int VAR9;

if (VAR8 && !VAR10) {
FUN2(1, "", 0, 0);
FUN3(0);
}

if (VAR8) {
VAR9 = FUN4(VAR2, VAR10);
FUN5(VAR2, VAR11, "", "", VAR9);
return;
}

VAR9 = FUN6(VAR2, &VAR7);
if (VAR9)
FUN5(VAR2, VAR11, "", "", VAR9);
else
FUN7(VAR2, VAR11, VAR7);
}