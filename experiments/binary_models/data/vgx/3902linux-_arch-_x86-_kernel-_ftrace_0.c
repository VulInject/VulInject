static unsigned long
FUN1(struct VAR1 *VAR2, unsigned int *VAR3)
{
unsigned long VAR4;
unsigned long VAR5;
unsigned long VAR6;
unsigned long VAR7;
unsigned long VAR8;
unsigned long VAR9;
unsigned long VAR10;
unsigned long VAR11;
unsigned long *VAR12;
void *VAR13;
void *VAR14, *VAR15;

unsigned const char VAR16[] = { 0x48, 0x8b, 0x15 };
unsigned const char VAR17[] = { VAR18, VAR19 };
union ftrace_op_code_union VAR20;
int VAR21;

if (VAR2->VAR22 & VAR23) {
VAR4 = (unsigned long)VAR24;
VAR5 = (unsigned long)VAR25;
VAR6 = (unsigned long)VAR26;
VAR7 = (unsigned long)VAR27;
VAR8 = (unsigned long)VAR28;
} else {
VAR4 = (unsigned long)VAR29;
VAR5 = (unsigned long)VAR30;
VAR6 = (unsigned long)VAR31;
VAR7 = (unsigned long)VAR32;
VAR8 = 0;
}

VAR11 = VAR5 - VAR4;


VAR13 = FUN2(VAR11 + VAR33 + sizeof(void *));
if (!VAR13)
return 0;

*VAR3 = VAR11 + VAR33 + sizeof(void *);
VAR10 = FUN3(*VAR3, VAR34);


VAR21 = FUN4(VAR13, (void *)VAR4, VAR11);
if (FUN5(VAR21 < 0))
goto VAR35;

VAR14 = VAR13 + VAR11;
if (FUN6(VAR36))
FUN7(VAR14, VAR37, VAR14, VAR38, VAR39);
else
memcpy(VAR14, VAR17, sizeof(VAR17));


if (VAR2->VAR22 & VAR23) {

VAR14 = VAR13 + (VAR8 - VAR4);
if (FUN5(*(char *)VAR14 != 0x75))
goto VAR35;
VAR21 = FUN4(VAR14, VAR40[2], 2);
if (VAR21 < 0)
goto VAR35;
}



VAR12 = (unsigned long *)(VAR13 + VAR11 + VAR33);
*VAR12 = (unsigned long)VAR2;

VAR6 -= VAR4;
memcpy(&VAR20, VAR13 + VAR6, VAR41);


if (FUN5(memcmp(VAR20.VAR42, VAR16, 3) != 0))
goto VAR35;


VAR9 = (unsigned long)VAR12;
VAR9 -= (unsigned long)VAR13 + VAR6 + VAR41;

VAR20.VAR9 = VAR9;


memcpy(VAR13 + VAR6, &VAR20, VAR41);


FUN8(&VAR43);
VAR7 -= VAR4;

VAR15 = FUN9(VAR2);
memcpy(VAR13 + VAR7,
FUN10(VAR44, VAR13 + VAR7, VAR15),
VAR45);
FUN11(&VAR43);


VAR2->VAR22 |= VAR46;

FUN12((unsigned long)VAR13, VAR10);
return (unsigned long)VAR13;
VAR35:
FUN13(VAR13);
return 0;
}