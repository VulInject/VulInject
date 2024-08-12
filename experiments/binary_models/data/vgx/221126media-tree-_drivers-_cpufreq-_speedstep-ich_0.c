static void FUN1(unsigned int VAR1)
{
u8 VAR2;
u8 VAR3;
unsigned long VAR4;

if (VAR1 > 0x1)
return;


FUN2(VAR4);


VAR3 = FUN3(VAR5 + 0x50);

FUN4("", VAR5, VAR3);


VAR3 &= 0xFE;
VAR3 |= VAR1;

FUN4("", VAR3, VAR5);


VAR2 = FUN3(VAR5 + 0x20);
VAR2 |= 0x01;
FUN5(VAR2, (VAR5 + 0x20));


FUN5(VAR3, (VAR5 + 0x50));


VAR2 &= 0xfe;
FUN5(VAR2, (VAR5 + 0x20));


VAR3 = FUN3(VAR5 + 0x50);


FUN6(VAR4);

FUN4("", VAR5, VAR3);

if (VAR1 == (VAR3 & 0x1))
FUN4("",
FUN7(VAR6) / 1000);
else
FUN8("");

return;
}