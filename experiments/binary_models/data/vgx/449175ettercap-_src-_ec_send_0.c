int FUN1(struct VAR1 *VAR2, u_int16 VAR3, struct VAR4 *VAR5, struct VAR4 *VAR6, VAR7 *VAR8, u_int16 VAR9, VAR7 *VAR10, size_t VAR11, u_int16 VAR12, u_int16 VAR13, u_int16 VAR14)
{
libnet_ptag_t VAR15;
int VAR16, VAR17, VAR18;
VAR19 *VAR20;
VAR17 = FUN2(VAR5->VAR21);


FUN3(VAR2->VAR22 == 0);
VAR20 = VAR2->VAR22;

VAR23;


VAR15 = FUN4(
VAR24,    
VAR9,                    
0x8400,                
0,                     
VAR12,               
VAR13,               
VAR14,               
VAR10,
VAR11,
VAR20,                     
0);                    
FUN5(VAR15, -1, "", FUN6(VAR20));


VAR15 = FUN7(
5353,                                           
FUN8(VAR3),                                   
VAR25 + VAR24 + VAR11,    
0,                                              
NULL,                                           
0,                                              
VAR20,                                              
0);                                             
FUN5(VAR15, -1, "", FUN6(VAR20));

FUN9(VAR20, VAR15, VAR26);


switch (VAR17) {
case VAR27: {
VAR15 = FUN10(                                                                          
VAR28 + VAR25 + VAR24 + VAR11, 
0,                                                           
FUN8(VAR29),                                          
0,                                                           
255,                                                         
VAR30,                                                 
0,                                                           
*VAR5->VAR31,                                                
*VAR6->VAR31,                                                
NULL,                                                        
0,                                                           
VAR20,                                                            
0);
FUN5(VAR15, -1, "", FUN6(VAR20));

FUN9(VAR20, VAR15, VAR26);


VAR18 = VAR32;

break;
}
case VAR33: {
struct libnet_in6_addr VAR34, VAR35;
memcpy(&VAR34, VAR5->VAR36, sizeof(VAR34));
memcpy(&VAR35, VAR6->VAR36, sizeof(VAR35));
VAR15 = FUN11(
0,                                             
0,                                             
VAR25 + VAR24 + VAR11,   
VAR30,                                   
255,                                           
VAR34,                                           
VAR35,                                           
NULL,                                          
0,                                             
VAR20,                                             
0);
FUN5(VAR15, -1, "", FUN6(VAR20));


VAR18 = VAR37;

break;
}
};


VAR15 = FUN12(VAR38->VAR39, VAR8, VAR18, VAR20);
if (VAR15 == -1)
FUN13("");


VAR16 = FUN14(VAR20);
FUN5(VAR16, -1, "", VAR16, FUN6(VAR20));


FUN15(VAR20);

VAR40;

return VAR16;
}