int FUN1(VAR1 *VAR2,
const char *VAR3)
{
int VAR4;
unsigned char VAR5[VAR6];
size_t VAR7;
int VAR8;

if (VAR9.VAR10 != VAR11) {
return 0;
}


VAR4 = FUN2(VAR2, &VAR8,
NULL, NULL);
if (VAR4 != 0) {
FUN3("",
(unsigned int) -VAR4);
return VAR4;
}

if (VAR8 == VAR12) {
if (VAR9.VAR13 == VAR14) {
FUN3("",
VAR3);
}
} else {
size_t VAR15 = 0;
FUN3("",
VAR3);


VAR4 = FUN2(VAR2, &VAR8,
NULL, &VAR7);
if (VAR4 != 0) {
FUN3("",
(unsigned int) -VAR4);
return VAR4;
}


VAR4 = FUN2(VAR2, &VAR8,
VAR5, &VAR7);
if (VAR4 != 0) {
FUN3("",
(unsigned int) -VAR4);
return VAR4;
}
FUN3("",
VAR3,
(unsigned) VAR7);
while (VAR15 < VAR7) {
FUN3("", VAR5[VAR15]);
VAR15++;
}
FUN3("");
}

return 0;
}