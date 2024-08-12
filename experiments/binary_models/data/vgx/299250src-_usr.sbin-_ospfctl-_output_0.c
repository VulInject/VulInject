static void
FUN1(struct VAR1 *VAR1, struct in_addr	VAR2, u_int8_t VAR3,
char *VAR4)
{
struct in_addr		 VAR5, VAR6;
struct VAR7	*VAR8;
struct VAR9	*VAR10;
u_int16_t		 VAR11, VAR12, VAR13;

if (VAR1->VAR14.VAR15 != VAR3)
FUN2(VAR2, VAR4, VAR1->VAR14.VAR15);
FUN3(&VAR1->VAR14);

switch (VAR1->VAR14.VAR15) {
case VAR16:
VAR5.VAR17 = VAR1->VAR6.VAR8.VAR18;
FUN4("", FUN5(VAR5));

VAR8 = (struct VAR7 *)((char *)VAR1 + sizeof(VAR1->VAR14));

FUN4("");
if (FUN6(VAR1->VAR6.VAR8.VAR19) & VAR20)
FUN4("");
else
FUN4("");
FUN4("", FUN6(VAR8->VAR19) &
VAR21);
VAR5.VAR17 = VAR8->VAR22;
FUN4("", FUN5(VAR5));
FUN4("", FUN6(VAR8->VAR23));
break;
case VAR24:
VAR5.VAR17 = VAR1->VAR6.VAR25.VAR18;
FUN4("", FUN5(VAR5));

VAR12 = (FUN7(VAR1->VAR14.VAR26) - sizeof(struct VAR27)
- sizeof(VAR28)) / sizeof(struct VAR29);
VAR13 = sizeof(VAR1->VAR14) + sizeof(VAR28);
FUN4("", VAR12);

for (VAR11 = 0; VAR11 < VAR12; VAR11++) {
VAR5.VAR17 = VAR1->VAR6.VAR25.VAR30[VAR11];
FUN4("", FUN5(VAR5));
}

FUN4("");
break;
case VAR31:
FUN4("", FUN8(VAR1->VAR6.VAR32.VAR33));
VAR12 = FUN7(VAR1->VAR6.VAR32.VAR12);
FUN4("", VAR12);

VAR13 = sizeof(VAR1->VAR14) + sizeof(struct VAR34);

for (VAR11 = 0; VAR11 < VAR12; VAR11++) {
VAR10 = (struct VAR9 *)((char *)VAR1 + VAR13);

FUN4("",
FUN9(VAR10->VAR15));

VAR5.VAR17 = VAR10->VAR35;
VAR6.VAR17 = VAR10->VAR6;

switch (VAR10->VAR15) {
case VAR36:
case VAR37:
FUN4(""
"", FUN5(VAR5));
FUN4(""
"", FUN5(VAR6));
break;
case VAR38:
FUN4(""
"", FUN5(VAR5));
FUN4(""
"", FUN5(VAR6));
break;
case VAR39:
FUN4("",
FUN5(VAR5));
FUN4("",
FUN5(VAR6));
break;
default:
FUN4("",
FUN5(VAR5));
FUN4("",
FUN5(VAR6));
break;
}

FUN4("", FUN7(VAR10->VAR19));

VAR13 += sizeof(struct VAR9) +
VAR10->VAR40 * sizeof(VAR28);
}
break;
case VAR41:
if (VAR1->VAR14.VAR15 != VAR3)
FUN2(VAR2, VAR4, VAR1->VAR14.VAR15);

FUN3(&VAR1->VAR14);
VAR5.VAR17 = VAR1->VAR6.VAR42.VAR18;
FUN4("", FUN5(VAR5));
FUN4("", FUN6(VAR1->VAR6.VAR42.VAR19) &
VAR21);
break;
case VAR43:
case VAR44:
case VAR45:
if (VAR1->VAR14.VAR15 != VAR3)
FUN2(VAR2, VAR4, VAR1->VAR14.VAR15);

FUN3(&VAR1->VAR14);
break;
}
}