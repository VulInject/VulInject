static int
FUN1(virDomainPtr VAR1,
const char **VAR2,
unsigned int VAR3,
unsigned int VAR4)
{
VAR5 *VAR6;
VAR7 *VAR8;
size_t VAR9;
int VAR10 = -1;

FUN2(0, -1);

if (!(VAR6 = FUN3(VAR1)))
goto VAR11;

if (FUN4(VAR6) < 0)
goto VAR11;

VAR8 = VAR6->VAR12;

if (VAR3 == 0) {
VAR10 = VAR8->VAR13[0] + VAR8->VAR13[1];
VAR8->VAR13[0] = VAR8->VAR13[1] = false;
} else {
int VAR14 = 0;
bool VAR15[2];

memcpy(&VAR15, VAR8->VAR13, 2);

for (VAR9 = 0; VAR9 < VAR3; VAR9++) {
if (FUN5(VAR2[VAR9], "")) {
if (VAR15[0]) {
VAR15[0] = false;
VAR14++;
}
} else if (FUN5(VAR2[VAR9], "")) {
if (VAR15[1]) {
VAR15[1] = false;
VAR14++;
}
} else {
FUN6(VAR16,
FUN7(""),
VAR2[VAR9]);
goto VAR11;
}
}


memcpy(VAR8->VAR13, &VAR15, 2);
VAR10 = VAR14;
}

VAR11:
FUN8(&VAR6);
return VAR10;
}