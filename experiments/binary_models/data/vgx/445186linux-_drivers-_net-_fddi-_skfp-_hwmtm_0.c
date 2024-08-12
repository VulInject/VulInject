static VAR1 FUN1(struct VAR2 *VAR3,
union s_fp_descr volatile *VAR4,
int VAR5)
{
int VAR6 ;
union s_fp_descr volatile *VAR7 ;
union s_fp_descr volatile *VAR8 ;
u_long	VAR9 ;

FUN2(3, "", VAR4);
for (VAR6=VAR5-1, VAR7=VAR4; VAR6 ; VAR6--) {
VAR8 = VAR7 ;
VAR7++ ;		
VAR8->VAR10.VAR11 = FUN3(VAR12) ;
VAR8->VAR10.VAR13 = &VAR7->VAR10 ;
VAR9 = FUN4(VAR3,(void *)VAR7) ;
VAR8->VAR10.VAR14 = FUN3(VAR9) ;
}
FUN2(3, "", VAR7);
VAR7->VAR10.VAR11 = FUN3(VAR12) ;
VAR7->VAR10.VAR13 = &VAR4->VAR10 ;
VAR9 = FUN4(VAR3,(void *)VAR4) ;
VAR7->VAR10.VAR14 = FUN3(VAR9) ;

for (VAR6=VAR5, VAR7=VAR4; VAR6 ; VAR6--) {
FUN5(&VAR7->VAR10,VAR15) ;
VAR7++;
}
return VAR9;
}