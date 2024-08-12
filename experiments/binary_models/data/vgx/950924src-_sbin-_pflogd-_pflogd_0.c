int
FUN1(VAR1 *VAR2)
{
off_t VAR3;
int VAR4 = VAR5 - VAR6;

if (VAR4 <= 0)
return (0);

VAR3 = FUN2(VAR2);
if (VAR3 == (VAR7)-1) {
FUN3(1);
FUN4(VAR8, "",
strerror(VAR9));
return (1);
}

if (fwrite(VAR6, VAR4, 1, VAR2) != 1) {
FUN3(1);
FUN4(VAR8, "",
strerror(VAR9));
FUN5(FUN6(VAR2), VAR3);
return (1);
}

FUN3(0);
VAR5 = VAR6;
VAR10 = VAR11;
VAR12 = 0;

return (0);
}