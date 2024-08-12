int FUN1(struct VAR1 *VAR2)
{
unsigned int VAR3;
unsigned int VAR4;
int VAR5 = 0;
struct VAR6 *VAR7;
if (!VAR2) return -VAR8;
VAR7 = VAR2->VAR9;
FUN2(&VAR7->mutex);
do {
FUN3(VAR2);
if (!VAR7->VAR10) {
VAR5 = -VAR11;
break;
}
FUN4(VAR2);
for (VAR3 = 0; VAR3 < (VAR2->VAR12) / 4; VAR3++) {
VAR4 = VAR2->VAR13 << 24;
VAR4 |= VAR3;
((unsigned int *)(VAR2->VAR14))[VAR3] = VAR4;
}
VAR2->VAR15 = -VAR16;
FUN5(VAR2->VAR17,      
VAR7->VAR10,       

FUN6(VAR7->VAR10, VAR7->VAR18),
VAR2->VAR14,       
VAR2->VAR12, 
VAR19,
VAR2);
FUN7(VAR2->VAR17, VAR20);
} while (0);
FUN8(&VAR7->mutex);
return VAR5;
}