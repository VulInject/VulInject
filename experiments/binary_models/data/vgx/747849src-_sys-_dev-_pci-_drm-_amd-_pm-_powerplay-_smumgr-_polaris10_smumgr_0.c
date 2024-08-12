static int FUN1(struct VAR1 *VAR2)
{
uint32_t VAR3;
uint32_t VAR4;

uint16_t VAR5;
uint32_t VAR6, VAR7, VAR8;

VAR8 = sizeof(VAR9);
VAR5 = FUN2(1300 * VAR10);

FUN3(0 == FUN4(VAR2,
VAR11 + FUN5(VAR12, VAR13),
&VAR4, 0x40000),
"",
return -1);


VAR3 = 0x01000500; 

VAR7 = VAR4 + FUN5(VAR14, VAR15);

FUN3(0 == FUN6(VAR2, VAR7,
(VAR16 *)&VAR3, sizeof(VAR17), 0x40000),
"",
return -1);

VAR6 = VAR4 + FUN5(VAR14, VAR18);

FUN3(0 == FUN6(VAR2, VAR6,
(VAR16 *)(&VAR9),
VAR8, 0x40000),
"",
return -1);

VAR6 = VAR4 + FUN5(VAR14, VAR19);

FUN3(0 == FUN6(VAR2, VAR6,
(VAR16 *)(&VAR20), sizeof(VAR20), 0x40000),
"",
return -1);



VAR6 = VAR4 + FUN5(VAR14, VAR21);

FUN3(0 == FUN6(VAR2, VAR6,
(VAR16 *)(&VAR5), sizeof(VAR5), 0x40000),
"",
return -1);

return 0;
}