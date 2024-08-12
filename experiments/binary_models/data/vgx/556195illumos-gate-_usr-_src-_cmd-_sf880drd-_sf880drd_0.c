static void
FUN1(hpc3130_event_type_t VAR1, int VAR2)
{
int		VAR3 = 0;
unsigned int	VAR4;

if (FUN2(VAR2) != VAR5) {

VAR3 = 1;
}

VAR4 = VAR6[VAR3];

assert(VAR2 <= sizeof (VAR6[VAR3]) * VAR7);

switch (VAR1) {
case VAR8:
VAR6[VAR3] |= (1<<VAR2);
FUN3((""));
break;
case VAR9:
VAR6[VAR3] &= ~(1<<VAR2);
FUN3((""));
break;
}

FUN3(("",
VAR4, VAR3, VAR6[VAR3]));

if ((VAR4 == 0) != (VAR6[VAR3] == 0) && VAR10[VAR3] == 0) {

FUN4(VAR3 ? VAR11 :
VAR12,
VAR6[VAR3] ? VAR13 : VAR14);
}
}