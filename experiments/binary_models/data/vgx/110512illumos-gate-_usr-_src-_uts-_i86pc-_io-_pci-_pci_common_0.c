int
FUN1(int VAR1, boolean_t VAR2)
{
int VAR3;
apic_get_intr_t	VAR4;

VAR4.VAR5 = VAR6;
VAR3 = FUN2(&VAR4, VAR1, VAR2);

if (VAR3 == VAR7)
return (VAR4.VAR8);
else
return (-1);
}