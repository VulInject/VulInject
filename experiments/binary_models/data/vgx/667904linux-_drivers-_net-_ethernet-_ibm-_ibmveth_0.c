static int FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR2->VAR4 = FUN2(VAR2->VAR5, sizeof(VAR6), VAR7);

if (!VAR2->VAR4)
return -1;

VAR2->VAR8 = FUN3(VAR2->VAR5, sizeof(VAR9), VAR7);
if (!VAR2->VAR8) {
FUN4(VAR2->VAR4);
VAR2->VAR4 = NULL;
return -1;
}

VAR2->VAR10 = FUN3(VAR2->VAR5, sizeof(void *), VAR7);

if (!VAR2->VAR10) {
FUN4(VAR2->VAR8);
VAR2->VAR8 = NULL;

FUN4(VAR2->VAR4);
VAR2->VAR4 = NULL;
return -1;
}

for (VAR3 = 0; VAR3 < VAR2->VAR5; ++VAR3)
VAR2->VAR4[VAR3] = VAR3;

FUN5(&VAR2->VAR11, 0);
VAR2->VAR12 = 0;
VAR2->VAR13 = 0;

return 0;
}