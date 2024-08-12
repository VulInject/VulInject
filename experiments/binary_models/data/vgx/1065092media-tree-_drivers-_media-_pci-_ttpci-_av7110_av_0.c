static int FUN1(struct VAR1 *VAR1, char VAR2 *VAR3, unsigned int VAR4, int VAR5)
{
unsigned VAR6, VAR7;
int VAR8 = 0;
int VAR9 = 0;

FUN2(2, "", VAR1);

if (VAR4 == 0)
return 0;

if (!(VAR1->VAR10 & VAR11)) {
if (FUN3(VAR1, VAR11) < 0)
return -VAR12;
}


for (VAR6 = 0; VAR6 < VAR4; VAR6++) {
unsigned char VAR13;
if (FUN4(VAR13, VAR3 + VAR6))
return -VAR14;
if (VAR9 == 5) {
VAR8 = VAR13 & 0x08;
VAR9 = 0;
}
if (VAR13 == 0x00) {
VAR9 = (VAR9 == 1 || VAR9 == 2) ? 2 : 1;
continue;
}
switch (VAR9++) {
case 2: if (VAR13 == 0x01)
continue;
break;
case 3: if (VAR13 == 0xb5)
continue;
break;
case 4: if ((VAR13 & 0xf0) == 0x10)
continue;
break;
}
VAR9 = 0;
}


VAR7 = VAR15 / VAR4 + 1;


FUN5(VAR1, VAR16, sizeof(VAR16), 0, 1);

for (VAR6 = 0; VAR6 < VAR7; VAR6++)
FUN6(VAR1, VAR3, VAR4, 0, 1);

FUN7(&VAR1->VAR17[1]);

if (VAR8)
return FUN8(VAR1, VAR18, 1);
else
return 0;
}