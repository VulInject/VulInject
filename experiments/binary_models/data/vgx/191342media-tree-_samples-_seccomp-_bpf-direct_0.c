static void FUN1(int VAR1, VAR2 *VAR3, void *VAR4)
{
VAR5 *VAR6 = (VAR5 *)(VAR4);
int VAR7;
char *VAR8;
ssize_t VAR9;
size_t VAR10;
if (VAR3->VAR11 != VAR12)
return;
if (!VAR6)
return;
VAR7 = VAR6->VAR13.VAR14[VAR15];
VAR8 = (char *) VAR6->VAR13.VAR14[VAR16];
VAR10 = (VAR17) VAR6->VAR13.VAR14[VAR18];

if (VAR7 != VAR19)
return;
if (VAR6->VAR13.VAR14[VAR20] != VAR21)
return;

VAR6->VAR13.VAR14[VAR22] = -1;
if (write(VAR23, "", 6) > 0) {
VAR9 = write(VAR23, VAR8, VAR10);
VAR6->VAR13.VAR14[VAR22] = VAR9;
}
return;
}