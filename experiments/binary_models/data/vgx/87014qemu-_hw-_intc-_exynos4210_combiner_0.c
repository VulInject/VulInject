static void FUN1(void *VAR1, hwaddr VAR2,
uint64_t VAR3, unsigned VAR4)
{
struct VAR5 *VAR6 =
(struct VAR5 *)VAR1;
uint32_t VAR7;    
uint32_t VAR8;    
uint32_t VAR9;              

VAR7 = VAR2 >> 4;
VAR8 = VAR7 << 2;
VAR9 = (VAR2 - (VAR7 << 4)) >> 2;

if (VAR7 >= VAR10) {
FUN2(""
VAR11 "", VAR2);
return;
}

if (VAR9 > 1) {
FUN2(""
VAR11 "", VAR2);
return;
}

if (VAR2 >> 2 >= VAR12) {
FUN2(""
VAR11 "", VAR2);
}
VAR6->VAR13[VAR2 >> 2] = VAR3;

switch (VAR9) {

case 0:


FUN3("",
VAR6->VAR14 ? "" : "",
VAR8,
VAR8 + 1,
VAR8 + 2,
VAR8 + 3);


VAR6->VAR15[VAR8].VAR16 |= VAR3 & 0xFF;
VAR6->VAR15[VAR8 + 1].VAR16 |= (VAR3 & 0xFF00) >> 8;
VAR6->VAR15[VAR8 + 2].VAR16 |= (VAR3 & 0xFF0000) >> 16;
VAR6->VAR15[VAR8 + 3].VAR16 |= (VAR3 & 0xFF000000) >> 24;

FUN4(VAR6, VAR8);
FUN4(VAR6, VAR8 + 1);
FUN4(VAR6, VAR8 + 2);
FUN4(VAR6, VAR8 + 3);
break;

case 1:
FUN3("",
VAR6->VAR14 ? "" : "",
VAR8,
VAR8 + 1,
VAR8 + 2,
VAR8 + 3);


VAR6->VAR15[VAR8].VAR16 &= ~(VAR3 & 0xFF);
VAR6->VAR15[VAR8 + 1].VAR16 &= ~((VAR3 & 0xFF00) >> 8);
VAR6->VAR15[VAR8 + 2].VAR16 &= ~((VAR3 & 0xFF0000) >> 16);
VAR6->VAR15[VAR8 + 3].VAR16 &= ~((VAR3 & 0xFF000000) >> 24);

FUN4(VAR6, VAR8);
FUN4(VAR6, VAR8 + 1);
FUN4(VAR6, VAR8 + 2);
FUN4(VAR6, VAR8 + 3);
break;
default:
FUN2(""
VAR11 "", VAR2);
break;
}
}