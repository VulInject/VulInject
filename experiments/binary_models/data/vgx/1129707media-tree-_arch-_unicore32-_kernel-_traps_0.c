static void FUN1(const char *VAR1, struct VAR2 *VAR3)
{
unsigned long VAR4 = FUN2(VAR3);
const int VAR5 = 8;
mm_segment_t VAR6;
char VAR7[sizeof("") * 5 + 2 + 1], *VAR8 = VAR7;
int VAR9;


VAR6 = FUN3();
FUN4(VAR10);

for (VAR9 = -4; VAR9 < 1; VAR9++) {
unsigned int VAR11, VAR12;

VAR12 = FUN5(VAR11, &((VAR13 *)VAR4)[VAR9]);

if (!VAR12)
VAR8 += sprintf(VAR8, VAR9 == 0 ? "" : "",
VAR5, VAR11);
else {
VAR8 += sprintf(VAR8, "");
break;
}
}
FUN6(VAR14 "", VAR1, VAR7);

FUN4(VAR6);
}