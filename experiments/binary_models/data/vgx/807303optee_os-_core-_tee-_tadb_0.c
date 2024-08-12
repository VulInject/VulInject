static VAR1 FUN1(struct VAR2 **VAR3)
{
TEE_Result VAR4 = VAR5;

FUN2(&VAR6);
if (!VAR7) {
assert(!VAR8);
VAR4 = FUN3(&VAR8);
if (VAR4)
goto VAR9;
}
VAR7++;
*VAR3 = VAR8;
VAR9:
FUN4(&VAR6);
return VAR4;
}