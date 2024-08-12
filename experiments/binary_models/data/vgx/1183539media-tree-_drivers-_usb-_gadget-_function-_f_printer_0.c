static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5	*VAR6 = VAR2->VAR7;
int			VAR8 = VAR4->VAR8;
unsigned long		VAR9;

FUN2(&VAR6->VAR10, VAR9);

FUN3(&VAR4->VAR11);	

switch (VAR8) {


case 0:
if (VAR4->VAR12 > 0) {
FUN4(&VAR4->VAR11, &VAR6->VAR13);
FUN5(VAR6, "", VAR4->VAR12);
} else {
FUN6(&VAR4->VAR11, &VAR6->VAR14);
}
break;


case -VAR15:		
case -VAR16:		
FUN7(VAR6, "", VAR8);
FUN6(&VAR4->VAR11, &VAR6->VAR14);
break;


case -VAR17:		
FUN5(VAR6, "", VAR2->VAR18);
FUN6(&VAR4->VAR11, &VAR6->VAR14);
break;


case -VAR19:


default:
FUN5(VAR6, "", VAR8);
FUN6(&VAR4->VAR11, &VAR6->VAR14);
break;
}

FUN8(&VAR6->VAR20);
FUN9(&VAR6->VAR10, VAR9);
}