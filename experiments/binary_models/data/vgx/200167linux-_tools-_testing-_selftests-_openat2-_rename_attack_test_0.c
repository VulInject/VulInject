void FUN1(int VAR1)
{
int VAR2, VAR3;
pid_t VAR4;
void (*VAR5)(const char *VAR6, ...) = VAR7;
int VAR8 = 0, VAR9 = 0, VAR10 = 0, VAR11 = 0, VAR12 = 0;

struct open_how VAR13 = {
.VAR14 = VAR15,
.VAR1 = VAR1,
};

if (!VAR16) {
VAR13.VAR1 = 0;
FUN2("");
}

VAR2 = FUN3();
VAR3 = FUN4(VAR2, "", VAR15);
if (VAR3 < 0)
FUN5("");

VAR4 = FUN6(VAR2, "", "");

for (int VAR17 = 0; VAR17 < VAR18; VAR17++) {
int VAR19;
char *VAR20 = "";

if (VAR16)
VAR19 = FUN7(VAR3, VAR20, &VAR13);
else
VAR19 = FUN8(VAR3, VAR20, &VAR13);

if (VAR19 < 0) {
if (VAR19 == -VAR21)
VAR11++;
else if (VAR19 == -VAR22)
VAR10++;
else if (VAR19 == -VAR23)
VAR8++; 
else
VAR9++; 
} else {
if (FUN9(VAR19, VAR3, NULL))
VAR12++;
else
VAR8++; 
}
close(VAR19);
}

if (VAR8 > 0)
VAR5 = VAR24;
FUN2("",
VAR11, VAR10, VAR9, VAR12);
FUN10("",
FUN11(VAR1), VAR18, VAR8);


FUN12(VAR4, VAR25);
}