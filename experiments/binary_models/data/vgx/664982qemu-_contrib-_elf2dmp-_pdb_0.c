static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
int VAR4 = 0;
const char VAR5[] = "";

if (memcmp(VAR3, VAR5, sizeof(VAR5) - 1)) {
return 1;
}

if (FUN2(VAR2, VAR3)) {
return 1;
}

VAR2->VAR6.VAR7 = FUN3(VAR2, 1);
if (!VAR2->VAR6.VAR7) {
VAR4 = 1;
goto VAR8;
}

if (FUN4(VAR2)) {
VAR4 = 1;
goto VAR9;
}

if (FUN5(VAR2)) {
VAR4 = 1;
goto VAR10;
}

return 0;

VAR10:
FUN6(VAR2);
VAR9:
free(VAR2->VAR6.VAR7);
VAR8:
FUN7(VAR2);

return VAR4;
}