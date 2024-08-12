static inline void FUN1(struct VAR1 *VAR1)
{
if(VAR1->VAR2 == NULL || VAR1->VAR2->VAR3)
return;

if(VAR1->VAR2->VAR4 == 1) {

struct VAR5 *VAR6 = &VAR1->VAR2->VAR6;
int VAR7 = FUN2(VAR6->VAR8, VAR6->VAR9);
struct VAR10 *VAR2 = VAR10[VAR7];
struct VAR10 *VAR11 = NULL;

while(VAR2 && VAR2 != VAR1->VAR2) {
VAR11 = VAR2;
VAR2 = VAR2->VAR12;
}

if(VAR2) {
if(VAR11)
VAR11->VAR12 = VAR2->VAR12;
else
VAR10[VAR7] = VAR2->VAR12;
}


if((VAR6->VAR13 & VAR14) == VAR15)
FUN3(-((VAR6->VAR16 + VAR17 - 1)
>> VAR18));

free(VAR1->VAR2);
VAR1->VAR2 = NULL;
} else
VAR1->VAR2->VAR4 --;
}