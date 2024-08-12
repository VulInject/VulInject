static int FUN1(void *VAR1, struct VAR2 *VAR3,
int write, void *VAR4,
VAR5 *VAR6, VAR7 *VAR8,
int (*VAR9)(bool *VAR10, unsigned long *VAR11, int *VAR12,
int write, void *VAR13),
void *VAR13)
{
int *VAR14, VAR15, VAR16 = 1, VAR17 = 0;
size_t VAR18;
char *VAR19;

if (!VAR1 || !VAR3->VAR20 || !*VAR6 || (*VAR8 && !write)) {
*VAR6 = 0;
return 0;
}

VAR14 = (int *) VAR1;
VAR15 = VAR3->VAR20 / sizeof(*VAR14);
VAR18 = *VAR6;

if (!VAR9)
VAR9 = VAR21;

if (write) {
if (FUN2(VAR8, VAR3))
goto VAR22;

if (VAR18 > VAR23 - 1)
VAR18 = VAR23 - 1;
VAR19 = VAR4;
}

for (; VAR18 && VAR15--; VAR14++, VAR16=0) {
unsigned long VAR24;
bool VAR25;

if (write) {
FUN3(&VAR19, &VAR18);

if (!VAR18)
break;
VAR17 = FUN4(&VAR19, &VAR18, &VAR24, &VAR25,
VAR26,
sizeof(VAR26), NULL);
if (VAR17)
break;
if (FUN5(&VAR25, &VAR24, VAR14, 1, VAR13)) {
VAR17 = -VAR27;
break;
}
} else {
if (FUN5(&VAR25, &VAR24, VAR14, 0, VAR13)) {
VAR17 = -VAR27;
break;
}
if (!VAR16)
FUN6(&VAR4, &VAR18, '');
FUN7(&VAR4, &VAR18, VAR24, VAR25);
}
}

if (!write && !VAR16 && VAR18 && !VAR17)
FUN6(&VAR4, &VAR18, '');
if (write && !VAR17 && VAR18)
FUN3(&VAR19, &VAR18);
if (write && VAR16)
return VAR17 ? : -VAR27;
*VAR6 -= VAR18;
VAR22:
*VAR8 += *VAR6;
return VAR17;
}