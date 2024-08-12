static inline int FUN1( struct VAR1 *VAR2,
struct VAR1 *VAR3 )
{
if (VAR2->VAR4.VAR5!=VAR3->VAR4.VAR5)
return 0;
if (memcmp(VAR2->VAR4.VAR6, VAR3->VAR4.VAR6,
VAR3->VAR4.VAR5)!=0)
return 0;

if (VAR2->VAR7.VAR5!=VAR3->VAR7.VAR5)
return 0;
if (memcmp(VAR2->VAR7.VAR6, VAR3->VAR7.VAR6,
VAR3->VAR7.VAR5)!=0)
return 0;
if (VAR2->VAR8!=VAR3->VAR8) {
if(VAR2->VAR8==0
&& VAR3->VAR8!=VAR9 && VAR3->VAR8!=VAR10)
return 0;
if(VAR3->VAR8==0
&& VAR2->VAR8!=VAR9 && VAR2->VAR8!=VAR10)
return 0;
}
if (VAR2->VAR11.VAR5!=VAR3->VAR11.VAR5)
return 0;
if (memcmp(VAR2->VAR11.VAR6, VAR3->VAR11.VAR6,
VAR3->VAR11.VAR5)!=0)
return 0;

if (VAR2->VAR8!=VAR3->VAR8
&& (VAR2->VAR8==0 || VAR3->VAR8==0)) {

if(VAR2->VAR8==VAR10 || VAR3->VAR8==VAR10) {
if(VAR2->VAR11.VAR5!=3
|| memcmp(VAR2->VAR11.VAR6, "", 3)!=0) {
return 0;
}
}
}


return 1;
}