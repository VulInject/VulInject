static int
FUN1(VAR1* VAR2, uint16 VAR3)
{
static const char VAR4[] = "";
VAR5 *VAR6 = FUN2(VAR2);

(void) VAR3;
assert(VAR6 != NULL);
if( VAR6->VAR7 == NULL )
{
VAR2->FUN3( VAR2 );
if( VAR6->VAR7 == NULL )
return (0);
}


if (VAR2->VAR8[0] == 0 && (VAR2->VAR8[1] & 0x1)) {
if (!VAR6->VAR9) {
FUN4(VAR2->VAR10, VAR4,
"");

VAR2->VAR11 = VAR12;
VAR2->VAR13 = VAR12;
VAR2->VAR14 = VAR12;

(*VAR2->VAR15)(VAR2);
VAR6->VAR9 = VAR12;
}
VAR6->VAR16 = FUN5(VAR17);
if (!VAR6->VAR9) {
FUN6(VAR2->VAR10, VAR4,
"");
VAR6->VAR9 = VAR18;
}
return (0);
} else {
VAR6->VAR16 = FUN5(VAR17)-1;
VAR6->VAR9 = VAR18;
}
VAR6->VAR19 = VAR17;
VAR6->VAR20 = 0;
VAR6->VAR21 = 0;

VAR6->VAR22 = 0;
VAR6->VAR23 = FUN5(VAR17);
VAR6->VAR24 = ((VAR25)VAR2->VAR26) << 3;
VAR6->VAR27 = VAR6->VAR7 + VAR28;

FUN7(VAR6->VAR27, 0, (VAR29-VAR28)*sizeof (VAR30));
VAR6->VAR31 = &VAR6->VAR7[-1];
VAR6->VAR32 = &VAR6->VAR7[VAR6->VAR23-1];
return (1);
}


VAR33 = (VAR33<<8) | *(VAR34)++;			\
VAR35 += 8;						\
if (VAR35 < VAR36) {					\
VAR33 = (VAR33<<8) | *(VAR34)++;		\
VAR35 += 8;					\
}							\
VAR37 = (VAR38)((VAR33 >> (VAR35-VAR36)) & VAR39);	\
VAR35 -= VAR36;					\
}