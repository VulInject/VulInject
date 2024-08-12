int FUN1(struct VAR1 *VAR2, const char *VAR3)
{
const char *VAR4 = "";
mode_t VAR5 = 0644;
char VAR6[4096];
int VAR7, VAR8;
int VAR9 = -1;

VAR8 = FUN2(VAR2, VAR4, VAR10);
if (VAR8 < 0) {
FUN3("");
return -1;
}

VAR7 = creat(VAR3, VAR5);
if (VAR7 < 0) {
FUN3("", VAR3);
goto VAR11;
}

do {
VAR9 = read(VAR8, VAR6, sizeof(VAR6));
if (VAR9 <= 0)
goto VAR12;

VAR9 = write(VAR7, VAR6, VAR9);
if (VAR9 < 0)
goto VAR12;
} while (VAR9 > 0);

VAR9 = 0;
VAR12:
close(VAR7);
VAR11:
close(VAR8);
return VAR9;
}