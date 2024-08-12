static int FUN1(struct VAR1 *VAR2,
unsigned int argc, char **argv)
{
unsigned int VAR3;
unsigned long VAR4 = 0;

for (VAR3 = 1; VAR3 < argc; VAR3++) {
unsigned long VAR5;
const char *VAR6 = argv[VAR3];

if ((*VAR6 & 0xdf) == '') {
unsigned long VAR7, VAR8;

VAR6++;
if (FUN2(*VAR6 == '')) {
FUN3("", argv[VAR3]);
return -VAR9;
}
VAR7 = FUN4(&VAR6);
if (FUN2(*VAR6 != '')) {
FUN3("", argv[VAR3]);
return -VAR9;
}
VAR6++;
if (FUN2(!*VAR6)) {
FUN3("", argv[VAR3]);
return -VAR9;
}
VAR8 = FUN4(&VAR6);
if (FUN2(*VAR6)) {
FUN3("", argv[VAR3]);
return -VAR9;
}

if (FUN2(!VAR7) || FUN2(VAR7 - 1 > VAR4)) {
FUN3("",
VAR7 - 1, VAR4);
return -VAR9;
}
if (FUN2(VAR4 + VAR8 < VAR4) ||
FUN2(VAR4 + VAR8 >= VAR2->VAR10)) {
FUN3("",
VAR4, VAR8, VAR2->VAR10);
return -VAR9;
}

while (VAR8--) {
VAR4++;
VAR5 = FUN5(VAR2, VAR4 - VAR7);
FUN6(VAR2, VAR4, VAR5);
}

continue;
}

if (*VAR6 == '')
VAR4++;
else {
VAR4 = FUN4(&VAR6);
if (FUN2(*VAR6 != '')) {
FUN3("", argv[VAR3]);
return -VAR9;
}
}

VAR6++;
if (FUN2(!*VAR6)) {
FUN3("", argv[VAR3]);
return -VAR9;
}

VAR5 = FUN4(&VAR6);
if (FUN2(*VAR6)) {
FUN3("", argv[VAR3]);
return -VAR9;
}
if (FUN2(VAR4 >= VAR2->VAR10)) {
FUN3("", VAR4, VAR2->VAR10);
return -VAR9;
}
if (FUN2(VAR5 >= VAR2->VAR11)) {
FUN3("", VAR5, VAR2->VAR11);
return -VAR9;
}

FUN6(VAR2, VAR4, VAR5);
}

return 0;
}