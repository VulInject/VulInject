static void FUN1(int VAR1, char *VAR2, struct VAR3 *VAR4)
{
int VAR5;
int VAR6;
char VAR7[64];
char VAR8[64];

VAR6 = FUN2(VAR4);
if (VAR6 < 0)
return;
VAR5 = FUN3(VAR4);
if (VAR5 < 0)
return;

snprintf(VAR7, sizeof(VAR7), "", VAR6);
snprintf(VAR8, sizeof(VAR8), "", VAR5);


FUN4(VAR1, VAR2, VAR9, -1,
VAR7, VAR8);
}