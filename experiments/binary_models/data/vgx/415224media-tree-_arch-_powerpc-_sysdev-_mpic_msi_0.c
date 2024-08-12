static int FUN1(struct VAR1 *VAR1)
{
irq_hw_number_t VAR2;
const struct VAR3 *VAR4 = VAR1->VAR5->VAR4;
struct VAR6 *VAR7;
int VAR8, VAR9, VAR10;
struct of_phandle_args VAR11;

FUN2("");


for (VAR10 = 0;   VAR10 < 8;   VAR10++)
FUN3(&VAR1->VAR12, VAR10);

for (VAR10 = 42;  VAR10 < 46;  VAR10++)
FUN3(&VAR1->VAR12, VAR10);

for (VAR10 = 100; VAR10 < 105; VAR10++)
FUN3(&VAR1->VAR12, VAR10);

for (VAR10 = 124; VAR10 < VAR1->VAR13; VAR10++)
FUN3(&VAR1->VAR12, VAR10);


VAR7 = NULL;
while ((VAR7 = FUN4(VAR7))) {
FUN2("", VAR7->VAR14);

VAR9 = 0;
while (FUN5(VAR7, VAR9++, &VAR11) == 0) {
VAR4->FUN6(VAR1->VAR5, NULL, VAR11.VAR15,
VAR11.VAR16, &VAR2, &VAR8);
FUN3(&VAR1->VAR12, VAR2);
}
}

return 0;
}