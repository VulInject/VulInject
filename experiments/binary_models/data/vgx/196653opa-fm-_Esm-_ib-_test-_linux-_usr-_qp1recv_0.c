int main(int argc, char *argv[]) {
int		VAR1;
IBhandle_t	VAR2;
uint32_t		VAR3;
uint32_t		VAR4;
Mai_t		VAR5;
Filter_t	VAR6;
Status_t	VAR7;

VAR3 = 0x00;
VAR4 = 0x01;

while ((VAR1 = getopt(argc, argv, "")) != -1) {
switch (VAR1) {
case '':
VAR3 = FUN1(VAR8, NULL, 0);
break;
case '':
VAR4 = FUN1(VAR8, NULL, 0);
break;
default:
fprintf(VAR9, "");
FUN2(1);
}
}

FUN3 ("", VAR3, VAR4);




FUN4();
VAR7=FUN5(&VAR3, &VAR4, NULL, NULL);
if (VAR7)
{
FUN3("",VAR7);
FUN2(1);
}
VAR7 = FUN6(1, VAR3, VAR4, &VAR2);
if (VAR7 != VAR10) {
fprintf(VAR9, "", VAR7);
FUN2(0);
}




FUN7(&VAR6, VAR11, VAR12);
VAR6.VAR13.VAR14 = 0x0102030405060708ull;
VAR6.VAR15.VAR14 = 0xffffffffffffffffull;

VAR7 = FUN8(VAR2, &VAR6, VAR16);
if (VAR7 != VAR10) {
fprintf(VAR9, "", VAR7);
FUN9(VAR2);
FUN2(1);
}




VAR7 = FUN10(VAR2, &VAR5, 5000000);
if (VAR7 != VAR10) {
fprintf(VAR9, "", VAR7);
FUN9(VAR2);
FUN2(1);
}




FUN11(&VAR5);




VAR7 = FUN12(VAR2, &VAR6, VAR16);
if (VAR7 != VAR10) {
fprintf(VAR9, "", VAR7);
FUN9(VAR2);
FUN2(1);
}

FUN9(VAR2);
FUN2(0);
}