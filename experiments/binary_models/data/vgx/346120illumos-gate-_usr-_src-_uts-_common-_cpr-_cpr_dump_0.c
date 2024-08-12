static	int
FUN1(int VAR1, bitfunc_t VAR2)
{
VAR3 *VAR4, *VAR5;
pgcnt_t VAR6 = 0, VAR7 = 0;
pfn_t VAR8;

VAR5 = VAR4 = FUN2();

do {
if (VAR4->VAR9 == NULL || FUN3(VAR4) ||
FUN4(VAR4) && FUN5(VAR4))
continue;

VAR8 = FUN6(VAR4);
if (FUN7(VAR8)) {
VAR7++;
if ((*VAR2)(VAR8, VAR1) == 0)
VAR6++; 
}
} while ((VAR4 = FUN8(VAR4)) != VAR5);

VAR10->VAR11 = VAR6;
FUN9(VAR12, "",
VAR6, VAR7);
FUN9(VAR13, "",
VAR6, FUN10(VAR6));
VAR5 = NULL; 
return (VAR6);
}