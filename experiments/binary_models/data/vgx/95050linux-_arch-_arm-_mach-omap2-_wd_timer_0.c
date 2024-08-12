int FUN1(struct VAR1 *VAR2)
{
void VAR3 *VAR4;

if (!VAR2) {
FUN2("", VAR5);
return -VAR6;
}

VAR4 = FUN3(VAR2);
if (!VAR4) {
FUN2("",
VAR2->VAR7, VAR5);
return -VAR6;
}


FUN4(0xAAAA, VAR4 + VAR8);
while (FUN5(VAR4 + VAR9) & 0x10)
FUN6();

FUN4(0x5555, VAR4 + VAR8);
while (FUN5(VAR4 + VAR9) & 0x10)
FUN6();

return 0;
}