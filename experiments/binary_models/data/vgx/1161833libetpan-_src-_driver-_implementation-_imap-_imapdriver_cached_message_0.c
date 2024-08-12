static int FUN1(VAR1 * VAR2,
struct VAR3 ** VAR4)
{
int VAR5;
struct VAR3 * VAR6;

if (VAR2->VAR7 != NULL) {
* VAR4 = VAR2->VAR7;
return VAR8;
}

VAR5 = FUN2(FUN3(VAR2), &VAR6);
if (VAR5 != VAR8)
return VAR5;

FUN3(VAR2)->VAR7 = NULL;
VAR2->VAR7 = VAR6;
* VAR4 = VAR6;

return VAR8;
}