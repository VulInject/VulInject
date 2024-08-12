void FUN1(struct VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
struct VAR6 *VAR6;
void *VAR7;

FUN2(VAR8, "", VAR3, VAR4, VAR5);
if (!VAR5)
return;
VAR4 += VAR2->VAR9;
VAR3 += VAR2->VAR9;
VAR6 = VAR2->VAR6[0];
VAR7 = FUN3(VAR6);
memmove(VAR7 + VAR3, VAR7 + VAR4, VAR5);
FUN4(VAR6);
FUN5(VAR6);
}