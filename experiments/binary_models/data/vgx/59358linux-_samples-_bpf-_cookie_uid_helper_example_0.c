int main(int argc, char *argv[])
{
int VAR1;
bool VAR2 = false;
bool VAR3 = false;

if (argc != 3)
return FUN1();
while ((VAR1 = getopt(argc, argv, "")) != -1) {
switch (VAR1) {
case '':
VAR2 = true;
break;
case '':
VAR3 = true;
break;

default:
FUN2("", VAR1);
FUN1();
return -1;
}
}
FUN3();
FUN4();
FUN5(argv[2]);
if (VAR2) {
if (signal(VAR4, VAR5) == VAR6)
FUN6(1, VAR7, "");
if (signal(VAR8, VAR5) == VAR6)
FUN6(1, VAR7, "");
while (!VAR9) {
FUN7();
FUN2("");
sleep(1);
}
} else if (VAR3) {
FUN8();
}
close(VAR10);
close(VAR11);
return 0;
}