FUN1(VAR1, VAR2);
FUN1(VAR3, VAR4);

static int FUN2(struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = VAR6->VAR8;
struct VAR9 *VAR10;
struct gpio_keys_platform_data VAR11;
static struct gpio_keys_button VAR12[6];
unsigned VAR13;

memset(VAR12, 0, sizeof(VAR12));
memset(&VAR11, 0, sizeof(VAR11));

for (VAR13 = 0; VAR13 < FUN3(VAR12); VAR13++) {
VAR12[VAR13].VAR14 = VAR15 + VAR13;
VAR12[VAR13].VAR16 = VAR8->VAR16.VAR17 + VAR13;
VAR12[VAR13].VAR18 = VAR19;
VAR12[VAR13].VAR20 = true;
}

VAR11.VAR12 = VAR12;
VAR11.VAR21 = FUN3(VAR12);
VAR11.VAR22 = 50;
VAR11.VAR23 = "";

VAR10 = FUN4(&VAR8->VAR6, "", -1,
&VAR11, sizeof(VAR11));

FUN5(&VAR8->VAR6, &VAR24);
FUN5(&VAR8->VAR6, &VAR25);
FUN5(&VAR8->VAR6, &VAR26);

VAR6->VAR27 = VAR10;
return 0;
}