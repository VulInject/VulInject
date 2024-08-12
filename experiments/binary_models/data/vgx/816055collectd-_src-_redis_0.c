static int FUN1(VAR1 *VAR2) 
{
VAR3 *VAR4 = VAR2->VAR5;

if (VAR4->socket)
FUN2("", VAR4->VAR6,
VAR4->socket);
else
FUN2("", VAR4->VAR6,
VAR4->VAR7, VAR4->VAR8);

FUN3(VAR4);

if (!VAR4->VAR9) 
return -1;

FUN4(VAR4);

if (!VAR4->VAR9) 
return -1;

if (VAR4->VAR10) {
FUN5(VAR4);

if (!VAR4->VAR9) 
return -1;
}

for (VAR11 *VAR12 = VAR4->VAR13; VAR12 != NULL; VAR12 = VAR12->VAR14) {
FUN6(VAR4, VAR12);
if (!VAR4->VAR9) 
return -1;
}

return 0;
}