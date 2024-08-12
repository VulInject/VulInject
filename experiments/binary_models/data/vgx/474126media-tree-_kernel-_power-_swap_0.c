static int FUN1(void *VAR1)
{
struct VAR2 *VAR3 = VAR1;
unsigned VAR4;

while (1) {
FUN2(VAR3->VAR5, FUN3(&VAR3->VAR6) ||
FUN4());
if (FUN4()) {
VAR3->VAR7 = NULL;
FUN5(&VAR3->VAR8, 1);
FUN6(&VAR3->VAR9);
break;
}
FUN5(&VAR3->VAR6, 0);

for (VAR4 = 0; VAR4 < VAR3->VAR10; VAR4++)
*VAR3->VAR11 = FUN7(*VAR3->VAR11,
VAR3->VAR12[VAR4], *VAR3->VAR13[VAR4]);
FUN5(&VAR3->VAR8, 1);
FUN6(&VAR3->VAR9);
}
return 0;
}

struct VAR14 {
struct VAR15 *VAR7;                  
atomic_t VAR6;                           
atomic_t VAR8;                            
int VAR16;                                  
wait_queue_head_t VAR5;                     
wait_queue_head_t VAR9;                   
size_t VAR13;                           
size_t VAR17;                           
unsigned char VAR12[VAR18];          
unsigned char VAR19[VAR20];          
unsigned char VAR21[VAR22];  
};