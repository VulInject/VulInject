static bool FUN1(unsigned long VAR1, unsigned long VAR2,
unsigned long VAR3)
{
unsigned int VAR4, VAR5;

VAR5 = VAR6[VAR7].VAR5;
VAR4 = 1 << VAR5;

VAR1 = FUN2(VAR1, VAR4);
VAR2 = FUN3(VAR2, VAR4); 

if (VAR1 >= VAR2)
return false;

if (FUN4(VAR8)) {
FUN5(&VAR9);

VAR10.VAR1 = VAR1;
VAR10.VAR2 = VAR2;
VAR10.VAR4 = VAR4;
VAR10.VAR3 = VAR3;
FUN6(&VAR10.VAR11, 0);

FUN7();

FUN6(&VAR10.VAR12, FUN8());


FUN9();

FUN10(VAR13, &VAR10,
VAR14);

FUN11();
FUN12(&VAR9);
} else
FUN13(VAR1, VAR2, VAR4, VAR3);

return true;
}