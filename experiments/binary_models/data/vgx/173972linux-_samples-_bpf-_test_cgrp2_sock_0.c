int main(int argc, char **argv)
{
__u32 VAR1 = 0, VAR2 = 0, VAR3 = 0;
const char *VAR4 = NULL;
int VAR5, VAR6, VAR7;
int VAR8 = VAR9;
int VAR10 = 1;
int VAR11;

while ((VAR11 = getopt(argc, argv, "")) != -1) {
switch (VAR11) {
case '':
VAR10 = 0;
break;
case '':
VAR1 = FUN1(VAR12);
if (!VAR1) {
VAR1 = FUN2(VAR12, NULL, 0);
if (!VAR1) {
FUN3("");
return VAR13;
}
}
break;
case '':
VAR2 = FUN2(VAR12, NULL, 0);
break;
case '':
VAR3 = FUN2(VAR12, NULL, 0);
break;
case '':
VAR8 = VAR14;
break;
default:
return FUN4(argv[0]);
}
}

if (VAR15 == argc)
return FUN5(VAR8);

VAR4 = argv[VAR15];
if (!VAR4) {
fprintf(VAR16, "");
return VAR13;
}

if (VAR10 && !VAR1 && !VAR2 && !VAR3) {
fprintf(VAR16,
"");
return VAR13;
}

VAR5 = open(VAR4, VAR17 | VAR18);
if (VAR5 < 0) {
FUN3("", strerror(VAR19));
return VAR13;
}

if (VAR10) {
VAR6 = FUN6(VAR1, VAR2, VAR3);
if (VAR6 < 0) {
FUN3("", strerror(VAR19));
FUN3("",
VAR20);
return VAR13;
}

VAR7 = FUN7(VAR6, VAR5,
VAR21, 0);
if (VAR7 < 0) {
FUN3("",
strerror(VAR19));
return VAR13;
}
} else {
VAR7 = FUN8(VAR5, VAR21);
if (VAR7 < 0) {
FUN3("",
strerror(VAR19));
return VAR13;
}
}

close(VAR5);
return VAR22;
}