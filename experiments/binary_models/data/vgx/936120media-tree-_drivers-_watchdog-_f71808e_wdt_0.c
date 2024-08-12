static VAR1 FUN1(struct VAR2 *VAR2, const char VAR3 *VAR4,
size_t VAR5, VAR6 *VAR7)
{
if (VAR5) {
if (!VAR8) {
size_t VAR9;


bool VAR10 = false;

for (VAR9 = 0; VAR9 != VAR5; VAR9++) {
char VAR11;
if (FUN2(VAR11, VAR4 + VAR9))
return -VAR12;
VAR10 = (VAR11 == '');
}


FUN3(&VAR13.VAR14);
VAR13.VAR10 = VAR10;
FUN4(&VAR13.VAR14);
}


FUN5();
}
return VAR5;
}