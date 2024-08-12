static VAR1 
FUN1(struct VAR2 *VAR3, uint8_t VAR4, uint8_t VAR5)
{
unsigned int VAR6, VAR7, VAR8, VAR9;



VAR6 = VAR4;
if ((VAR7 = VAR5 % 9) != 0) {


VAR9 = (VAR4 >> (8 - VAR7)) & 0x1;


VAR6 = (VAR4 << VAR7) & 0xff;


VAR8 = (1 << (VAR7 - 1)) - 1;
VAR6 |= (VAR4 >> (9 - VAR7)) & VAR8;


if (FUN2(VAR10)) {	

VAR6 |= 1 << (VAR7 - 1);
}

FUN3(VAR9, VAR10);


FUN3(VAR7 == 1 && FUN4(VAR9 + ((VAR6 >> 6) & 0x2)),
VAR11);

}
return (VAR1) VAR6;
}