int FUN1(unsigned short VAR1, void VAR2 *VAR3,
unsigned VAR4, unsigned long VAR5)
{
unsigned long VAR6;
unsigned short VAR2 *VAR7 = VAR3;


FUN2(VAR8,
"",
VAR1, VAR7, VAR4, VAR5);



FUN3(&VAR9, VAR6);
FUN4(VAR10, (unsigned short) VAR5);
FUN4(VAR11, (unsigned short) (VAR5 >> 16));
FUN5(&VAR9, VAR6);


while (VAR4-- != 0) {
unsigned short VAR12;
if(FUN6(VAR12, VAR7++))
return -VAR13;
FUN3(&VAR9, VAR6);
FUN4(VAR14, VAR12);
FUN5(&VAR9, VAR6);

FUN7(VAR8,
"",
VAR4, VAR12);

FUN8(VAR1);
}


FUN9(VAR8,
"");

return 0;
}