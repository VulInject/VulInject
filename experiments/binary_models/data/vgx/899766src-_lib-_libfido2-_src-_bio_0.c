static int
FUN1(const VAR1 *VAR2, const VAR1 *VAR3, void *VAR4)
{
VAR5 *VAR6 = VAR4;

if (FUN2(VAR2) == false ||
FUN3(VAR2) != VAR7) {
FUN4("", VAR8);
return (0); 
}

switch (FUN5(VAR2)) {
case 1: 
return (FUN6(VAR3, &VAR6->VAR9));
case 2: 
return (FUN7(VAR3, &VAR6->VAR10));
}

return (0); 
}