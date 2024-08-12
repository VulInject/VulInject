static int
FUN1(const unsigned long VAR1)
{
int VAR2 = 0;
u_char VAR3[16];
size_t VAR4 = 0;
VAR5 *VAR6 = VAR7->VAR6;

memset(VAR3, '', sizeof(VAR3));
FUN2((char *)VAR3, (char *)FUN3(VAR1, VAR8),
sizeof(VAR3));
if (FUN4(&VAR6->VAR9, (char *)VAR3, VAR4, NULL, VAR2) == 0) {
return 1;
} else {
return 0;
}
}