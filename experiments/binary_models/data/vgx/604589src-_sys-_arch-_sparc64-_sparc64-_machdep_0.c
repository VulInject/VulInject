int
FUN1(bus_space_tag_t VAR1, bus_space_tag_t VAR2, bus_addr_t	VAR3,
bus_size_t VAR4, int VAR5, VAR6 *VAR7)
{
vaddr_t VAR8;
u_int64_t VAR9;
paddr_t	VAR10 = 0;
vm_prot_t VAR11 = VAR12;

if (VAR5 & VAR13) {
VAR7->VAR14 = VAR3;
return (0);
}

if (VAR4 == 0) {
char VAR15[80];
FUN2(VAR2, VAR15, sizeof VAR15);
FUN3("", VAR15);
return (VAR16);
}

if ( (FUN4(VAR2->VAR17) && FUN4(VAR2->VAR18)) ||
(FUN5(VAR2->VAR17) != FUN5(VAR2->VAR18)) ) {
char VAR15[80];
FUN2(VAR2, VAR15, sizeof VAR15);
FUN3("",
VAR15, VAR2->VAR17, VAR2->VAR18);
}

if (FUN5(VAR2->VAR17)) {
char VAR15[80];
FUN2(VAR2, VAR15, sizeof VAR15);
FUN6(VAR19,
(""
"",
VAR15,
(int)VAR2->VAR17, (int)VAR2->VAR18, (int)VAR5,
(unsigned long long)VAR3, (unsigned long long)VAR4));
if (VAR5 & VAR20) {
char VAR15[80];
FUN2(VAR2, VAR15, sizeof VAR15);
FUN3("", VAR15);
return (VAR16);
}

VAR7->VAR14 = VAR3;
return (0);
}

VAR4 = FUN7(VAR4);

if (FUN4(VAR2->VAR18) && !FUN4(VAR2->VAR17))
VAR10 |= VAR21;

if ((VAR5 & VAR22) == 0)
VAR10 |= VAR23;

VAR8 = (VAR24)FUN8(VAR4, &VAR25, &VAR26, &VAR27);
if (VAR8 == 0)
return (VAR28);


VAR7->VAR14 = VAR8 | (VAR3 & VAR29);

VAR9 = FUN9(VAR3);
if ((VAR5 & VAR30) == 0)
VAR11 |= VAR31;

{ 
char VAR15[80];
FUN2(VAR2, VAR15, sizeof VAR15);
FUN6(VAR19, (""
""
"", VAR15, (int)VAR1->VAR32, (int) VAR5,
(unsigned long long)VAR3, (unsigned long long)VAR4,
(unsigned long long)VAR7->VAR14, (unsigned long long)VAR9));
}

do {
FUN6(VAR33, (""
"", (unsigned long long)VAR9,
(char *)VAR34, (unsigned long long)VAR7->VAR14));
FUN10(FUN11(), VAR8, VAR9 | VAR10, VAR11,
VAR11|VAR35);
VAR8 += VAR36;
VAR9 += VAR36;
} while ((VAR4 -= VAR36) > 0);
FUN12(FUN11());
return (0);
}