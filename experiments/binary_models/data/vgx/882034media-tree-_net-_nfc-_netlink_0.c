static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
struct VAR7 *VAR8;
u32 VAR9, VAR10, VAR11;
VAR12 *VAR13;
size_t VAR14;
int VAR15, VAR16;

if (!VAR4->VAR17[VAR18] ||
!VAR4->VAR17[VAR19] ||
!VAR4->VAR17[VAR20])
return -VAR21;

VAR9 = FUN2(VAR4->VAR17[VAR18]);
VAR10 = FUN2(VAR4->VAR17[VAR19]);
VAR11 = FUN2(VAR4->VAR17[VAR20]);

VAR6 = FUN3(VAR9);
if (!VAR6 || !VAR6->VAR22 || !VAR6->VAR23)
return -VAR24;

if (VAR4->VAR17[VAR25]) {
VAR13 = FUN4(VAR4->VAR17[VAR25]);
VAR14 = FUN5(VAR4->VAR17[VAR25]);
if (VAR14 == 0)
return -VAR21;
} else {
VAR13 = NULL;
VAR14 = 0;
}

for (VAR15 = 0; VAR15 < VAR6->VAR23; VAR15++) {
VAR8 = &VAR6->VAR22[VAR15];

if (VAR8->VAR26 != VAR10 || VAR8->VAR11 != VAR11)
continue;

VAR6->VAR27 = VAR4;
VAR16 = VAR8->FUN6(VAR6, VAR13, VAR14);
VAR6->VAR27 = NULL;
return VAR16;
}

return -VAR28;
}