static int FUN1(struct VAR1 *VAR2, u32 VAR3, u64 VAR4,
u64 VAR5, u32 VAR6, int VAR7,
struct VAR8 *VAR9)
{
unsigned long VAR10 = 0;
int VAR11 = 0;
struct VAR12 *VAR13 = &VAR2->VAR14->VAR13;


VAR11 = FUN2(&VAR2->VAR15.VAR16, &VAR10);
if (VAR11 == -1)
return -VAR17;

VAR9->VAR4 = VAR4;			
VAR9->VAR5 = VAR5;			
VAR9->VAR3 = VAR3;				
VAR9->VAR6 = VAR6;			
VAR9->VAR18 = 0;			
VAR9->VAR19 = FUN3(VAR10);	

if (VAR5 == ~0ull) {
VAR9->VAR20 = VAR21;
VAR9->VAR22 = NULL;
VAR9->VAR23 = 0;
} else {
VAR9->VAR20 = VAR24;
VAR9->VAR22 = FUN4(VAR13, VAR7 * 8,
&(VAR9->VAR23),
VAR25);
if (!VAR9->VAR22)
return -VAR17;
}

return 0;
}