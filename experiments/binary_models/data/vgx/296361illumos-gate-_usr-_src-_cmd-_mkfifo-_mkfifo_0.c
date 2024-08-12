static void
FUN1();

void
FUN2(int VAR1, int VAR2, char *VAR3, ...);



extern VAR4
FUN3(char *VAR5, mode_t VAR6, mode_t VAR7, char *VAR8, char *VAR9);

int
main(int argc, char *argv[])
{
char *VAR9;
int VAR10 = 0;
int VAR11, VAR12;
int VAR13 = 0;
int VAR14 = 0;
mode_t VAR15 = FUN4(0);
mode_t VAR16 = VAR17 & (~VAR15);

(void) FUN5(VAR18, "");
(void) FUN6(VAR19);

if (argc < 2) {
FUN1();
FUN7(1);
}

while ((VAR11 = getopt(argc, argv, "")) != VAR20) {
switch (VAR11) {
case '':
VAR13++;
VAR16 = FUN3(VAR21, VAR17, VAR15, "", "");
break;

default:
VAR14++;
break;
}
}

if (argc < VAR22 || VAR14) {
FUN1();
FUN7(1);
}

for (VAR12 = VAR22; VAR12 < argc; VAR12++) {
VAR9 = argv[VAR12];
if (FUN8(VAR9, VAR16) < 0) {
FUN9("");
VAR10 = 1;
}
}

return (VAR10);

}