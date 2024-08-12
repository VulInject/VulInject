static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, int VAR5, int VAR6)
{
int VAR7, VAR8 = 0, VAR9 = 0;
int VAR10;
struct snd_seq_addr VAR11;

VAR11 = VAR4->VAR10; 

for (VAR10 = 0; VAR10 < VAR12; VAR10++) {

if (VAR10 == VAR2->VAR13)
continue;
VAR4->VAR10.VAR2 = VAR10;
VAR4->VAR10.VAR14 = VAR11.VAR14;
if (VAR11.VAR14 == VAR15)
VAR7 = FUN2(VAR2, VAR4, VAR5, VAR6);
else

VAR7 = FUN3(NULL, VAR4,
VAR16,
VAR5, VAR6);
if (VAR7 < 0) {

if (!VAR8)
VAR8 = VAR7;
continue;
}
VAR9 += VAR7;
}
VAR4->VAR10 = VAR11; 
return (VAR8 < 0) ? VAR8 : VAR9;
}