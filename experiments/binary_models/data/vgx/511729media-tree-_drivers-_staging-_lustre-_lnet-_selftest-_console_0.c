static int
FUN1(struct lnet_process_id VAR1, struct VAR2 **VAR3,
int VAR4)
{
struct VAR5	*VAR6;
unsigned int VAR7 = FUN2(VAR1.VAR8) % VAR9;

FUN3(VAR1.VAR8 != VAR10);

FUN4(VAR6, &VAR11.VAR12[VAR7],
VAR13) {
if (VAR6->VAR14->VAR15.VAR8 != VAR1.VAR8 ||
VAR6->VAR14->VAR15.VAR16 != VAR1.VAR16)
continue;

FUN5(VAR6->VAR14);
*VAR3 = VAR6->VAR14;
return 0;
}

if (!VAR4)
return -VAR17;

FUN6(*VAR3, sizeof(**VAR3) + sizeof(*VAR6));
if (!*VAR3)
return -VAR18;

VAR6 = (struct VAR5 *)(*VAR3 + 1);

VAR6->VAR14 = *VAR3;

VAR6->VAR14->VAR19 = 1;
VAR6->VAR14->VAR15 = VAR1;
VAR6->VAR14->VAR20 = FUN7();
VAR6->VAR14->VAR21 = VAR22;
VAR6->VAR14->VAR23 = 0;
memset(&VAR6->VAR14->VAR24, 0, sizeof(struct VAR25));


FUN8(&VAR6->VAR13, &VAR11.VAR12[VAR7]);
FUN8(&VAR6->VAR26, &VAR11.VAR27);

return 0;
}