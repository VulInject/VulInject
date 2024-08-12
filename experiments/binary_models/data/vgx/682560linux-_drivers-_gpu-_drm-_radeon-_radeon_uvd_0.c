static int FUN1(VAR1 *VAR2, unsigned VAR3[])
{
unsigned VAR4 = VAR2[4];
unsigned VAR5 = VAR2[6];
unsigned VAR6 = VAR2[7];
unsigned VAR7 = VAR2[9];
unsigned VAR8 = VAR2[28];

unsigned VAR9 = VAR5 / 16;
unsigned VAR10 = FUN2(VAR6 / 16, 2);

unsigned VAR11, VAR12, VAR13;

VAR11 = VAR5 * VAR6;
VAR11 += VAR11 / 2;
VAR11 = FUN2(VAR11, 1024);

switch (VAR4) {
case 0: 


VAR13 = VAR11 * 17;


VAR13 += VAR9 * VAR10 * 17 * 192;


VAR13 += VAR9 * VAR10 * 32;
break;

case 1: 


VAR13 = VAR11 * 3;


VAR13 += VAR9 * VAR10 * 128;


VAR13 += VAR9 * 64;


VAR13 += VAR9 * 128;


VAR12 = FUN3(VAR9, VAR10);
VAR13 += FUN2(VAR12 * 7 * 16, 64);
break;

case 3: 


VAR13 = VAR11 * 3;
break;

case 4: 


VAR13 = VAR11 * 3;


VAR13 += VAR9 * VAR10 * 64;


VAR13 += FUN2(VAR9 * VAR10 * 32, 64);
break;

default:
FUN4("", VAR4);
return -VAR14;
}

if (VAR5 > VAR8) {
FUN4("");
return -VAR14;
}

if (VAR7 < VAR13) {
FUN4("",
VAR7, VAR13);
return -VAR14;
}

VAR3[0x1] = VAR7;
VAR3[0x2] = VAR11;
return 0;
}