static int
FUN1(uintptr_t VAR1, VAR2 *VAR3)
{
static const struct VAR4 {
const char *VAR5;
void (*VAR6)(const VAR2 *,
const char *, VAR7);
} VAR8[] = {
{ "", VAR9 },
{ "", VAR10 },		
{ "", VAR10 },		
{ "", VAR10 },		
{ "", VAR10 },		
{ "", VAR10 },		
{ "", VAR10 },		
{ "", VAR10 },		
{ "", VAR10 },		
{ "", VAR10 },		
{ "", VAR10 },		
{ "", VAR10 },		
{ "", VAR10 },		
{ "", VAR11 },		
{ "", VAR11 },		
{ "", VAR12 },		
{ "", VAR13 },		
{ "", VAR14 },		
{ "", VAR14 },		
{ "", VAR14 },		
{ "", VAR14 },		
{ "", VAR14 },		
{ "", VAR14 },		
{ "", VAR14 },		
{ "", VAR14 },		
{ "", VAR14 },		
{ "", VAR14 },		
{ "", VAR14 },		
{ "", VAR15 },		
{ "", VAR15 },		
{ "", VAR15 },		
{ "", VAR15 },		
{ "", VAR15 },		
{ "", VAR15 },		
{ "", VAR15 },		
{ "", VAR16 },		
{ "", VAR9 },		
{ "", VAR17 },		
{ "", VAR18 },		
{ "", VAR12 },		
{ "", VAR19 },		
{ "", VAR20 },		
{ "", VAR21 },		
{ "", VAR19 },		
{ "", VAR20 },		
{ "", VAR21 },		
{ "", VAR10 },		
{ "", VAR22 },		
{ "", VAR23 },	
{ "", VAR23 },	
{ "", VAR9 },		
{ "", VAR9 },		
{ "", VAR20 },		
{ "", VAR20 },		
{ "", VAR21 },		
{ "", VAR21 },		
{ "", VAR20 },		
{ "", VAR21 },		
{ "", VAR11 },		
{ "", VAR10 },		
{ "", VAR24 },		
{ "", VAR24 },		
{ "", VAR24 },		
{ "", VAR24 },		
{ "", VAR15 },		
{ "", VAR15 },		
{ "", VAR15 },		
{ "", VAR15 },		
{ "", VAR15 },		
{ "", VAR15 },		
{ "", VAR15 },		
{ "", VAR15 },		
{ "", VAR15 },		
{ "", VAR15 },		
{ "", VAR15 },		
{ "", VAR15 },		
{ "", VAR15 },		
{ "", VAR15 },		
{ "", VAR25 },		
{ "", VAR25 },		
};

dif_instr_t VAR26, VAR27;
const struct VAR4 *VAR28;

if (FUN2(&VAR26, sizeof (VAR7), VAR1) == -1) {
FUN3("", VAR1);
return (VAR29);
}

VAR27 = FUN4(VAR26);

if (VAR27 >= sizeof (VAR8) / sizeof (VAR8[0]))
VAR27 = 0; 

VAR28 = &VAR8[VAR27];
FUN5("", VAR1, VAR26);
VAR28->FUN6(VAR3, VAR28->VAR5, VAR26);
FUN5("");
FUN7(VAR1 + sizeof (VAR7));

return (VAR30);
}