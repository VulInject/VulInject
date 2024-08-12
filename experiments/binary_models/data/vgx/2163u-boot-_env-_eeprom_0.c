static int FUN1(void)
{
char VAR1[VAR2];
unsigned int VAR3 = VAR4;

ulong VAR5, VAR6[2], VAR7;
unsigned int VAR8[2];
uchar VAR9[64], VAR10[2];
int VAR11, VAR12[2] = {0, 0};

FUN2(-1);	

VAR8[0] = VAR4;
VAR8[1] = VAR13;

for (VAR11 = 0; VAR11 < 2; VAR11++) {

FUN3(VAR14,
VAR8[VAR11] + FUN4(VAR15, VAR6),
(VAR16 *)&VAR6[VAR11], sizeof(VAR17));

FUN3(VAR14,
VAR8[VAR11] + FUN4(VAR15, VAR10),
(VAR16 *)&VAR10[VAR11], sizeof(VAR16));

VAR7 = 0;
VAR5 = VAR18;
VAR3 = VAR8[VAR11] + FUN4(VAR15, VAR19);
while (VAR5 > 0) {
int VAR20 = (VAR5 > sizeof(VAR9)) ? sizeof(VAR9) : VAR5;

FUN3(VAR14, VAR3,
VAR9, VAR20);

VAR7 = FUN5(VAR7, VAR9, VAR20);
VAR5 -= VAR20;
VAR3 += VAR20;
}

if (VAR7 == VAR6[VAR11])
VAR12[VAR11] = 1;
}

if (!VAR12[0] && !VAR12[1]) {
VAR21->VAR22	= 0;
VAR21->VAR23 = VAR24;
} else if (VAR12[0] && !VAR12[1]) {
VAR21->VAR23 = VAR25;
} else if (!VAR12[0] && VAR12[1]) {
VAR21->VAR23 = VAR26;
} else {

if (VAR10[0] == VAR27 &&
VAR10[1] == VAR28)
VAR21->VAR23 = VAR25;
else if (VAR10[0] == VAR28 &&
VAR10[1] == VAR27)
VAR21->VAR23 = VAR26;
else if (VAR10[0] == 0xFF && VAR10[1] == 0)
VAR21->VAR23 = VAR26;
else if (VAR10[1] == 0xFF && VAR10[0] == 0)
VAR21->VAR23 = VAR25;
else 
VAR21->VAR23 = VAR25;
}

ulong VAR6, VAR5, new;
uchar VAR9[64];

FUN2(-1);	


FUN3(VAR14,
VAR4 + FUN4(VAR15, VAR6),
(VAR16 *)&VAR6, sizeof(VAR17));

new = 0;
VAR5 = VAR18;
VAR3 = FUN4(VAR15, VAR19);
while (VAR5 > 0) {
int VAR20 = (VAR5 > sizeof(VAR9)) ? sizeof(VAR9) : VAR5;

FUN3(VAR14,
VAR4 + VAR3, VAR9, VAR20);
new = FUN5(new, VAR9, VAR20);
VAR5 -= VAR20;
VAR3 += VAR20;
}

if (VAR6 == new) {
VAR21->VAR23 = VAR25;
} else {
VAR21->VAR23 = VAR24;
}

VAR3 = VAR4;
if (VAR21->VAR23 == VAR26)
VAR3 = VAR13;

FUN3(VAR14,
VAR3, (VAR16 *)VAR1, VAR2);

return FUN6(VAR1, 1, VAR29);
}