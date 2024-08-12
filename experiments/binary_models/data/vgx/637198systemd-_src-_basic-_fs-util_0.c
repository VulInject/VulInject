int FUN1(int VAR1, const char *VAR2, char **VAR3) {
size_t VAR4 = VAR5;

assert(VAR2);

for (;;) {
_cleanup_free_ char *VAR6 = NULL;
ssize_t VAR7;

VAR6 = new(char, VAR4+1);
if (!VAR6)
return -VAR8;

VAR7 = FUN2(VAR1, VAR2, VAR6, VAR4);
if (VAR7 < 0)
return -VAR9;

if ((VAR10) VAR7 < VAR4) {
VAR6[VAR7] = 0;

if (VAR3)
*VAR3 = FUN3(VAR6);

return 0;
}

if (VAR4 > (VAR11-1)/2) 
return -VAR12;

VAR4 *= 2;
}
}