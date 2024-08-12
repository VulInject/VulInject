void FUN1(struct VAR1 *VAR2)
{
struct VAR1 *VAR3 = NULL;
u32 VAR4 = 1;
acpi_status VAR5;

FUN2(VAR6);

if (!VAR2) {
VAR7;
}



VAR5 = FUN3(VAR8);
if (FUN4(VAR5)) {
VAR7;
}


while (VAR4 > 0) {



VAR3 = FUN5(VAR2, VAR3);
if (VAR3) {



FUN6(VAR3);



if (VAR3->VAR9) {

VAR4++;
VAR2 = VAR3;
VAR3 = NULL;
}
} else {

VAR4--;


FUN7(VAR2);



VAR3 = VAR2;



VAR2 = VAR2->VAR10;
}
}

(void)FUN8(VAR8);
VAR7;
}