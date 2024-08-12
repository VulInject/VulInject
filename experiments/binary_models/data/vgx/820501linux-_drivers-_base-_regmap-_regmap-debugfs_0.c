static VAR1 FUN1(struct VAR2 *VAR2,
const char VAR3 *VAR4,
size_t VAR5, VAR6 *VAR7)
{
char VAR8[32];
size_t VAR9;
char *VAR10 = VAR8;
unsigned long VAR11, VAR12;
struct VAR13 *VAR14 = VAR2->VAR15;
int VAR16;

VAR9 = FUN2(VAR5, (sizeof(VAR8)-1));
if (FUN3(VAR8, VAR4, VAR9))
return -VAR17;
VAR8[VAR9] = 0;

while (*VAR10 == '')
VAR10++;
VAR11 = FUN4(VAR10, &VAR10, 16);
while (*VAR10 == '')
VAR10++;
if (FUN5(VAR10, 16, &VAR12))
return -VAR18;


FUN6(VAR19, VAR20);

VAR16 = FUN7(VAR14, VAR11, VAR12);
if (VAR16 < 0)
return VAR16;
return VAR9;
}