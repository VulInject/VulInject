static int FUN1(struct VAR1 *VAR2,
u8 VAR3, u32 VAR4, VAR5 *VAR6)
{
int VAR7 = 0;
u8 VAR8[VAR9];
do {
u8 VAR10 = 0;
u8 VAR11 = 0;
u8 VAR12 = 0;
u8 VAR13 = 0;

VAR2->VAR14[VAR15] &= ~0x03; 
VAR7 = FUN2(VAR2, VAR15);
if (VAR7 < 0)
break;
VAR2->VAR14[VAR16] |= 0x03;  
VAR7 = FUN2(VAR2, VAR16);
if (VAR7 < 0)
break;



if (VAR2->VAR14[VAR17] != 0x83)    
VAR2->VAR14[VAR18] |= 0x40; 

if (!(FUN3(VAR19, VAR4, &VAR10) &&
FUN3(VAR20, VAR4, &VAR11) &&
FUN4(VAR21, VAR4, &VAR12, &VAR13)))
return -VAR22;

VAR2->VAR14[VAR23] = (VAR2->VAR14[VAR23] & ~0x07) | VAR10;
VAR2->VAR14[VAR24] = (VAR3 << 5) | VAR11;

VAR2->VAR14[VAR25] = (VAR2->VAR14[VAR25] & ~0x7C) | (VAR12 << 4) | (VAR13 << 2);

VAR7 = FUN5(VAR2, VAR23, VAR18);
if (VAR7 < 0)
break;
VAR7 = FUN2(VAR2, VAR25);
if (VAR7 < 0)
break;

VAR2->VAR14[VAR26] |= 0x20;    
VAR7 = FUN2(VAR2, VAR26);
if (VAR7 < 0)
break;

VAR2->VAR14[VAR27] |= 0x20;    
VAR7 = FUN2(VAR2, VAR27);
if (VAR7 < 0)
break;

VAR2->VAR14[VAR28] = 0; 
VAR7 = FUN2(VAR2, VAR28);
if (VAR7 < 0)
break;

VAR2->VAR14[VAR29] &= ~0x20;  
VAR7 = FUN2(VAR2, VAR29);
if (VAR7 < 0)
break;

VAR2->VAR14[VAR15] |= 0x03;  
VAR7 = FUN5(VAR2, VAR15, VAR30);
if (VAR7 < 0)
break;

VAR7 = FUN6(VAR2, VAR4);
if (VAR7 < 0)
break;
VAR7 = FUN7(VAR2, VAR4 + 1000000);
if (VAR7 < 0)
break;

FUN8(5);
VAR7 = FUN2(VAR2, VAR24);
if (VAR7 < 0)
break;
VAR7 = FUN2(VAR2, VAR23);
if (VAR7 < 0)
break;
VAR7 = FUN2(VAR2, VAR24);
if (VAR7 < 0)
break;
VAR7 = FUN2(VAR2, VAR23);
if (VAR7 < 0)
break;

VAR2->VAR14[VAR26] &= ~0x20;    
VAR7 = FUN2(VAR2, VAR26);
if (VAR7 < 0)
break;

VAR2->VAR14[VAR27] &= ~0x20;    
VAR7 = FUN2(VAR2, VAR27);
if (VAR7 < 0)
break;
FUN8(10);

VAR2->VAR14[VAR29] |= 0x20;  
VAR7 = FUN2(VAR2, VAR29);
if (VAR7 < 0)
break;
FUN8(60);

VAR2->VAR14[VAR15] &= ~0x03;  
VAR2->VAR14[VAR18] &= ~0x40; 
VAR2->VAR14[VAR16] &= ~0x03;  
VAR7 = FUN2(VAR2, VAR16);
if (VAR7 < 0)
break;
VAR7 = FUN5(VAR2, VAR18, VAR15);
if (VAR7 < 0)
break;
VAR7 = FUN2(VAR2, VAR23);
if (VAR7 < 0)
break;

VAR7 = FUN9(VAR2, VAR8);
if (VAR7 < 0)
break;

*VAR6 = VAR8[VAR28];

} while (0);
return VAR7;
}