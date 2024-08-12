static int FUN1(const char *VAR1, struct VAR2 *VAR3)
{
struct stat VAR4;
char VAR5[] = "";
char VAR6[VAR7];
int VAR8, VAR9, VAR10, VAR11;

VAR3->VAR12 = 4;
memcpy(VAR3->VAR2, "", VAR3->VAR12);

VAR9 = mkstemp(VAR5);
if (VAR9 == -1)
return -VAR13;

VAR8 = write(VAR9, VAR3->VAR2, VAR3->VAR12);

close(VAR9);

if (VAR8 != VAR3->VAR12) {
VAR8 = -VAR14;
goto VAR15;
}

VAR11 = FUN2();

if (VAR11 == -1) {
VAR8 = -VAR13;
goto VAR15;
}

if (VAR11 == 0) {
snprintf(VAR6, sizeof(VAR6), "", VAR1);

return execlp("", "", "", "",
VAR6, VAR6, VAR5, NULL);
}

FUN3(VAR11, &VAR10, 0);

VAR8 = FUN4(VAR10);
if (VAR8)
goto VAR15;

snprintf(VAR6, sizeof(VAR6), "", VAR5);

VAR8 = FUN5(VAR6, &VAR4);
if (VAR8 == -1) {
VAR8 = -VAR13;
goto VAR15;
}

if (VAR4.VAR16 > sizeof(VAR3->VAR17)) {
VAR8 = -VAR18;
goto VAR19;
}

VAR3->VAR20 = VAR4.VAR16;

VAR9 = open(VAR6, VAR21);
if (VAR9 == -1) {
VAR8 = -VAR13;
goto VAR19;
}

VAR8 = read(VAR9, VAR3->VAR17, VAR3->VAR20);

close(VAR9);

if (VAR8 != VAR3->VAR20) {
VAR8 = -VAR14;
goto VAR19;
}

VAR8 = 0;
VAR19:
unlink(VAR6);
VAR15:
unlink(VAR5);
return VAR8;
}