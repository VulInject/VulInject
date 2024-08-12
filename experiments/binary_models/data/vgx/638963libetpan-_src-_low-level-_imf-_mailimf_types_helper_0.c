int FUN1(struct VAR1 * VAR2,
char * VAR3)
{
int VAR4;
size_t VAR5;
struct VAR6 * VAR7;
int VAR8;

VAR5 = 0;
VAR4 = FUN2(VAR3, strlen(VAR3), &VAR5, &VAR7);
if (VAR4 != VAR9) {
VAR8 = VAR4;
goto VAR10;
}

VAR4 = FUN3(VAR2, VAR7);
if (VAR4 != VAR9) {
VAR8 = VAR4;
goto free;
}

return VAR9;

free:
FUN4(VAR7);
VAR10:
return VAR8;
}