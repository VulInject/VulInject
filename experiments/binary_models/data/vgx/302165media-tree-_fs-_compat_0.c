static int FUN1(void *VAR1)
{
int VAR2 = *(VAR3 *) VAR1;

if (VAR2 == 1) {
struct VAR4 *VAR5 = VAR1;
struct VAR6 *VAR7 = VAR1;


VAR7->VAR8 = FUN2(VAR5->VAR8);
VAR7->VAR9 = VAR5->VAR9;
VAR7->VAR10 = VAR5->VAR10;
VAR7->VAR11 = FUN2(VAR5->VAR11);
VAR7->VAR12 = VAR5->VAR12;
FUN3(&VAR7->VAR13, &VAR5->VAR13);
FUN3(&VAR7->VAR14, &VAR5->VAR14);
FUN3(&VAR7->VAR15, &VAR5->VAR15);
VAR7->VAR16 = VAR5->VAR16;
VAR7->VAR17 = VAR5->VAR17;
VAR7->VAR18 = VAR5->VAR18;
VAR7->VAR19 = VAR5->VAR19;
VAR7->VAR20 = VAR5->VAR20;
VAR7->VAR21 = VAR5->VAR21;
VAR7->VAR22 = VAR5->VAR22;
VAR7->VAR23 = VAR5->VAR23;
VAR7->VAR24 = VAR5->VAR24;
VAR7->VAR2 = VAR5->VAR2;
}

return 0;
}