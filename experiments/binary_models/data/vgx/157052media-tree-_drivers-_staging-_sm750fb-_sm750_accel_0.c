int FUN1(struct VAR1 *VAR2,
const char *VAR3, 
u32 VAR4,          
u32 VAR5, 
u32 VAR6,    
u32 VAR7,   
u32 VAR8,      
u32 VAR9,
u32 VAR10,       
u32 VAR11,
u32 VAR12,   
u32 VAR13,   
u32 VAR14,   
u32 VAR15)     
{
unsigned int VAR16;
unsigned int VAR17;
unsigned int VAR18;
unsigned int VAR19 = 0;
unsigned char VAR20[4];
int VAR21, VAR22;

VAR5 &= 7; 
VAR16 = (VAR11 + VAR5 + 7) / 8;
VAR17 = VAR16 & ~3;
VAR18 = VAR16 & 3;

if (VAR2->FUN2() != 0)
return -1;


FUN3(VAR2, VAR23, 0);


FUN3(VAR2, VAR24, VAR6);


FUN3(VAR2, VAR25,
((VAR7 / VAR8 << VAR26) &
VAR27) |
(VAR7 / VAR8 & VAR28)); 


FUN3(VAR2, VAR29,
((VAR7 / VAR8 << VAR30) &
VAR31) |
(VAR7 / VAR8 & VAR32));


FUN3(VAR2, VAR33,
(VAR5 << VAR34) &
VAR35); 

FUN3(VAR2, VAR36,
((VAR9 << VAR37) & VAR38) |
(VAR10 & VAR39)); 

FUN3(VAR2, VAR40,
((VAR11 << VAR41) & VAR42) |
(VAR12 & VAR43)); 

FUN3(VAR2, VAR44, VAR13);
FUN3(VAR2, VAR45, VAR14);

VAR19 = (VAR15 & VAR46) |
VAR47 | VAR48 |
VAR49 | VAR50;

FUN3(VAR2, VAR51, VAR19 | FUN4(VAR2));


for (VAR21 = 0; VAR21 < VAR12; VAR21++) {

for (VAR22 = 0; VAR22 < (VAR17 / 4); VAR22++)
FUN5(VAR2, *(unsigned int *)(VAR3 + (VAR22 * 4)));

if (VAR18) {
memcpy(VAR20, VAR3+VAR17, VAR18);
FUN5(VAR2, *(unsigned int *)VAR20);
}

VAR3 += VAR4;
}

return 0;
}