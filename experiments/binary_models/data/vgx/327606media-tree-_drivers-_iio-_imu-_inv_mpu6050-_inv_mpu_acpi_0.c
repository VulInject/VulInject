int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(FUN3(&VAR2->VAR5));

VAR4->VAR6 = NULL;
if (FUN4(&VAR2->VAR5)) {
struct i2c_board_info VAR7;
struct VAR8 *VAR9;
int VAR10 = -1;

VAR9 = FUN5(&VAR2->VAR5);
memset(&VAR7, 0, sizeof(VAR7));

FUN6(VAR11);
switch (VAR12) {
case VAR13:
VAR10 = FUN7(VAR9, VAR2,
&VAR7);
break;

default:
break;
}

if (VAR10 < 0) {

unsigned short VAR14, VAR15;

VAR10 = FUN8(VAR2, &VAR14,
&VAR15);
if (!VAR10 && VAR15) {
char *VAR16;

VAR7.VAR17 = VAR15;
FUN9(VAR7.VAR18, FUN10(&VAR9->VAR5),
sizeof(VAR7.VAR18));
VAR16 = strchr(VAR7.VAR18, '');
if (VAR16)
*VAR16 = '';
FUN11(VAR7.VAR18, "",
sizeof(VAR7.VAR18));
} else
return 0; 
}
VAR4->VAR6 = FUN12(VAR4->VAR19->VAR20[0], &VAR7);
if (!VAR4->VAR6)
return -VAR21;
}

return 0;
}