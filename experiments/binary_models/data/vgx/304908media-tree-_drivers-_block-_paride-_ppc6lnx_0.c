static int FUN1(VAR1 *VAR2)
{
u8 VAR3, VAR4, VAR5;

VAR3 = FUN2(VAR2->VAR6 + 1);

if (VAR3 & 1)
FUN3(VAR3, VAR2->VAR6 + 1);

VAR2->VAR7 = FUN2(VAR2->VAR6);

VAR2->VAR8 = FUN2(VAR2->VAR6 + 2) & 0x5F; 

VAR2->VAR9 = VAR2->VAR8;

VAR2->VAR9 |= VAR10;

FUN3(VAR2->VAR9, VAR2->VAR6 + 2);

if (VAR2->VAR7 == '')
FUN3('', VAR2->VAR6);

FUN3('', VAR2->VAR6);
FUN3('', VAR2->VAR6);
FUN3(VAR2->VAR11, VAR2->VAR6);
FUN3(~VAR2->VAR11,VAR2->VAR6);

VAR2->VAR9 &= ~VAR10;

FUN3(VAR2->VAR9, VAR2->VAR6 + 2);

VAR2->VAR9 = (VAR2->VAR9 & VAR12) | VAR13;

FUN3(VAR2->VAR9, VAR2->VAR6 + 2);

VAR3 = VAR2->VAR14 & 0x0C;

if (VAR3 == 0)
VAR3 = (VAR2->VAR14 & 2) | 1;

FUN3(VAR3, VAR2->VAR6);

VAR2->VAR9 |= VAR10;

FUN3(VAR2->VAR9, VAR2->VAR6 + 2);



VAR2->VAR9 |= VAR15;

FUN3(VAR2->VAR9, VAR2->VAR6 + 2);

VAR4 = ((VAR3 & 0x08) << 4) | ((VAR3 & 0x07) << 3);

VAR5 = FUN2(VAR2->VAR6 + 1) & 0xB8;

if (VAR4 == VAR5)
{
VAR2->VAR9 &= ~VAR15;

FUN3(VAR2->VAR9, VAR2->VAR6 + 2);

VAR5 = (FUN2(VAR2->VAR6 + 1) & 0xB8) ^ 0xB8;

if (VAR4 == VAR5)
{
if (VAR3 & 4)	
VAR2->VAR9 &= ~(VAR10 | VAR13);
else				
VAR2->VAR9 &= ~VAR10;

FUN3(VAR2->VAR9, VAR2->VAR6 + 2);

return(1);
}
}

FUN3(VAR2->VAR8, VAR2->VAR6 + 2);

FUN3(VAR2->VAR7, VAR2->VAR6);

return(0); 
}