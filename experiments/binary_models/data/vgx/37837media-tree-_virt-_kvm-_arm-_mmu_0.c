static void FUN1(VAR1 *VAR2, phys_addr_t VAR3, phys_addr_t VAR4)
{
phys_addr_t VAR5;
VAR6 *VAR7, *VAR8;

VAR8 = VAR7 = FUN2(VAR2, VAR3);
do {
VAR5 = FUN3(VAR3, VAR4);

if (!FUN4(*VAR7))
FUN5(VAR7, VAR3, VAR5);
} while (VAR7++, VAR3 = VAR5, VAR3 != VAR4);

if (FUN6(VAR8))
FUN7(VAR2);
}