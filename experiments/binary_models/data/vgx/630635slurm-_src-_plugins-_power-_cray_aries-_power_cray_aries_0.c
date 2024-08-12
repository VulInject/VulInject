static void FUN1(void)
{

slurmctld_lock_t VAR1 = {
VAR2, VAR2, VAR3, VAR2, VAR2 };
VAR4 *VAR5;
hostset_t VAR6 = NULL;
char *VAR7, *VAR8;
int VAR9;

if (VAR10)
return;

FUN2(VAR1);
for (VAR9 = 0; (VAR5 = FUN3(&VAR9)); VAR9++) {
if (FUN4(VAR5))
continue;
if (!VAR6)
VAR6 = FUN5(FUN6(VAR5->VAR11));
else
FUN7(VAR6, FUN6(VAR5->VAR11));
}
FUN8(VAR1);
if (!VAR6) {
FUN9("", VAR12);
return;
}
VAR8 = FUN10(VAR6);
FUN11(VAR6);
if ((VAR7 = strrchr(VAR8, '')))
VAR7[0] = '';
if (VAR8[0] == '')
VAR10 = xstrdup(VAR8 + 1);
else
VAR10 = xstrdup(VAR8);
FUN12(VAR8);
}