FUN1 (VAR1 *VAR2, 
VAR3 *VAR4, 
size_t VAR5) 
{
FUN2 (FUN3 ());

VAR6 *VAR7 = (VAR6 *) VAR2;
jerryx_socket_size_t VAR8 = (VAR9) VAR5;

do
{
ssize_t VAR10 = recv (VAR7->VAR11, NULL, 0, VAR12);

if (VAR10 == 0 && VAR13 != VAR14)
{
int VAR15 = VAR13;
FUN4 ();
FUN5 (VAR15);
return false;
}

jerryx_socket_ssize_t VAR16 = send (VAR7->VAR11,
(VAR17 *) VAR4,
VAR8,
0);

if (VAR16 < 0)
{
int VAR15 = FUN6 ();

if (VAR15 == VAR14)
{
continue;
}

FUN4 ();
FUN5 (VAR15);
return false;
}

VAR4 += VAR16;
VAR8 -= (VAR9) VAR16;
}
while (VAR8 > 0);

return true;
}