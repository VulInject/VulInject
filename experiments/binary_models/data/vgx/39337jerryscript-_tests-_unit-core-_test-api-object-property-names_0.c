main (void)
{
if (!FUN1 (VAR1))
{
return 0;
}

FUN2 ();
FUN3 (VAR2);

jerry_value_t VAR3 = FUN4 (FUN5 (), VAR4);
FUN6 (FUN7 (VAR3) && FUN8 (VAR3) == VAR5);
FUN9 (VAR3);

jerry_value_t VAR6 = FUN10 ();
FUN11 (VAR6, VAR7[0]);
FUN11 (VAR6, VAR7[1]);

jerry_value_t VAR8;

jerry_property_descriptor_t VAR9 = FUN12 ();
VAR9.VAR10 |= (VAR11
| VAR12
| VAR13
| VAR14
| VAR15);


FUN13 (VAR6, VAR7[2], &VAR9, false);
VAR8 = FUN4 (VAR6,
VAR4 | VAR16);
FUN6 (FUN14 (VAR8) == (VAR17) 2);
FUN9 (VAR8);
VAR8 = FUN4 (VAR6, VAR4);
FUN6 (FUN14 (VAR8) == (VAR17) 3);
FUN15 (VAR8, VAR7[2], 2);
FUN9 (VAR8);
VAR9.VAR10 |= VAR18;


VAR9.VAR10 &= (VAR19) ~VAR12;
FUN13 (VAR6, VAR7[3], &VAR9, false);
VAR8 = FUN4 (VAR6,
VAR4 | VAR20);
FUN6 (FUN14 (VAR8) == (VAR17) 3);
FUN9 (VAR8);
VAR8 = FUN4 (VAR6, VAR4);
FUN6 (FUN14 (VAR8) == (VAR17) 4);
FUN15 (VAR8, VAR7[3], 3);
FUN9 (VAR8);
VAR9.VAR10 |= VAR12;


VAR9.VAR10 &= (VAR19) ~VAR14;
FUN13 (VAR6, VAR7[4], &VAR9, false);
VAR8 = FUN4 (VAR6,
VAR4 | VAR21);
FUN6 (FUN14 (VAR8) == (VAR17) 4);
FUN9 (VAR8);
VAR8 = FUN4 (VAR6, VAR4);
FUN6 (FUN14 (VAR8) == (VAR17) 5);
FUN15 (VAR8, VAR7[4], 4);
FUN9 (VAR8);
VAR9.VAR10 |= VAR14;


VAR8 = FUN4 (VAR6, VAR4);
jerry_length_t VAR22 = FUN14 (VAR8);
FUN6 (VAR22 == (VAR17) 5);

for (uint32_t VAR23 = 0; VAR23 < VAR22; VAR23++)
{
FUN15 (VAR8, VAR7[VAR23], VAR23);
}

FUN9 (VAR8);


FUN13 (VAR6, VAR7[5], &VAR9, false);
VAR8 = FUN4 (VAR6, VAR4
| VAR24
| VAR25);
FUN6 (FUN14 (VAR8) == (VAR17) 1);
FUN15 (VAR8, VAR7[5], 0);
FUN9 (VAR8);
VAR8 = FUN4 (VAR6,
VAR4 | VAR26);
FUN6 (FUN14 (VAR8) == (VAR17) 5);
FUN9 (VAR8);


VAR8 = FUN4 (VAR6, VAR4);
FUN6 (FUN14 (VAR8) == (VAR17) 6);
FUN9 (VAR8);
VAR8 = FUN4 (VAR6,
VAR4 | VAR27);
FUN6 (FUN14 (VAR8) == (VAR17) 18);
FUN9 (VAR8);


FUN13 (VAR6, VAR7[6], &VAR9, true);
VAR8 = FUN4 (VAR6,
VAR4 | VAR28);
FUN6 (FUN14 (VAR8) == (VAR17) 6);
FUN9 (VAR8);
VAR8 = FUN4 (VAR6, VAR4);
FUN6 (FUN14 (VAR8) == (VAR17) 7);
FUN9 (VAR8);

FUN16 (&VAR9);
FUN9 (VAR6);
FUN17 ();
return 0;
}